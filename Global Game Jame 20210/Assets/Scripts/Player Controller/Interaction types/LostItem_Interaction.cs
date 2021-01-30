using UnityEngine;
using UnityEngine.SceneManagement;

namespace Player_Controller.Interaction_types
{
    public class LostItem_Interaction : InteractableObject
    {
        
        public override void Interact()
        {
            Debug.Log("You found it");
            SceneManager.LoadScene("Create Rooms");
        }
    }
}
