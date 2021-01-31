using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class MainMenuButtons : MonoBehaviour
{
    public Button playButton, controlsButtonEnter, controlsButtonExit, quitButton;
    public Canvas controlCanvas;

    [Space] [Header("Controls Canvas")] 
    public Button firstNextButton;
    public Button secondNextButton, firstBackButton, secondBackButton;

    [Space] 
    public GameObject firstPanel;
    public GameObject secondPanel, thirdPanel;
    
    private void Awake()
    {
        playButton.onClick.AddListener(ChangeScene);
        controlsButtonEnter.onClick.AddListener(EnableControls);
        controlsButtonExit.onClick.AddListener(DisableControls);
        
        firstNextButton.onClick.AddListener(delegate { ChangeToNextSection(secondPanel, firstPanel ); });
        secondNextButton.onClick.AddListener(delegate { ChangeToNextSection(thirdPanel, secondPanel ); });
        firstBackButton.onClick.AddListener(delegate { ChangeToNextSection(firstPanel, secondPanel ); });
        secondBackButton.onClick.AddListener(delegate { ChangeToNextSection(secondPanel, thirdPanel ); });
    }

    private void ChangeScene()
    {
        SceneManager.LoadScene("Create Rooms");
    }

    private void EnableControls()
    {
        controlCanvas.enabled = true;
        firstBackButton.onClick.Invoke();
    }

    private void DisableControls()
    {
        controlCanvas.enabled = false;
    }

    public void ChangeToNextSection(GameObject next, GameObject close)
    {
        close.SetActive(false);
        next.SetActive(true);
    }





}
