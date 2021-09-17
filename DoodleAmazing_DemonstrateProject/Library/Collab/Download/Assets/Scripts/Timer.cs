using System.Collections;
using System.Collections.Generic;
using UnityEngine.UI;
using UnityEngine;
using UnityEngine.SceneManagement;

public class Timer : MonoBehaviour
{
    public Text timerText;
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
    }

    // Update is called once per frame
    void Update()
    {
        // Skipping a timer update if the game is paused or finished
        if (isFinished || isPaused) {
            return;
        }

        // Updating timer and timer text
        currentTime = Time.time - startTime;
        minutes = ((int) currentTime / 60).ToString("00");
        seconds = (currentTime % 60).ToString("00.00");
        //timerText.text = minutes + ":" + seconds;
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
        PlayerPrefs.SetFloat("score", currentTime);
        SceneManager.LoadScene("VictoryScene");
    }
}
