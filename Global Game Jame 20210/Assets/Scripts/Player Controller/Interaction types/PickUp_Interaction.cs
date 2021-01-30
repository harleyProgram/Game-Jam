using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UIElements;

[RequireComponent(typeof(Rigidbody))]
public class PickUp_Interaction : InteractableObject
{
    private PlayerInteractionController _interactionController;

    private Rigidbody rgb;
    private void Awake()
    {
        rgb = GetComponent<Rigidbody>();
        _interactionController = FindObjectOfType<PlayerInteractionController>();

    }

    public override void Interact()
    {
        // Drop last holding item.
        if(_interactionController.holdingItem != null) 
            _interactionController.holdingItem.GetComponent<PickUp_Interaction>().DropItem();

        _interactionController.holdingItem = this.gameObject;

        rgb.isKinematic = true;
        rgb.useGravity = false;
        
        transform.parent = _interactionController.transform;
        transform.position = _interactionController.transform.position;


    }

    public void DropItem()
    {
        _interactionController.holdingItem = null;

        transform.parent = null;
        rgb.isKinematic = false;
        rgb.useGravity = true;


    }
    
    
}
