using UnityEngine;

namespace Player_Controller.Interaction_types
{
    public class AudioObject_Interaction : InteractableObject
    {
        public AudioSource sources;
        public override void Interact()
        {
            if (sources.enabled == false)
            {
                sources.enabled = true;
            }
            else
            {
                sources.enabled = false;
            }
        }
    }
}
