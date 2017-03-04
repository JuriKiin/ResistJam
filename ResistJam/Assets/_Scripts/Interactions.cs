using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class Interactions : MonoBehaviour {

	GameObject interactionWindow;
	public bool activeInteraction = false;

	public Text nameText;
	public Text greetingText;
	public Text[] options;

	// Use this for initialization
	void Start () {
		interactionWindow = GameObject.FindGameObjectWithTag ("InteractionWindow");
		interactionWindow.SetActive (false);
	}

	void Update()
	{
		if(Input.GetKeyUp(KeyCode.Return))
		{
			activeInteraction = false;
			GetComponent<Player> ().canWalk = true;
			interactionWindow.SetActive (false);
		}
	}

	public void InitInteraction(GameObject npc)
	{
		NPC npcData = npc.GetComponent<NPC> ();

		interactionWindow.SetActive (true);
		activeInteraction = true;

		//Set data if those values aren't null.
		if(npcData.name == "" || npcData.greeting == "")
		{
			nameText.text = "error | null";
			greetingText.text = "error | null";
		}
		else
		{
			//Set data
			nameText.text = npcData.name;
			greetingText.text = npcData.greeting;
		}


	}
}
