using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public enum MissionType {
	Share, Fetch, Help, None	//Talk is handled outside of a mission. It is purley within interaction.cs
}


public class Missions : MonoBehaviour {

	public MissionType currentMission;
	bool missionComplete = true;
	public Text missionText;

	//Fetch
	public GameObject fetchItem;
	public bool haveItem = false;
	NPC currentNPC;

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

		case MissionType.Share:
			break;

		case MissionType.Fetch:

			if(haveItem)
			{
				currentNPC.hasCompleted = true;
			}

			break;

		case MissionType.Help:
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
		}
	}
}
