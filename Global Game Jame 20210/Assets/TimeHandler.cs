using System;
using System.Collections;
using System.Collections.Generic;
using System.Globalization;
using UnityEngine;

public class TimeHandler : MonoBehaviour
{

    public GameObject minuteHand, hourHand;

    private float day;

    

    private GameHandler _gameHandler;

    private void Awake()
    {
        _gameHandler = FindObjectOfType<GameHandler>();
    }

    private void Start()
    {
        day = 2.3f / 24f;
    }

    void Update()
    {
        day += Time.deltaTime / 720;
        float dayNormalized = day % 1f;

        float rotationDegreesPerDay = 360f;
        minuteHand.transform.eulerAngles = new Vector3(0,0, dayNormalized * rotationDegreesPerDay);

        float hoursPerDay = 24f;
        hourHand.transform.eulerAngles = new Vector3(0,0, dayNormalized * rotationDegreesPerDay * hoursPerDay);


        

    }
}
