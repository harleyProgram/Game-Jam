using System;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEditor;
using UnityEngine;
using UnityEngine.UI;
using Random = System.Random;

public class GameHandler : MonoBehaviour
{
    public List<GameObject> lostItemsList = new List<GameObject>();
    
    public List<GameObject> roomSpawners = new List<GameObject>();

    private GenerateRooms _generateRooms;

    [SerializeField] private Canvas gameOverCanvas;
    [SerializeField] private TMP_Text endText;

    public Transform lostItem;
    
    public float currentTimeLeft = 0.0f;
    private float maxTime = 90.0f;

    [Space]
    private ButtonControls _buttonControls;
    [SerializeField] private Canvas missionControlsCanvas;
    [SerializeField] private Button closeMissionButton, quitButton;
    [SerializeField] private TMP_Text missionText;

    [Space] public Canvas winCanvas;
    public TMP_Text winText;

    public Button winLeaveButton, winReplayButton;

    private bool endGame;

    private void Awake()
    {
        _buttonControls = FindObjectOfType<ButtonControls>();
        _generateRooms = FindObjectOfType<GenerateRooms>();
        
        winLeaveButton.onClick.AddListener(delegate { _buttonControls.ChangeScene("Main Menu"); });
        winReplayButton.onClick.AddListener(delegate { _buttonControls.ChangeScene("Create Rooms"); });
        
    }

    void Start()
    {
        SpawnLostItem();
        SetMissionControlsUI();
    }

    private void Update()
    {
        
        if(Input.GetKeyDown(KeyCode.Escape) && !endGame)
            _buttonControls.OpenCanvas(missionControlsCanvas);
        
        currentTimeLeft += Time.deltaTime;

        if (currentTimeLeft < maxTime) return;
        
        GameOver();
    }

    private void SpawnLostItem()
    {
        int rng = UnityEngine.Random.Range(0, lostItemsList.Count);

        Instantiate(lostItemsList[rng], LostSpot().position, Quaternion.identity);

        lostItem = lostItemsList[rng].transform;
        Debug.Log("look for: " + lostItemsList[rng].name);

    }

    private Transform LostSpot()
    {
        int rng = UnityEngine.Random.Range(0, _generateRooms.finalRooms.Count);

        HiddenSpots hiddenSpots = _generateRooms.finalRooms[rng].GetComponent<HiddenSpots>();

        int rngSpot = UnityEngine.Random.Range(0, hiddenSpots.hiddenLocations.Count);
        
        return hiddenSpots.hiddenLocations[rngSpot].transform;
    }

    public void GameOver()
    {
        endGame = true;
        Time.timeScale = 0.0f;
        Cursor.lockState = CursorLockMode.None;
        gameOverCanvas.enabled = true;
        endText.text = "You had to leave without your " + lostItem.name;

    }

    private void SetMissionControlsUI()
    {
        closeMissionButton.onClick.AddListener(delegate { _buttonControls.CloseCanvas(missionControlsCanvas);});
        quitButton.onClick.AddListener(delegate { _buttonControls.ChangeScene("Main Menu");});
        MissionStatement();
    }

    private void MissionStatement()
    {
        _buttonControls.OpenCanvas(missionControlsCanvas);

        missionText.text = "SH*T... Where did I put my " + lostItem.name + " I swear it was..... \n"  +
                           " Find the missing item before time runs out.";
        
    }


    public void WinSetCondition()
    {
        endGame = true;
        winCanvas.enabled = true;
        Cursor.visible = true;
        Cursor.lockState = CursorLockMode.None;
        Time.timeScale = 0;
        winText.text = "Well done you managed to find " + lostItem.name + " with plenty of time to spare " +
                       (maxTime - currentTimeLeft).ToString("F0");
    }
    
    
    
}
