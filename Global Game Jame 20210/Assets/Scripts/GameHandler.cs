using System;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
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

    private void Awake()
    {
        _generateRooms = FindObjectOfType<GenerateRooms>();
        
    }

    void Start()
    {
        SpawnLostItem();
        Time.timeScale = 1.0f;
    }

    private void Update()
    {
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
        Time.timeScale = 0.0f;
        gameOverCanvas.enabled = true;
        endText.text = "You had to leave without your " + lostItem.name;

    }
    
    
}
