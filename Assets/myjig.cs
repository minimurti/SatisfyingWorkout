using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class myjig : MonoBehaviour {
    public Animation anim;
    // Use this for initialization
    void Start () {

    }
	
	// Update is called once per frame
	void Update () {
        anim["CINEMA_4D_Main 0"].time = 15;
    }
}
