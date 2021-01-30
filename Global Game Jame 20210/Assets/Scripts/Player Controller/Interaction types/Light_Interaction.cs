using System;
using UnityEngine;

namespace Player_Controller.Interaction_types
{
    public class Light_Interaction : InteractableObject
    {
        [SerializeField] private Light _lightSource;
        [SerializeField] private bool _switchedOn;

        public bool externalUse;
        public Mesh switchOnMesh, switchOffMesh;

        private MeshFilter _meshFilter;

        private void Awake()
        {
            _meshFilter = GetComponent<MeshFilter>();
        }

        public override void Interact()
        {
            if (_switchedOn)
            {
                _lightSource.enabled = false;
                _switchedOn = false;

                if (externalUse)
                    _meshFilter.mesh = switchOffMesh;

            }
            else
            {
                _lightSource.enabled = true;
                _switchedOn = true;
                if (externalUse)
                    _meshFilter.mesh = switchOnMesh;
            }
        }
    }
}
