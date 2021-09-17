using System.Collections;
using System.Collections.Generic;
using UnityEngine;

 [RequireComponent (typeof (Rigidbody))]
 public class MoveController : MonoBehaviour {
    float speed = 10F;
    Rigidbody rb;
    public GameObject menuButton;
 
    void Start()
    {
        rb = GetComponent<Rigidbody>();
    }

    void FixedUpdate ()
    {
        if (menuButton.activeSelf) {
           rb.constraints = RigidbodyConstraints.None;
        } else {
           rb.constraints = RigidbodyConstraints.FreezePositionX | RigidbodyConstraints.FreezePositionY | RigidbodyConstraints.FreezePositionZ;
        }
        Vector3 acc = Input.acceleration;
        rb.AddForce(acc.x * speed, 0, acc.y * speed);
    }

    
 }
