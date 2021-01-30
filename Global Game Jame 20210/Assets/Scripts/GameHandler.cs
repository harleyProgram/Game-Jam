using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Random = System.Random;

public class GameHandler : MonoBehaviour
{
    public List<GameObject> lostItemsList = new List<GameObject>();
    
    public List<GameObject> roomSpawners = new List<GameObject>();

    private GenerateRooms _generateRooms;

    private void Awake()
    {
        _generateRooms = FindObjectOfType<GenerateRooms>();

    }

    void Start()
    {
        SpawnLostItem();
    }

    private void SpawnLostItem()
    {
        int rng = UnityEngine.Random.Range(0, lostItemsList.Count);

        Instantiate(lostItemsList[rng], LostSpot().position, Quaternion.identity);
        
        Debug.Log("look for: " + lostItemsList[rng].name);

    }

    private Transform LostSpot()
    {
        int rng = UnityEngine.Random.Range(0, _generateRooms.finalRooms.Count);

        HiddenSpots hiddenSpots = _generateRooms.finalRooms[rng].GetComponent<HiddenSpots>();

        int rngSpot = UnityEngine.Random.Range(0, hiddenSpots.hiddenLocations.Count);
        
        return hiddenSpots.hiddenLocations[rngSpot].transform;
    }
    
    
}
