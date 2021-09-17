using System.Collections;
using System.Collections.Generic;
using UnityEngine.UI;
using UnityEngine;

public class Victory : MonoBehaviour
{
    public Text scoreText;
    private float finalTime;
    private string minutes;
    private string seconds;

    // Start is called before the first frame update
    void Start()
    {
        finalTime = PlayerPrefs.GetFloat("score");
        minutes = ((int) finalTime / 60).ToString("00");
        seconds = (finalTime % 60).ToString("00.00");
        scoreText.text = "Time: " + minutes + ":" + seconds;
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
