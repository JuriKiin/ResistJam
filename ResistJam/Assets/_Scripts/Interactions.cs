using UnityEngine;
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
	void Start ()
    {
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
		

            // If mission is completed or in-progress change the dialogue
			if(npcData.missionInProgress || npcData.missionComplete)
			{

                
                // Check for quest dialogue options and change it to Mission in progress dialogue option
                for (int i = 0; i < 3; i++)
                {
					if (npcData.responseValue [i] == 3 || npcData.responseValue[i] == 6) 
					{
						options [i].GetComponentInChildren<Text> ().text = npcData.missionInProgressPlayerText;
						npcData.responseValue [i] = 6; // Sets it to a "Complete Quest Response value
						if (npcData.missionInProgress)
						{
							npcData.followUpOptions [i] = npcData.missionInProgressNPCText;
						}
						if (npcData.hasCompleted)
						{
							npcData.followUpOptions [i] = npcData.missionCompletedText;
						}
					}

					// Normal Dialogue Option Set up
					else
					{
						options [i].GetComponentInChildren<Text>().text = npcData.dialogueOptions [i];
					}
                }
                return;
			}
			else if(player.inMission)
			{
				for (int i = 0; i < 3; i++)
				{
					if (npcData.responseValue [i] == 3) 
					{
						npcData.followUpOptions [i] = "Sorry, you are currently helping somone else.";
					}
				}
			}

            // Normal Text Dialogue
			if(player.Acceptance < npcData.minAcceptance)
			{
				greetingText.text = "You are not accepted enough to talk to this person.";
				for(int i=0;i<3;i++)
				{
					options [i].GetComponentInChildren<Text>().text = "";
					options [i].interactable = false;
				}
			}
			else
			{
				for(int i=0;i<3;i++)
				{
					options [i].GetComponentInChildren<Text>().text = npcData.dialogueOptions [i];
				}
			}


		}
	}

	public void ChangeText(int option)
	{
		
		NPC npcData = currentNPC.GetComponent<NPC> ();		//Get the NPC component from the npc we're engaged with

		greetingText.text = npcData.followUpOptions [option];	//Set the greeting text to the followup

		for(int i=0;i<3;i++)
		{
			options [i].GetComponentInChildren<Text> ().text = "";	//Set button text to empty
			options [i].interactable = false;						//Set button as non-interactable.
		}

		int responseValue = npcData.responseValue [option];




        // Response to how the player choses text dialogue
		switch(responseValue)	//Decide how to add acceptance for only talking.
		{
            // Case 0 is a Blank interaction
            case 0:
                break;
            
            // Case 1 is a good response, gains acceptance
		case 1:
				player.Acceptance += npcData.acceptanceValue;
				npcData.acceptanceValue = 0;
			    break;

            // Case 2 is a bad response, lose acceptance
		    case 2:
			    player.Acceptance -= npcData.acceptanceValue;
				npcData.acceptanceValue = 0;
                if(player.Acceptance < 0)
                {
                    player.Acceptance = 0;
                }
			    break;

            // Case 3 accepts a mission, sets missioninprogress to true, and sets the mission
		    case 3:
			if(!player.inMission)
			{
				Manager.GetComponent<Missions>().SetMissionDetails(npcData);    //Set mission details.
				npcData.missionInProgress = true;
				player.inMission = true;
			}
                break;

            // Case 4 You have completed the NPC's task
			//	      This is the variable you set true when you have
			//        Completed what has been asked of you
            case 4:
                npcData.hasCompleted = true;
                break;
                
            // Case 5 Activates a secondary NPC
            case 5:
                npcData.secondaryNPC.interactVar = true;
                break;

			// Case 6 (NEVER USE THIS, IT AUTOMATICALLY IS USED WEHN ACCEPTING A QUEST)
			//		  Used for returning to an NPC to determine whether you have
			//		  Completed their mission or not. If you have the misison becomes completed
			//        If not the quest giver will tell you that you still need to complete your mission.
			case 6:
			if(npcData.hasCompleted)
				{
					npcData.missionComplete = true;
					player.inMission = false;
				}
				else
				{
					// Quest is not complete do nothing
				}
			break;
            //Case 7 
            //If the NPC is used to in a "talk" quest then disable their interactvar and set them to talkedTo true
            case 7:
                npcData.talkedTo = true;
                npcData.interactVar = false;
                break;


            default:
			break;
		}
	}
}
