using UnityEngine;
using System.Collections;

public class NPC : MonoBehaviour
{
    // NPC basic Variables
	public string characterName = "";
	public string greeting = "";
	public string[] dialogueOptions;
	public string[] followUpOptons;
	public float acceptanceValue = 2.0f;	//%
	public float movementSpeed = 12.0f;
	public int[] responseValue;

    // Fetch Mission Variables
	public GameObject missionItem;

    // Mission Variables
    public MissionType mission;
    public string missionText;	//Leave blank if no quest (Aside from talking)
    public string endText;
	public string endOption;
    public bool missionInProgress = false;
    public bool hasCompleted = false;
    public bool interactVar;
    public NPC secondaryNPC;

    // Task Variables
    public string taskText;

    void Update()
	{
        // Bool for if you completed a mission
        if (hasCompleted)
		{
            missionInProgress = false;
            greeting = endText;
		}
        


	}


}
