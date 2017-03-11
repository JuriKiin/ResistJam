﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class LoadScene : MonoBehaviour {

	public void LoadLevel(string levelName)
	{
		SceneManager.LoadScene (levelName);
	}
	void OnMouseOver()
	{
		GetComponentInChildren<Text> ().color = Color.green;
	}
}
