using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Random = System.Random;

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
                    int rng = UnityEngine.Random.Range(0, mediumRooms.Count);
                    Transform room = roomsList[i].availablePoints[j].transform;
                    var newRoom = Instantiate(mediumRooms[rng], room.position, room.rotation);
                    finalRooms.Add(newRoom);
                }
                
                if (roomsList[i].availablePoints[j].roomTypeNeeded == 0)
                {
                    int rng = UnityEngine.Random.Range(0, tinyRooms.Count);

                    Transform room = roomsList[i].availablePoints[j].transform;
                    var newRoom = Instantiate(tinyRooms[rng], room.position, room.rotation);
                    finalRooms.Add(newRoom);

                }
                
                if (roomsList[i].availablePoints[j].roomTypeNeeded == 2)
                {
                    int rng = UnityEngine.Random.Range(0, largeRooms.Count);

                    Transform room = roomsList[i].availablePoints[j].transform;
                    var newRoom = Instantiate(largeRooms[rng], room.position, room.rotation);
                    finalRooms.Add(newRoom);

                }
                if (roomsList[i].availablePoints[j].roomTypeNeeded == 3)
                {
                    int rng = UnityEngine.Random.Range(0, mediumLongRooms.Count);

                    Transform room = roomsList[i].availablePoints[j].transform;
                    var newRoom = Instantiate(mediumLongRooms[rng], room.position, room.rotation);
                    finalRooms.Add(newRoom);

                }
                if (roomsList[i].availablePoints[j].roomTypeNeeded == 4)
                {
                    int rng = UnityEngine.Random.Range(0, smallroom2x1.Count);

                    Transform room = roomsList[i].availablePoints[j].transform;
                    var newRoom = Instantiate(smallroom2x1[rng], room.position, room.rotation);
                    finalRooms.Add(newRoom);

                }

            }
        }
    }
    
}
