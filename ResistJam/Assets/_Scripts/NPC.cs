using UnityEngine;
using System.Collections;

public class NPC : MonoBehaviour
{
    // NPC basic Variables
	public string characterName = "";
	public string greeting = "";
	public string[] dialogueOptions;
	public string[] followUpOptions;
	public float acceptanceValue = 2.0f;	//%
	public float movementSpeed = 12.0f;
	public int[] responseValue;

    // Fetch Mission Variables
	public GameObject missionItem;

    // Mission Variables
    public MissionType mission;
    public string missionText;	//Leave blank if no quest (Aside from talking)

	// Text that replaces the mission start text:
    public string missionInProgressPlayerText;

	// Text that replaces the NPC's text in middle of the mission
    public string missionInProgressNPCText;

	// Mission Booleans
	public bool missionInProgress = false;
	public bool hasCompleted = false;
	public bool missionComplete = false;

	// Text that replaces the NPC's text when completing the mission
    public string missionCompletedText;
    public string endText;


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
        // Bool for Returning to NPC
		if (missionComplete)
        {
            greeting = missionCompletedText;
        }


        // Bool for if you completed a mission: Sets mission to false and gives end text
        if (missionComplete)
		{
            // Increase acceptance
            player.GetComponent<Player>().Acceptance += acceptanceValue;
			acceptanceValue = 0;
            missionInProgress = false;
			greeting = endText;
		}


        


	}


}
