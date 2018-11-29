using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;


public class CustomGyroMover : MonoBehaviour
{
    public Animation anim;
    float angleme, angleDif;
    // Use this for initialization
    void Start()
    {
        angleme = 1;
    }

    // Update is called once per frame
    void Update()
    {
        angleDif = EasyWiFi.ServerControls.CustomGyroServerController.angleDiff; ;
        transform.Translate(Vector3.forward * Math.Abs(angleDif) / 20);
    }
}
