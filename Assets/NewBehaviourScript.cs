using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class NewBehaviourScript : MonoBehaviour {

    // Use this for initialization
    void Start()
    {
        Input.gyro.enabled = true;
    }


    void Update()
    {
        transform.rotation = Input.gyro.attitude;
    }
}
