using UnityEngine;
using System.Collections;

public class NPC : MonoBehaviour {

	public MissionType mission;

	public string characterName = "";
	public string greeting = "";
	public string[] dialogueOptions;
	public string[] followUpOptons;
	public float acceptanceValue = 2.0f;	//%
	public float movementSpeed = 12.0f;
	public int[] responseValue;
	public bool hasCompleted = false;
	public string missionText;	//Leave blank if no quest (Aside from talking)
	public GameObject fetchItem;
	public string endText;
	public string endOption;

	void Update()
	{
		if(hasCompleted)
		{
			greeting = endText;
		}
	}


}
