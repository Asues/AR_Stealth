using System;
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
    public static int lifeNumber = 3;
    public float DetectionTime = 2f;
    public List<string> LevelList;

    // UI
    public Text coinsNumberLabel;
    public Text levelNumberLabel;
    public Text lifeNumberLabel;

    // initial object
    public static GameController instance;

    public List<GameObject> Entities;

    private int curLifes;

    private void Awake()
    {
        //DontDestroyOnLoad(this);
        if (instance == null)
        {
            instance = this;
        }
        else
            Destroy(gameObject);
    }

    private void Start()
    {
        myAudio = GetComponent<AudioSource>();
        curLifes = lifeNumber;
        playMusic(0);
    }

    // Update is called once per frame
    void Update () {
        if(coinsNumberLabel != null)
            coinsNumberLabel.text = coinsNumber.ToString();
        if (levelNumberLabel != null)
            levelNumberLabel.text = levelNumber.ToString();
        if (lifeNumberLabel != null)
            lifeNumberLabel.text = curLifes.ToString();

        if (coinsNumber == 5)
            LoadNextLevel();
	}


    // button function
    public void gameStartBtnPressed(){
        SceneManager.LoadScene("Level1");
    }

    public void gameOverBtnPressed()
    {
        SceneManager.LoadScene("GameOver");
    }

    public void gameBackBtnPressed()
    {
        SceneManager.LoadScene("GameStart");
        coinsNumber = 0;
        levelNumber = 1;
        curLifes = lifeNumber;
    }

    private void LoadNextLevel()
    {
        levelNumber++;
        coinsNumber = 0;
        if (levelNumber - 1 < LevelList.Count)
            SceneManager.LoadScene(LevelList[levelNumber - 1]);
        else
            SceneManager.LoadScene("GameStart"); 
    }

    private void ResetLevel()
    {
        foreach (var go in Entities)
        {
            go.SetActive(false);
            go.SetActive(true);
        }
        Debug.Log("RESET");
    }


    public void playMusic(int sound)
    {
        myAudio.clip = clips[sound];
        myAudio.Play();
    }

    public void GameOver()
    {       
        if (curLifes > 0)
        {
            curLifes--;
            ResetLevel();
        }

        if (curLifes == 0)
            gameOverBtnPressed();
    }
}
