using UnityEngine;
using System.Collections;

public class Interactions : MonoBehaviour {

	GameObject interactionWindow;
	public bool activeInteraction = false;

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

	public void InitInteraction(/*Get some param */)
	{
		interactionWindow.SetActive (true);
		activeInteraction = true;
	}
}
