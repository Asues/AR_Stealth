using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Coin : MonoBehaviour {


    // rotation
    private void Update()
    {
        transform.Rotate(Vector3.up, 45 * Time.deltaTime, Space.World);
    }

    private void OnTriggerEnter(Collider other)
    {
        getCoin();
    }


    private void getCoin(){
        
        Debug.Log("get Coin!");

        GameController.instance.coinsNumber += 1;

        // coins musik
        GameController.instance.playMusic(1);

        // change the coin label
        GameController.instance.coinsNumberLabel.text = GameController.instance.coinsNumber.ToString();
    }


}
