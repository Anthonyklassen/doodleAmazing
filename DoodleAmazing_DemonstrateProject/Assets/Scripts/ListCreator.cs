using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using Firebase.Storage;
using Firebase.Firestore;
using Firebase.Extensions;

public class ListCreator : MonoBehaviour
{
    [SerializeField] private Transform SpawnPoint = null;

    [SerializeField] private GameObject maze = null;

    [SerializeField] private RectTransform content = null;

    public string[] itemNames = null;
    public string[] itemDescriptions = null;
    public Sprite[] itemImages = null;

    private int listItemPixelHeight = 360;

    public class MazeMetaData
    {
        public string date;
        public string time;

        public MazeMetaData(string inputDate, string inputTime)
        {
            date = inputDate;
            time = inputTime;
        }
    }

    // Start is called before the first frame update
    void Start()
    {
        // Getting Cloud Firebase Storage instance
        FirebaseStorage storage = FirebaseStorage.DefaultInstance;
        StorageReference storageRef = storage.GetReferenceFromUrl("gs://doodle-amazing.appspot.com");

        // Getting Firebase Firestore and Collection instances
        FirebaseFirestore db = FirebaseFirestore.DefaultInstance;
        CollectionReference imagesRef = db.Collection("images");

        // Creating dictionary to hold maze information
        Dictionary<string, MazeMetaData> collectionDictionary = new Dictionary<string, MazeMetaData>();
        int numberOfItems = 0;

        // Creating ListView
        imagesRef.GetSnapshotAsync().ContinueWithOnMainThread(task =>
        {
            QuerySnapshot snapshot = task.Result;

            // Populating dictionary with all maze data from database
            foreach (DocumentSnapshot document in snapshot.Documents)
            {
                Dictionary<string, object> documentDictionary = document.ToDictionary();
                MazeMetaData newMaze = new MazeMetaData(documentDictionary["date"].ToString(), documentDictionary["time"].ToString());
                collectionDictionary.Add(documentDictionary["id"].ToString(), newMaze);
                numberOfItems++;
            }

            // Create reference for list we will show
            StorageReference imagesFileRef = storageRef.Child("images");

            // Set Content Holder Height
            content.sizeDelta = new Vector2(0, numberOfItems * listItemPixelHeight);

            // Variable for holding anchor point for ListView items
            float spawnY;

            // Counter for manually setting the y placement of each listview item
            int counter = 0;

            // Generate ListView
            foreach (KeyValuePair<string, MazeMetaData> entry in collectionDictionary) {
                // Setting up each ListView item's characteristics
                spawnY = counter * listItemPixelHeight;
                Vector3 pos = new Vector3(SpawnPoint.position.x, -spawnY, SpawnPoint.position.z);

                // Instantiate maze and set its parent
                GameObject SpawnedItem = Instantiate(maze, pos, SpawnPoint.rotation);
                SpawnedItem.transform.SetParent(SpawnPoint, false);

                // Get MazeDetails component
                MazeDetails mazeDetails = SpawnedItem.GetComponent<MazeDetails>();

                // Set name and text of ListView item
                mazeDetails.date.text = "Date: " + entry.Value.date;
                TimeSpan time = TimeSpan.FromSeconds(Convert.ToDouble(entry.Value.time));
                string timeString = time.ToString(@"mm\:ss\:fff");
                mazeDetails.time.text = "Latest Time: " + timeString;
                mazeDetails.image.sprite = itemImages[0];

                // Setup the button and delegate for transitioning to maze generation
                SpawnedItem.GetComponent<Button>().onClick.AddListener(delegate{OnClick(entry.Key);});

                counter++;
            }
        });
    }

    void OnClick(string id) {
        string path = $"/images/{id}.png";
        PlayerPrefs.SetString("id", id);
        PlayerPrefs.SetString("imagePath", path);
        SceneManager.LoadScene("GenerateMaze");
    }
}
