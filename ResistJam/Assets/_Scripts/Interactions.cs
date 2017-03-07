﻿using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class Interactions : MonoBehaviour
{
	GameObject interactionWindow;
	public bool activeInteraction = false;

	public Text nameText;
	public Text greetingText;
	public Button[] options;
	Player player;

	public GameObject Manager;
	GameObject currentNPC;

	// Use this for initialization
	void Start () {
		interactionWindow = GameObject.FindGameObjectWithTag ("InteractionWindow");
		interactionWindow.SetActive (false);
		player = GetComponent<Player> ();
	}

	void Update()
	{
		if(Input.GetKeyUp(KeyCode.Return))
		{
			activeInteraction = false;
			GetComponent<Player> ().canWalk = true;
			interactionWindow.SetActive (false);
		}
	}

	public void InitInteraction(GameObject npc)
	{
		currentNPC = npc;
		NPC npcData = currentNPC.GetComponent<NPC> ();

		interactionWindow.SetActive (true);
		activeInteraction = true;

		for(int i=0;i<3;i++)
		{
			options [i].interactable = true;
		}

		//Set data if those values aren't null.
		if(npcData.name == "" || npcData.greeting == "")
		{
			nameText.text = "error | null";
			greetingText.text = "error | null";
		}
		else
		{
			//Set data
			nameText.text = npcData.characterName + ":";
			greetingText.text = npcData.greeting;

			if(npcData.hasCompleted)
			{
				player.Acceptance += npcData.acceptanceValue;
				/*
				for(int i=0;i<3;i++)
				{
					for(int j=0;j<3;j++)
					{
						if(j==npcData.responseValue[i])
						{
							options [i].interactable = false;	
						}
					}
				}
				*/
				for(int i=0;i<3;i++)
				{
					options [i].GetComponentInChildren<Text> ().text = "";
					options [i].interactable = false;
				}
				return;
			}
			for(int i=0;i<3;i++)
			{
				options [i].GetComponentInChildren<Text>().text = npcData.dialogueOptions [i];
			}

		}
	}

	public void ChangeText(int option)
	{
		
		NPC npcData = currentNPC.GetComponent<NPC> ();		//Get the NPC component from the npc we're engaged with
		greetingText.text = npcData.followUpOptons [option];	//Set the greeting text to the followup
		for(int i=0;i<3;i++)
		{
			options [i].GetComponentInChildren<Text> ().text = "";	//Set button text to empty
			options [i].interactable = false;						//Set button as non-interactable.
		}

		int responseValue = npcData.responseValue [option];

		switch(responseValue)	//Decide how to add acceptance for only talking.
		{
            // Case 0 is a Blank interaction
            case 0:
                break;
            
            // Case 1 is a good response, gains acceptance
		    case 1:
			    player.Acceptance += npcData.acceptanceValue;
			    break;

            // Case 2 is a bad response, lose acceptance
		    case 2:
			    player.Acceptance -= npcData.acceptanceValue;
			    break;

            // Case 3 accepts a mission, sets missioninprogress to true, and sets the mission
		    case 3:
                Manager.GetComponent<Missions>().SetMissionDetails(npcData);    //Set mission details.
                npcData.missionInProgress = true;
                break;

            // Case 4 Completes an npc's mission
            case 4:
                npcData.hasCompleted = true;
                break;
                
            // Case 5 Activates a secondary NPC
            case 5:
                npcData.secondaryNPC.interactVar = true;
                break;



            default:
			break;
		}
	}
}
