using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[RequireComponent(typeof(SphereCollider))]
public class PlayerInteractionController : MonoBehaviour
{
    private event Action _playerInterActionEvent;

    private InteractableObject _interactableObject = null;

    private void Update()
    {
        if (Input.GetMouseButtonDown(0))
        {
            Debug.Log("Left mouse");
            _interactableObject?.Interact();
        }
    }

    private void OnTriggerEnter(Collider other)
    {
        if (other.GetComponent<InteractableObject>() != null)
        {
            _interactableObject = other.GetComponent<InteractableObject>();
            Debug.Log("Added To Interaction");
        }

    }

    private void OnTriggerExit(Collider other)
    {
        if (other.GetComponent<InteractableObject>() != null)
        {
            _interactableObject = other.GetComponent<InteractableObject>();
            Debug.Log("Removed To Interaction");

        }
    }
}
