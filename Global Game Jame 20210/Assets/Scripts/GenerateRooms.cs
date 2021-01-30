using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GenerateRooms : MonoBehaviour
{
    public List<RoomHelper> roomsList = new List<RoomHelper>();
    
    public List<GameObject> mediumRooms = new List<GameObject>();

    private void Start()
    {
        SpawnRooms();
    }

    private void SpawnRooms()
    {
        for (int i = 0; i < roomsList.Count; i++)
        {
            for (int j = 0; j < roomsList[i].availablePoints.Count; j++)
            {
                if (roomsList[i].availablePoints[j].roomTypeNeeded == 1)
                {
                    Transform room = roomsList[i].availablePoints[j].transform;
                    Instantiate(mediumRooms[0], room.position, room.rotation);
                }
            }
        }
    }
    
}
