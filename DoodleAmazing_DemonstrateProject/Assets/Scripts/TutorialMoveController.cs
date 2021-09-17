using System.Collections;
using System.Collections.Generic;
using UnityEngine;

 [RequireComponent (typeof (Rigidbody))]
 public class TutorialMoveController : MonoBehaviour {
    float speed = 10F;
    Rigidbody rb;
    private GameObject menuButton;
    private GameObject goalPanel;
 
    void Start()
    {
        rb = GetComponent<Rigidbody>();
        menuButton = GameObject.Find("Menu Button");
        goalPanel = GameObject.Find("Goal Panel");
    }

    void FixedUpdate ()
    {
       if (goalPanel.activeSelf) {         
         rb.constraints = RigidbodyConstraints.FreezePositionX | RigidbodyConstraints.FreezePositionY | RigidbodyConstraints.FreezePositionZ;
      } else if (menuButton.activeSelf) {
         rb.constraints = RigidbodyConstraints.None;
         rb.constraints = RigidbodyConstraints.FreezePositionY;
      } else {
         rb.constraints = RigidbodyConstraints.FreezePositionX | RigidbodyConstraints.FreezePositionY | RigidbodyConstraints.FreezePositionZ;
      }
      Vector3 acc = Input.acceleration;
      rb.AddForce(acc.x * speed, 0, acc.y * speed);
    }

    
 }
