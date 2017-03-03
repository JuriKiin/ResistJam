﻿using UnityEngine;
using System.Collections;

public class Player : MonoBehaviour {

	public float movementSpeed = 2.0f;
	Rigidbody rb;
	public GameObject gameManager;
	private GameManager gameManagerComponent;

	public float Acceptance = 0.0f;

	void Start()
	{
		rb = GetComponent<Rigidbody> ();
		gameManagerComponent = gameManager.GetComponent<GameManager> ();
	}
	// Update is called once per frame
	void Update () 
	{
		Movement ();

		if(Input.GetKeyUp(KeyCode.Space))	//try to interact with someone
		{
			Vector3 dist = GetClosestNPC ().transform.position - transform.position;

			if(dist.sqrMagnitude < 3.0)	//If we are closer than sqrt(3) away, we can initiate an interaction
			{
				//Debug.Log (GetClosestNPC().name);	//Print out the name of the object
			}
		}

	}

	void Movement()
	{
		float moveX = Input.GetAxis("Horizontal") * movementSpeed * Time.deltaTime;	//Set x movement value.
		float moveY = Input.GetAxis("Vertical") * movementSpeed * Time.deltaTime;	//Set y movement value.

		Vector2 velocity = new Vector2 (moveX, moveY);	//Create a 2D velocity vector from movement data.	
		rb.velocity = new Vector3(velocity.x,velocity.y,0) * movementSpeed;	//Set velocity to a new 3D vector using 2D velocity data.

	}

	GameObject GetClosestNPC()	//Returns closest NPC from player.
	{
		float distance = Mathf.Infinity;	//Init the distance away to infinity (the first gameobject we test will always be closest)
		GameObject closestNPC = null;		//Init the closest game object to null.

		foreach(GameObject npc in gameManagerComponent.npcs)	//Loop through all of the NPCs in the level. (Taken from GameManager.cs)
		{
			Vector3 dist = npc.transform.position - transform.position;	//Calculate the vector between us and the npc.
			if(dist.sqrMagnitude < distance)	//Square the magnitude of that vector, and if it's less than distance
			{
				distance = dist.sqrMagnitude;	//Set the new closest distance to the current distance
				closestNPC = npc;				//Set the closest NPC to this game object that we are testing.
			}
		}
		return closestNPC;	//Return this gameObject
	}
		
	void CheckAcceptance()	//Check to see if we have enough acceptance to win. This should only be called when we finish a task.
	{
		if(Acceptance >= 100.0)	//If we are at 100% we win
		{
			//game is over
		}
		else   //We continue playing
		{
			return;
		}
	}
}
