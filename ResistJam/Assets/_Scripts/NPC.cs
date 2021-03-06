﻿using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class NPC : MonoBehaviour
{
    // NPC basic Variables
	public string characterName = "";
	public string greeting = "";
	public string[] dialogueOptions;
	public string[] followUpOptions;
	public float acceptanceValue = 2.0f;	//%
	public int[] responseValue;
	public int minAcceptance;

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
    public string missionStartText;
    public string missionCompletedText;
    public string endText;


    public bool interactVar;
    public NPC secondaryNPC;

    //Talking variables
	//List of NPC's to talk to
    public List<NPC> talkableNPC;
	//Bool to check if the NPC has been talked to
    public bool talkedTo;
	//Bool to allow the mission dialogue option
	public bool talkable;
	//Text to display during the mission
	public string talkMissionText;
	//Response mission text
	public string talkResponseText;
    GameObject player;



    // Task Variables
    public string taskText;


    void Start()
    {
        player = GameObject.FindGameObjectWithTag("Player");

        // Saves the MissionStartText
        for (int i = 0; i < 3; i++)
        {
            if (responseValue[i] == 3)
            {
                missionStartText = followUpOptions[i];
            }
        }
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
