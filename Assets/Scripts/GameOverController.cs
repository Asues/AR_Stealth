using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;


public class GameOverController : MonoBehaviour
{
    

    [SerializeField] private Text recordNumberLabel;

    private void Start()
    {

        // get the highest coin number
        recordNumberLabel.text = GameController.instance.coinsNumber.ToString();
    }

    // button function
    public void gameStartBtnPressed()
    {
        SceneManager.LoadScene("Level1");
    }

}
