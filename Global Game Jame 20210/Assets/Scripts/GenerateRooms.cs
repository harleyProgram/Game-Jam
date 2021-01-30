using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GenerateRooms : MonoBehaviour
{
    public List<RoomHelper> roomsList = new List<RoomHelper>();
    
    public List<GameObject> largeRooms = new List<GameObject>();
    public List<GameObject> mediumRooms = new List<GameObject>();
    public List<GameObject> mediumLongRooms = new List<GameObject>();
    public List<GameObject> tinyRooms = new List<GameObject>();
    public List<GameObject> smallroom2x1 = new List<GameObject>();
    
    public List<GameObject> finalRooms = new List<GameObject>();

    private void Awake()
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
                    var newRoom = Instantiate(mediumRooms[0], room.position, room.rotation);
                    finalRooms.Add(newRoom);
                }
                
                if (roomsList[i].availablePoints[j].roomTypeNeeded == 0)
                {
                    Transform room = roomsList[i].availablePoints[j].transform;
                    var newRoom = Instantiate(tinyRooms[0], room.position, room.rotation);
                    finalRooms.Add(newRoom);

                }
                
                if (roomsList[i].availablePoints[j].roomTypeNeeded == 2)
                {
                    Transform room = roomsList[i].availablePoints[j].transform;
                    var newRoom = Instantiate(largeRooms[0], room.position, room.rotation);
                    finalRooms.Add(newRoom);

                }
                if (roomsList[i].availablePoints[j].roomTypeNeeded == 3)
                {
                    Transform room = roomsList[i].availablePoints[j].transform;
                    var newRoom = Instantiate(mediumLongRooms[0], room.position, room.rotation);
                    finalRooms.Add(newRoom);

                }
                if (roomsList[i].availablePoints[j].roomTypeNeeded == 4)
                {
                    Transform room = roomsList[i].availablePoints[j].transform;
                    var newRoom = Instantiate(smallroom2x1[0], room.position, room.rotation);
                    finalRooms.Add(newRoom);

                }

            }
        }
    }
    
}
