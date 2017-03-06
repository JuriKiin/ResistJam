using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class GameManager : MonoBehaviour {

	public GameObject[] npcs;	//Array of NPCs.

	void Start ()
	{
		npcs = GameObject.FindGameObjectsWithTag ("NPC");	//Set an array with all GameObjects with the tag 'NPC'
	}
}
