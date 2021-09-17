using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine.UI;
using UnityEngine;
using UnityEngine.SceneManagement;
using Firebase.Storage;
using Firebase.Firestore;
using Firebase.Extensions;

public class Timer : MonoBehaviour
{
    private Text timerText;
    private bool isFinished = false;
    private bool isPaused = false;
    private float startTime;
    static public float currentTime;
    private float pausedTime;
    private string minutes;
    private string seconds;

    // Start is called before the first frame update
    void Start()
    {
        // Getting the starting time of the game
        startTime = Time.time;

        // Getting timerText object
        timerText = GameObject.Find("Timer Text").GetComponent<Text>();
    }

    // Update is called once per frame
    void Update()
    {
        // Skipping a timer update if the game is paused or finished
        if (isFinished || isPaused || gameObject.name != "Menu Canvas") {
            return;
        }

        // Updating timer and timer text
        currentTime = Time.time - startTime;
        minutes = ((int) currentTime / 60).ToString("00");
        seconds = (currentTime % 60).ToString("00.00");
        timerText.text = minutes + ":" + seconds;
    }

    public void Pause() {
        // Flipping timer pause state
        isPaused = !isPaused;

        // Correctly timer for length of pause time
        if (isPaused) {
            pausedTime = Time.time;
        }
        else {
            startTime += (Time.time - pausedTime);
        }
    }

    void OnCollisionEnter(Collision collision)
    {
        isFinished = true;
        UpdateCloudHighScore();
        PlayerPrefs.SetFloat("score", currentTime);
        SceneManager.LoadScene("VictoryScene");
    }

    void UpdateCloudHighScore() {
        // Getting Firebase Firestore instance
        FirebaseFirestore db = FirebaseFirestore.DefaultInstance;

        // Get reference for current maze in the cloud
        var id = PlayerPrefs.GetString("id");

        // Update the time field data about the maze in Google Firestore
        DocumentReference docRef = db.Collection("images").Document($"{id}");
        Dictionary<string, object> update = new Dictionary<string, object>
        {
            { "time", currentTime.ToString() },
        };
        docRef.SetAsync(update, SetOptions.MergeAll).ContinueWithOnMainThread( task =>{});
    }
}
