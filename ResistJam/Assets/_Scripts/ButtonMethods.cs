using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class ButtonMethods : MonoBehaviour {

	public void LoadLevel(string levelName)
	{
		SceneManager.LoadScene (levelName);
	}

	public void KeepPlaying()
	{
		FindObjectOfType<Player> ().keepPlaying = true;
		FindObjectOfType<Player> ().gameOverPanel.SetActive (false);
		FindObjectOfType<Player> ().canWalk = true;
	}
}
