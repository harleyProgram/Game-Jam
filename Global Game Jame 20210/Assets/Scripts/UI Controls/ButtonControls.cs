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


    public void ChangeScene(string sceneName)
    {
        SceneManager.LoadScene(sceneName);
    }

    public void OpenCanvas(Canvas canvas)
    {
        canvas.enabled = true;
        Time.timeScale = 0;
        Cursor.lockState = CursorLockMode.None;
        Cursor.visible = true;
    }

    public void CloseCanvas(Canvas canvas)
    {
        canvas.enabled = false;
        Time.timeScale = 1;
        Cursor.lockState = CursorLockMode.Locked;
        Cursor.visible = false;


    }
    
    
}
