using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Draws_Interaction : InteractableObject
{
    public Animator animator;
    public string triggerName;
    public override void Interact()
    {
        animator.SetTrigger(triggerName);
    }
}
