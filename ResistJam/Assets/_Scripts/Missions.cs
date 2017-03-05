using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public enum MissionType
{
	Talk, Fetch, GroceriesHelp, TireHelp, None	//Talk is handled outside of a mission. It is purley within interaction.cs
}


public class Missions : MonoBehaviour
{
	public MissionType currentMission;
	bool missionComplete = true;
	public Text missionText;

	//Fetch
	public GameObject fetchItem;
	NPC currentNPC;

    // Help Groceries
    public GameObject groceriesItem;


    // Mission Booleans
    public bool haveItem = false;



    void Start () 
	{
		currentMission = MissionType.None;	//Set the default mission to none.
	}

	void Update () 
	{

		switch(currentMission)	//What to do if a certain mission is active
		{
		case MissionType.None:
			//Do nothing
			break;

		case MissionType.Talk:
			break;

		case MissionType.Fetch:

			if(haveItem)
			{
				currentNPC.hasCompleted = true;
			}

			break;

		case MissionType.GroceriesHelp:
            // First Part you must pick up the item to help
            if (haveItem)
            {
                    // Can interact with the car
            }

            // Second Part is interacting with the car
            if (/*interacted with the car*/true)
            {
                    currentNPC.hasCompleted = true;
            }

			break;

		default:	//Set default mission type to none.
			currentMission = MissionType.None;
			break;
		}
	}

	public void SetMissionDetails(NPC data)
	{
		currentNPC = data;

		switch(data.mission)
		{
		    case MissionType.Fetch:
			    currentMission = MissionType.Fetch;	//Set the current mission type
			    fetchItem = data.fetchItem;
			    missionText.text = data.missionText;
			    break;

            case MissionType.GroceriesHelp:
                currentMission = MissionType.GroceriesHelp;
                fetchItem = data.fetchItem;
                missionText.text = data.missionText;
                break;


		}
	}
}
