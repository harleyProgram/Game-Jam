using System;
using System.Collections;
using System.Collections.Generic;
using Player_Controller.Interaction_types;
using UnityEngine;

[RequireComponent(typeof(SphereCollider))]
public class PlayerInteractionController : MonoBehaviour
{

    private InteractableObject _interactableObject = null;
    private Color originalColour;

    private Transform lastHit;

    public GameObject holdingItem;
    
    private void Update()
    {
        
        if (Input.GetMouseButtonDown(1) && holdingItem != null) // Drop item holding in the hand.
        {
            holdingItem.GetComponent<PickUp_Interaction>().DropItem();
        }
        
        RaycastHit hit;

        //Debug.DrawRay(transform.position,transform.TransformDirection(Vector3.forward), Color.red,1f);
        if (Physics.Raycast(transform.position, transform.TransformDirection(Vector3.forward), out hit, 8f))
        {
            if (lastHit != null)
            {
                if (lastHit.GetComponent<InteractableObject>() != null)
                {
                    lastHit.GetComponent<Renderer>().material.color = originalColour;
                    _interactableObject = null;
                    lastHit = null;
                }
            }

            if (hit.transform.GetComponent<InteractableObject>() == null) return;
            
            Renderer renderer = hit.transform.GetComponent<Renderer>();
            if (renderer.material.color != Color.yellow || renderer.material.color != Color.green)
            {
                originalColour = renderer.material.color;
                if(hit.transform.GetComponent<LostItem_Interaction>() != null)
                    renderer.material.color = Color.green;
                else
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
