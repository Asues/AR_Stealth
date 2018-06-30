using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;


public class GameOverController : MonoBehaviour
{
    

    [SerializeField] private Text recordNumberLabel;
    AudioSource myAudio;
    public AudioClip[] clips;

    private void Start()
    {  
        myAudio = GetComponent<AudioSource>();
        myAudio.clip = clips[0];
        myAudio.Play();
    }

    // button function
    public void gameStartBtnPressed()
    {
        SceneManager.LoadScene("Level1");
    }

}
