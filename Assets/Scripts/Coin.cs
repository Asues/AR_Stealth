using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Coin : MonoBehaviour {

    // rotation
    private void Update()
    {
        transform.Rotate(transform.forward, 45 * Time.deltaTime, Space.World);
    }

    private void OnTriggerEnter(Collider other)
    {
        if(other.tag == "Player")
            getCoin();
    }


    private void getCoin(){
        
        Debug.Log("get Coin!");

        GameController.instance.coinsNumber += 1;

        // coins musik
        GameController.instance.playMusic(1);

        // change the coin label
        //sGameController.instance.coinsNumberLabel.text = GameController.instance.coinsNumber.ToString();

        if (!GameController.instance.Entities.Contains(gameObject))
            GameController.instance.Entities.Add(gameObject);
        gameObject.SetActive(false);
    }


}
