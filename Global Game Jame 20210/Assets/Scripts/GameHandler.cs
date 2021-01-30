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

    }

    private Transform LostSpot()
    {
        int rng = UnityEngine.Random.Range(0, _generateRooms.finalRooms.Count);
        
        
        return _generateRooms.finalRooms[rng].transform;
    }
    
    
}
