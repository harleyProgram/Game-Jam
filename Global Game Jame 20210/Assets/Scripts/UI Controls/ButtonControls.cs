using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class ButtonControls : MonoBehaviour
{

    public Button leaveGame;
    public Button replayGame;


    private void Awake()
    {
        leaveGame.onClick.AddListener(delegate { ChangeScene("Main Menu"); });
        replayGame.onClick.AddListener(delegate { ChangeScene("Create Rooms"); });
    }


    private void ChangeScene(string sceneName)
    {
        SceneManager.LoadScene(sceneName);
    }
    
    
}
