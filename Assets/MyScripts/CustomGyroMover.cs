using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;


public class CustomGyroMover : MonoBehaviour
{
    public Animation anim;
    float angleDif,motion, moveAmount, INERTIA;
    int SPEEDinverse;
    string messagess;
    // Use this for initialization
    void Start()
    {
        SPEEDinverse = 30; //change this to make it move faster or slower
        INERTIA = 0.04f;
    }

    // Update is called once per frame
    void Update()
    {
        angleDif = EasyWiFi.ServerControls.CustomGyroServerController.angleDiff;

        motion = Math.Abs(angleDif) / SPEEDinverse;
        if (motion > moveAmount)
            moveAmount = motion;
        else
            if (moveAmount>0)
                moveAmount -= INERTIA;

        messagess = String.Format("{0:0,0.00}", moveAmount);
        messagess += ": moveAmount";
        Debug.Log(messagess, gameObject);



        transform.Translate(Vector3.forward * moveAmount);
    }
}
