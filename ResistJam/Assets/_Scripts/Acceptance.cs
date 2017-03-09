using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;


public class Acceptance : MonoBehaviour {

	public Image thisImage;

	// Update is called once per frame
	void Update () 
	{
		thisImage.rectTransform.sizeDelta = new Vector2 (380f*(FindObjectOfType<Player>().Acceptance/100f),25f);	
	}
}
