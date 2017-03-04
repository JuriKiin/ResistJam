using UnityEngine;
using System.Collections;


public enum MissionType {
	Share, Fetch, Talk, Help, None
}


public class Missions : MonoBehaviour {

	MissionType currentMission;
	bool missionComplete = true;

	void Start () 
	{
		currentMission = MissionType.None;	//Set the default mission to none.
	}

	void Update () 
	{
		if(missionComplete)	//Once we are done with a mission, set our missio type to None.
		{
			currentMission = MissionType.None;
		}
		switch(currentMission)	//What to do if a certain mission is active
		{
		case MissionType.None:
			//Do nothing
			break;

		case MissionType.Share:
			break;

		case MissionType.Fetch:
			break;

		case MissionType.Talk:
			break;

		case MissionType.Help:
			break;

		default:	//Set default mission type to none.
			currentMission = MissionType.None;
			break;
		}
	}
}
