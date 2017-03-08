using UnityEngine;
using System.Collections;

public class Player : MonoBehaviour {

	public float movementSpeed = 2.0f;
	Rigidbody rb;
	public GameObject gameManager;
	private GameManager gameManagerComponent;
	private Interactions interactionManager;
	public bool canWalk = true;
	public float interactionThreshold = 4.5f;
	public float Acceptance = 0.0f;

	void Start()
	{
		rb = GetComponent<Rigidbody> ();
		gameManagerComponent = gameManager.GetComponent<GameManager> ();
		interactionManager = GetComponent<Interactions> ();
	}
	// Update is called once per frame
	void Update () 
	{
		Movement ();

		if(Input.GetKeyUp(KeyCode.Space))	//try to interact with someone
		{
			GameObject npc = GetClosestNPC ();


            Vector3 dist = npc.transform.position - transform.position;

            if (dist.sqrMagnitude < interactionThreshold)   //If we are closer than sqrt(3) away, we can initiate an interaction
            {
                interactionManager.InitInteraction(npc);
                canWalk = false;
                rb.velocity = Vector3.zero;
            }
            
		}

	}

	void Movement()
	{
		if(canWalk)
		{
			float moveX = Input.GetAxis("Horizontal") * movementSpeed * Time.deltaTime;	//Set x movement value.
			float moveY = Input.GetAxis("Vertical") * movementSpeed * Time.deltaTime;	//Set y movement value.

			Vector2 velocity = new Vector2 (moveX, moveY);	//Create a 2D velocity vector from movement data.	
			rb.velocity = new Vector3(velocity.x,velocity.y,0) * movementSpeed;	//Set velocity to a new 3D vector using 2D velocity data.
		}
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
				distance = dist.sqrMagnitude;   //Set the new closest distance to the current distance

                if (npc.GetComponent<NPC>().interactVar)//Check to see if the NPC is allowed to have an interaction
                {
                    closestNPC = npc;               //Set the closest NPC to this game object that we are testing.
                }
			}
		}
		return closestNPC;	//Return this gameObject
	}
		
	void CheckAcceptance()	//Check to see if we have enough acceptance to win. This should only be called when we finish a task.
	{
		if(Acceptance >= 100.0)	//If we are at 100% we win
		{
			// game is over
		}
		else   //We continue playing
		{
			return;
		}
	}

	void OnTriggerEnter(Collider other)
	{
        if (gameManager.GetComponent<Missions>().currentNPC != null)
        {
            if (gameManager.GetComponent<Missions>().currentNPC.missionItem == other.gameObject && gameManager.GetComponent<Missions>().currentNPC.missionInProgress)
            { 
                Destroy(gameManager.GetComponent<Missions>().missionItem);    //Add to inventory instead?
                gameManager.GetComponent<Missions>().haveItem = true;
            }
        }
	}
}
