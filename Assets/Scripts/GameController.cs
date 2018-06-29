using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;


public class GameController : MonoBehaviour {

    public int coinsNumber = 0;
    public int levelNumber = 1;
    public int life = 3;

    [SerializeField] private Text coinsNumberLabel;
    [SerializeField] private Text levelNumberLabel;
    [SerializeField] private Text lifeNumberLabel;


    // Update is called once per frame
    void Update () {
        coinsNumberLabel.text = coinsNumber.ToString();
        levelNumberLabel.text = levelNumber.ToString();
        lifeNumberLabel.text = lifeNumberLabel.ToString();
	}

    public void gameStartBtnPressed(){
        SceneManager.LoadScene("Main");
    }

    public void gameBackBtnPressed()
    {
        SceneManager.LoadScene("Start");
    }
}
