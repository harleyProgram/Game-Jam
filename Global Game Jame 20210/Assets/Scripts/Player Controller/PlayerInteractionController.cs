using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[RequireComponent(typeof(SphereCollider))]
public class PlayerInteractionController : MonoBehaviour
{
    private event Action _playerInterActionEvent;

    private InteractableObject _interactableObject = null;
    private Color originalColour;

    private Transform lastHit;
    private void Update()
    {
        RaycastHit hit;

        if (Physics.Raycast(transform.position, transform.TransformDirection(Vector3.forward), out hit, 5f))
        {
            if (lastHit != null && lastHit != hit.transform)
            {
                lastHit.GetComponent<Renderer>().material.color = originalColour;
                _interactableObject = null;
                lastHit = null;
            }
            
            if (hit.transform.GetComponent<InteractableObject>() == null) return;
            
            Renderer renderer = hit.transform.GetComponent<Renderer>();
            if (renderer.material.color != Color.yellow)
            {
                originalColour = renderer.material.color;
                renderer.material.color = Color.yellow;
            }

            lastHit = hit.transform;

            if (_interactableObject == null)
                _interactableObject = hit.transform.GetComponent<InteractableObject>();

            if (Input.GetMouseButtonDown(0))
            {
                _interactableObject?.Interact();
            }
        }
    }

    private void OnTriggerEnter(Collider other)
    {
        if (other.GetComponent<InteractableObject>() != null)
        {
            _interactableObject = other.GetComponent<InteractableObject>();
            
        }

    }

    private void OnTriggerExit(Collider other)
    {
        if (other.GetComponent<InteractableObject>() != null)
        {
            _interactableObject = other.GetComponent<InteractableObject>();
            Renderer renderer = other.GetComponent<Renderer>();
            renderer.material.color = originalColour;

        }
    }
}
