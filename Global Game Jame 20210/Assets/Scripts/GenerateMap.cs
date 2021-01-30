using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GenerateMap : MonoBehaviour
{
    public GameObject startingRoom;
    public List<GameObject> roomPrefabs = new List<GameObject>();
    
    [Header("Up Tile pieces")]
    public List<GameObject> upTileSets = new List<GameObject>();
    [Header("Down Tile pieces")]
    public List<GameObject> downTileSets = new List<GameObject>();
    [Header("Left Tile pieces")]
    public List<GameObject> leftTileSets = new List<GameObject>();
    [Header("Right Tile pieces")]
    public List<GameObject> rightTileSets = new List<GameObject>();

    public int maxRooms;


    private void Start()
    {
        GenerateCustomMap();
    }


    private void GenerateCustomMap()
    {
        List<RoomHelper> currentRoom = new List<RoomHelper>();
           currentRoom.Add(startingRoom.GetComponent<RoomHelper>());

        bool created;
        
        for (int i = 0; i < maxRooms; i++)
        {
            created = false;
            for (int r = 0; r < currentRoom.Count; r++)
            {
                Debug.Log(currentRoom.Count);
                if (created) break;
                
                for (int j = 0; j < currentRoom[r].availablePoints.Count; j++)
                {
                    PointsHelper pointsHelper = currentRoom[r].availablePoints[j];

                    if (pointsHelper.inUse == false)
                    {
                        if (pointsHelper.roomTypeNeeded == 0)
                        {
                            int rng = UnityEngine.Random.Range(0, upTileSets.Count);
                            var newRoom = Instantiate(upTileSets[rng], pointsHelper.transform.position,
                                upTileSets[rng].transform.rotation);

                            pointsHelper.inUse = true;
                            created = true;
                            currentRoom.Add(newRoom.GetComponent<RoomHelper>());
                        }
                        else if (pointsHelper.roomTypeNeeded == 1)
                        {
                            int rng = UnityEngine.Random.Range(0, downTileSets.Count);
                            var newRoom = Instantiate(downTileSets[rng], pointsHelper.transform.position,
                                downTileSets[rng].transform.rotation);

                            pointsHelper.inUse = true;
                            created = true;
                            currentRoom.Add(newRoom.GetComponent<RoomHelper>());
                        }
                        else if (pointsHelper.roomTypeNeeded == 2)
                        {
                            int rng = UnityEngine.Random.Range(0, leftTileSets.Count);
                            var newRoom = Instantiate(leftTileSets[rng], pointsHelper.transform.position,
                                leftTileSets[rng].transform.rotation);

                            pointsHelper.inUse = true;
                            created = true;
                            currentRoom.Add(newRoom.GetComponent<RoomHelper>());
                        }
                        else if (pointsHelper.roomTypeNeeded == 3)
                        {
                            int rng = UnityEngine.Random.Range(0, rightTileSets.Count);
                            var newRoom = Instantiate(rightTileSets[rng], pointsHelper.transform.position,
                                rightTileSets[rng].transform.rotation);

                            pointsHelper.inUse = true;
                            created = true;
                            currentRoom.Add(newRoom.GetComponent<RoomHelper>());
                        }
                        else if (pointsHelper.roomTypeNeeded == 4)
                        {
                            int rng = UnityEngine.Random.Range(0, roomPrefabs.Count);
                            var newRoom = Instantiate(roomPrefabs[rng], pointsHelper.transform.position,
                                roomPrefabs[rng].transform.rotation);

                            pointsHelper.inUse = true;
                            created = true;
                            //currentRoom.Add(newRoom.GetComponent<RoomHelper>());
                        }
                        break;
                    }

                }
                
            }
        }
    }
}
