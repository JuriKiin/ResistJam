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
    public string missionInProgressPlayerText;
    public string missionInProgressNPCText;
    public string missionCompletedText;
    public string endText;
	public string endOption;
    public bool missionInProgress = false;
    public bool hasCompleted = false;
    public bool missionComplete = false;
    public bool interactVar;
    public NPC secondaryNPC;
    GameObject player;

    // Task Variables
    public string taskText;


    void Start()
    {
        player = GameObject.FindGameObjectWithTag("Player");
    }


    void Update()
	{
        // Bool for teext if you are in progress
        if (missionInProgress == true)
        {
            greeting = missionInProgressNPCText;
        }

        // Bool for Returning to NPC
        if (hasCompleted)
        {
            greeting = missionInProgressNPCText;
        }


        // Bool for if you completed a mission: Sets mission to false and gives end text
        if (missionComplete)
		{
            // Increase acceptance
            player.GetComponent<Player>().Acceptance += acceptanceValue;
            missionInProgress = false;
            greeting = endText;
		}


        


	}


}
