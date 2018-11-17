using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AnimationControl : MonoBehaviour {
    public static Animator anim;
	// Use this for initialization
	void Start () 
    {
        anim = this.GetComponent<Animator>();
        anim.speed = 0f;

    }

    // Update is called once per frame
    void Update()
    {
        float vert = Input.GetAxis("Vertical");
        float horr = Input.GetAxis("Horizontal");


        if (vert < 0) 
            anim.Play("CINEMA_4D_Main", 0, 0.5f);
        
        if (vert > 0)
            anim.Play("CINEMA_4D_Main", 0, 0.0f);

        if (horr < 0)
            anim.Play("CINEMA_4D_Main", 0, 0.25f);

        if (horr > 0)
            anim.Play("CINEMA_4D_Main", 0, 0.75f);
    }
}
