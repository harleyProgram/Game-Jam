using System;
using UnityEngine;

namespace Player_Controller.Interaction_types
{
    public class Light_Interaction : InteractableObject
    {
        [SerializeField] private Light _lightSource;
        [SerializeField] private bool _switchedOn;
        
        public override void Interact()
        {
            Debug.Log("Interacting");
            if (_switchedOn)
            {
                _lightSource.enabled = false;
                _switchedOn = false;
            }
            else
            {
                _lightSource.enabled = true;
                _switchedOn = true;
            }
        }
    }
}
