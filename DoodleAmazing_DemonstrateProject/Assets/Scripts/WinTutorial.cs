using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class WinTutorial : MonoBehaviour
{
    private UIController controller;

    void OnCollisionEnter(Collision collision)
    {
        controller = GameObject.FindObjectOfType(typeof(UIController)) as UIController;
        controller.GoToScoringPanel();
    }
}
