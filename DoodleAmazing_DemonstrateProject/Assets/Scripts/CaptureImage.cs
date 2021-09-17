using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using System.IO;
using UnityEngine.SceneManagement;
using Firebase.Storage;
using Firebase.Firestore;
using Firebase.Extensions;

public class CaptureImage : MonoBehaviour
{
    // General image objects
    public RawImage image;
    public RawImage textureImage;
    public Texture2D doodlePhoto;
    public RectTransform imageParent;
    public AspectRatioFitter imageFitter;

    // GameObjects for manipulating scene
    public GameObject shutterButton;
    public Text title;
    public GameObject useImagePanel;
    public GameObject menuButton;

    // Image rotation
    Vector3 rotationVector = new Vector3(0f, 0f, 0f);

    // Image uvRect
    Rect defaultRect = new Rect(0f, 0f, 1f, 1f);
    Rect fixedRect = new Rect(0f, 1f, 1f, -1f);

    WebCamTexture cameraTexture;

    // Start is called before the first frame update
    void Start()
    {
        // Create new WebCamTexture
        cameraTexture = new WebCamTexture();

        // Set camera filter mode for smoother image
        cameraTexture.filterMode = FilterMode.Trilinear;

        // Start the Camera
        cameraTexture.Play();

    }

    // Update is called once per frame
    void Update()
    {
        // Skip making camera adjustments until reported camera width is correct
        if (cameraTexture.width < 100) {
            return;
        }

        // Rotate image to show correct orientation
        rotationVector.z = -cameraTexture.videoRotationAngle;
        image.rectTransform.localEulerAngles = rotationVector;

        // Set AspectioRatioFitter's ratio
        float videoRatio = (float)cameraTexture.width / (float)cameraTexture.height;
        imageFitter.aspectRatio = videoRatio;

        // Unflip if vertically flipped
        image.uvRect = cameraTexture.videoVerticallyMirrored ? fixedRect : defaultRect;

        GetComponent<RawImage>().texture = cameraTexture;
    }

    public void Trigger() {
        // Handling UI elements
        shutterButton.SetActive(false);
        menuButton.SetActive(false);
        useImagePanel.SetActive(true);
        title.text = "Use this photo to generate your maze?";

        // Save current camera feed to a new texture
        doodlePhoto = new Texture2D(cameraTexture.width, cameraTexture.height);
        doodlePhoto.SetPixels(cameraTexture.GetPixels());
        doodlePhoto.Apply();

        // Stopping live image feed now that we have our photo
        cameraTexture.Pause();
    }

    public void ResetTrigger() {
        // Handling UI elements
        shutterButton.SetActive(true);
        menuButton.SetActive(true);
        useImagePanel.SetActive(false);
        title.text = "Take a picture of your Doodle!";

        // Starting live image feed back up again and resetting photo
        cameraTexture.Play();
    }

    private IEnumerator UploadCoroutine() {
        // Getting Cloud Firebase Storage and Firebase Firestore instances
        FirebaseStorage storage = FirebaseStorage.DefaultInstance;
        FirebaseFirestore db = FirebaseFirestore.DefaultInstance;

        // Create new id and reference for image
        var id = Guid.NewGuid().ToString();
        string path = $"/images/{id}.png";
        PlayerPrefs.SetString("imagePath", path);
        var doodleReference = storage.GetReference(path);

        // Upload data about the image to Google Firestore
        DocumentReference docRef = db.Collection("images").Document($"{id}");
        Dictionary<string, object> image = new Dictionary<string, object>
        {
            { "id", id },
            { "date", DateTime.Today.ToString("d") },
            { "time", "0" },
        };
        docRef.SetAsync(image).ContinueWithOnMainThread( task =>{});

        // Encode texture to a PNG and upload it to the cloud
        var bytes = doodlePhoto.EncodeToPNG();
        var uploadTask = doodleReference.PutBytesAsync(bytes);
        yield return new WaitUntil( () => uploadTask.IsCompleted);

        // Make sure we didn't get an exception
        if (uploadTask.Exception != null) {
            Debug.LogError($"Failed to upload because {uploadTask.Exception}");
            yield break;
        }

        SceneManager.LoadScene("GenerateMaze");
    }

    public void GoToGenerateMaze() {
        StartCoroutine(UploadCoroutine());
    }
}
