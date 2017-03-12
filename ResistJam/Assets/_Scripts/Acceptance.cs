using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;


public class Acceptance : MonoBehaviour {

	public Image thisImage;

	// Update is called once per frame
	void Update () 
	{
		if(FindObjectOfType<Player>().Acceptance < 100 && FindObjectOfType<Player>().Acceptance > 0)
		{
			thisImage.rectTransform.sizeDelta = new Vector2 (392f*(FindObjectOfType<Player>().Acceptance/100f),25f);	
		}
		else
		{
			thisImage.rectTransform.sizeDelta = new Vector2 (392f,25f);
		}

		if(FindObjectOfType<Player>().Acceptance <= 0)
		{
			thisImage.rectTransform.sizeDelta = new Vector2 (0f,25f);
		}

	}
}
