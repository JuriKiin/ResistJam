using UnityEngine;
using System.Collections;

public class NPC : MonoBehaviour
{
	public MissionType mission;

    // Character Name
	public string characterName = "";

    // Dialogue Variables
	public string greeting = "";
	public string[] dialogueOptions;
	public string[] followUpOptons;

    // Values specific to an NPC
	public float acceptanceValue = 2.0f;	//%
	public float movementSpeed = 12.0f;
	public int[] responseValue;

    // Mission Variables
	public bool hasCompleted = false;
	public string missionText;	//Leave blank if no quest (Aside from talking)
	public string endText;
    //Fetch Mission Variable
    public GameObject fetchItem;
    //Help Mission Variable
    public bool helpStarted = false;
    public bool helpComplete = false;

    void Update()
	{
		if(hasCompleted)
		{
			greeting = endText;
		}

    }


}
