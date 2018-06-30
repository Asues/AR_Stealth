using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;


public class GameController : MonoBehaviour {

    AudioSource myAudio;
    public AudioClip[] clips;

    public int coinsNumber = 0;
    public int levelNumber = 1;
    public int lifeNumber = 3;

    // UI
    public Text coinsNumberLabel;
    public Text levelNumberLabel;
    public Text lifeNumberLabel;

    // initial object
    public static GameController instance;

    private void Awake()
    {
        if (instance == null)
        {
            instance = this;
        }
    }

    private void Start()
    {
        myAudio = GetComponent<AudioSource>();
    }

    // Update is called once per frame
    void Update () {
        coinsNumberLabel.text = coinsNumber.ToString();
        levelNumberLabel.text = levelNumber.ToString();
        lifeNumberLabel.text = lifeNumber.ToString();
	}


    // button function
    public void gameStartBtnPressed(){
        SceneManager.LoadScene("Level1");
    }

    public void gameBackBtnPressed()
    {
        SceneManager.LoadScene("GameStart");
    }


    public void playMusic(int sound)
    {
        myAudio.clip = clips[sound];
        myAudio.Play();
    }
}
