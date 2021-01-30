using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Random = UnityEngine.Random;

public class Footsteps : MonoBehaviour
{

   
    CharacterController controller;
    AudioSource audioSource;
    void Start()
    {
        controller = GetComponent<CharacterController>();
        audioSource = GetComponent<AudioSource>();
    }

    
    void Update()
    {
        if (controller.velocity.magnitude > 0f && audioSource.isPlaying == false)
        {
            audioSource.pitch = Random.Range(0.8f, 1.1f);
            GetComponent<AudioSource>().Play();
        }
    }
}
