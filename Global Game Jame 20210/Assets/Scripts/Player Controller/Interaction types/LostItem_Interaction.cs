using System;
using UnityEngine;
using UnityEngine.SceneManagement;

namespace Player_Controller.Interaction_types
{
    public class LostItem_Interaction : InteractableObject
    {

        private GameHandler _gameHandler;

        private void Awake()
        {
            _gameHandler = FindObjectOfType<GameHandler>();
        }

        public override void Interact()
        {
            _gameHandler.WinSetCondition();
        }
    }
}
