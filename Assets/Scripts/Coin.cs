using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Coin : MonoBehaviour {


    private void OnTriggerEnter(Collider other)
    {
        getCoin();
    }


    private void getCoin(){
        Debug.Log("get Coin!");

        GameController.instance.coinsNumber += 1;

        // coins musik
        GameController.instance.playMusic(0);

        // change the coin label
        GameController.instance.coinsNumberLabel.text = GameController.instance.coinsNumber.ToString();

        // disappear the coin
        Destroy(this);
    }
}
