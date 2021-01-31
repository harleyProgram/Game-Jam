using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class MainMenuButtons : MonoBehaviour
{
    public Button playButton, controlsButtonEnter, controlsButtonExit, quitButton, creditButton, closeCreditButton;
    public Canvas controlCanvas;
    public Canvas creditCanvas;

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
        
        quitButton.onClick.AddListener(CloseGame);
        
        firstNextButton.onClick.AddListener(delegate { ChangeToNextSection(secondPanel, firstPanel ); });
        secondNextButton.onClick.AddListener(delegate { ChangeToNextSection(thirdPanel, secondPanel ); });
        firstBackButton.onClick.AddListener(delegate { ChangeToNextSection(firstPanel, secondPanel ); });
        secondBackButton.onClick.AddListener(delegate { ChangeToNextSection(secondPanel, thirdPanel ); });

        creditButton.onClick.AddListener(delegate { OpenCanvas(creditCanvas); });
        closeCreditButton.onClick.AddListener(delegate { CloseCanvas(creditCanvas); });
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

    private void CloseCanvas(Canvas canvas)
    {
        canvas.enabled = false;
        Time.timeScale = 1;
    }
    private void OpenCanvas(Canvas canvas)
    {
        canvas.enabled = true;
        Time.timeScale = 0 ;

    }

    private void CloseGame()
    {
        Application.Quit();
    }





}
