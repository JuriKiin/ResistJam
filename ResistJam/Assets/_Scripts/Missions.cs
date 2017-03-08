using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public enum MissionType
{
	Talk, Fetch, Help, None	//Talk is handled outside of a mission. It is purley within interaction.cs
}


public class Missions : MonoBehaviour
{
	public MissionType currentMission;
	bool missionComplete = true;
	public Text missionText;

	//Fetch
	public GameObject missionItem;
	public bool haveItem = false;
	public NPC currentNPC;

    // Secondary NPC for mission
    public NPC secondaryCurrentNPC;

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
			if (currentNPC.missionComplete)
			{
				ResetMissionDetails();
			}

			break;

		case MissionType.Help:
                // First part you must pick up the item to help
			if (haveItem) 
			{
				secondaryCurrentNPC.interactVar = true;
			}

                // After interacting with the second NPC
			if (secondaryCurrentNPC.hasCompleted) 
			{
				currentNPC.hasCompleted = true;
				secondaryCurrentNPC.interactVar = false;
			}

			if (currentNPC.missionComplete)
			{
				ResetMissionDetails();
			}

                break;

		default:	//Set default mission type to none.
			currentMission = MissionType.None;
			break;
		}
	}


    public void ResetMissionDetails()
    {
        currentMission = MissionType.None;
        missionText.text = "Current Mission: None";
        missionItem = null;
        haveItem = false;
    }

	public void SetMissionDetails(NPC data)
	{
		currentNPC = data;

		switch(data.mission)
		{

            // Use this to clear previous mission variables
            case MissionType.None:
                break;

            case MissionType.Fetch:
                // Set some variables to false to prevent issues
                haveItem = false;

                currentMission = MissionType.Fetch;	//Set the current mission type
			    missionItem = data.missionItem;
			    missionText.text = data.missionText;
			    break;

            case MissionType.Help:
                // Set some variables to false to prevent issues
                haveItem = false;


                currentMission = MissionType.Help; //Set the current mission type
                missionItem = data.missionItem;
                missionText.text = data.missionText;
                secondaryCurrentNPC = data.secondaryNPC;
                break;
        }
	}
}
