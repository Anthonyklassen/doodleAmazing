using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEditor;
using System.IO;
using System;
using Firebase.Storage;

public class GenerateMaze : MonoBehaviour
{
    [SerializeField]
    private Texture2D[] images;
    private Texture2D image;
    private RenderTexture downsizedImage;
    private RawImage doodle;
    private byte[] imageData;

    [SerializeField]
    private GameObject wallObject;
    [SerializeField]
    private GameObject groundObject;

    [SerializeField]
    private GameObject ballObject;
    [SerializeField]
    private GameObject goalObject;


    private void Start(){ 
        // Calling routine to get image from Google Firebase Storage
        string path = PlayerPrefs.GetString("imagePath");
        StartCoroutine(DownloadCoroutine(path));
    }

    private IEnumerator DownloadCoroutine(string path) {
        // Getting Cloud Firebase Storage content
        var storage = FirebaseStorage.DefaultInstance;
        var doodleReference = storage.GetReference(path);

        // Download image from Cloud Firebase
        var downloadTask = doodleReference.GetBytesAsync(long.MaxValue);
        yield return new WaitUntil( () => downloadTask.IsCompleted);

        // Make sure we didn't get an exception
        if (downloadTask.Exception != null) {
            Debug.LogError($"Failed to download because {downloadTask.Exception}");
            yield break;
        }

        // Convert bytes of PNG image to texture2D
        image = new Texture2D(2, 2);
        image.LoadImage(downloadTask.Result);

        // Calculating proper scale factor for optimization
        int newScale = (int)Math.Ceiling((double)Math.Sqrt(((image.height * image.width) / (80000))));

        // Using Blit to reduce size of texture for more efficient processing
        downsizedImage = new RenderTexture(image.width / newScale, image.height / newScale, 16, RenderTextureFormat.ARGB32);
        Graphics.Blit(image, downsizedImage);

        // Convert the render texture back to a texture2D
        Texture2D finalImage = toTexture2D(downsizedImage, downsizedImage.height, downsizedImage.width);

        // Storing all pixel information of imag as an arrya of colors
        Color[] pix = finalImage.GetPixels();

        // Getting image width and height
        int worldX = finalImage.width;
        int worldZ = finalImage.height;

        // Setting up pixel positioning variables for generating maze items
        Vector3[] spawnPositions = new Vector3[pix.Length];
        Vector3 startingSpawnPosition = new Vector3(-Mathf.Round(worldX / 2), 0, -Mathf.Round(worldZ / 2));
        Vector3 currentSpawnPos = startingSpawnPosition;

        // Global loop counter
        int counter = 0;

        // Populating spawnPosition array to analyze which pixel locations to create each maze object
        for (int z = 0; z < worldZ; z++){
            for (int x = 0; x < worldX; x++){
                spawnPositions[counter] = currentSpawnPos;
                counter ++;
                currentSpawnPos.x++;
            }

            currentSpawnPos.x = startingSpawnPosition.x;
            currentSpawnPos.z++;
        }

        counter = 0;
        bool sphereFlag = false;
        bool goalFlag = false;

        foreach(Vector3 pos in spawnPositions){

            Color c = pix[counter];

            //Check is the pixel is Black
            if (c.r < 0.35 && c.g < 0.35 && c.b < 0.35){
                    Instantiate(wallObject, pos, Quaternion.identity);

            //Fill with ground tiles
            } else {
                    Instantiate(groundObject, pos, Quaternion.identity);

            }

            if (sphereFlag == false) {
                if(c.b > .5 && c.r < .5 && c.g <.9){
                    Vector3 newPosition = new Vector3(pos.x, 2, pos.z);
                    Debug.Log("Blue pixel spotted, adding sphere!");
                    Instantiate(ballObject, newPosition, Quaternion.identity);
                    sphereFlag = true;
                }
            }

            if (goalFlag == false) {
                if(c.b < .5 && c.r < .2 && c.g > .4){
                    Vector3 newPosition = new Vector3(pos.x, 1, pos.z);
                    Debug.Log("Green pixel spotted, adding sphere!");
                    Instantiate(goalObject, newPosition, Quaternion.identity);
                    goalFlag = true;
                }
            }

            counter ++;
        }
        Debug.Log(counter);
    }

    Texture2D toTexture2D(RenderTexture rTex, int height, int width) {
        Texture2D tex = new Texture2D(height, width, TextureFormat.RGB24, false);
        // ReadPixels looks at the active RenderTexture.
        RenderTexture.active = rTex;
        tex.ReadPixels(new Rect(0, 0, rTex.width, rTex.height), 0, 0);
        tex.Apply();
        return tex;
    }
}