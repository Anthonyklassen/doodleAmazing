using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class UIController : MonoBehaviour
{
    public GameObject menuPanel;
    public GameObject menuButton;
    public GameObject goalPanel;
    public GameObject tiltPanel;
    int counter = 0;

    public void GoToDefaultMaze() {
        SceneManager.LoadScene("SampleScene");
    }

    public void Restart() {
        SceneManager.LoadScene(SceneManager.GetActiveScene().name);
    }

    public void GoToMainMenu() {
        SceneManager.LoadScene("MainMenu");
    }

    public void GoToHighScores() {
        SceneManager.LoadScene("HighScoreScene");
    }

    public void GoToHowToPlay() {
        SceneManager.LoadScene("HowToPlayScene");
    }

    public void ShowHideMenuPanel() {
        if (counter % 2 == 0) {
            menuPanel.gameObject.SetActive(true);
            menuButton.gameObject.SetActive(false);
        } else {
            menuPanel.gameObject.SetActive(false);
            menuButton.gameObject.SetActive(true);
        }
        counter++;
    }

    public void GoToTiltPanel() {
        goalPanel.gameObject.SetActive(false);
        tiltPanel.gameObject.SetActive(true);
        menuButton.gameObject.SetActive(true);
    }

    public void GoToNewDoodle() {
        SceneManager.LoadScene("NewDoodleScene");
    }
}
