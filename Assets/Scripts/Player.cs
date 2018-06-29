using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[RequireComponent(typeof(Rigidbody))]
public class Player : MonoBehaviour
{
    public static Transform PlayerTransform;

    private Rigidbody playerRigidbody;

	private void Start()
	{
	    PlayerTransform = transform;
        playerRigidbody = GetComponent<Rigidbody>();
    }


    private void FixedUpdate()
	{
        if (playerRigidbody.IsSleeping())
            playerRigidbody.WakeUp();

	    if (playerRigidbody.velocity.magnitude < 0.05f)
	        return;

	    transform.forward = playerRigidbody.velocity;
        Debug.DrawRay(transform.position, playerRigidbody.velocity.normalized * 5f, Color.red);
	}

    private void Update()
    {
        playerRigidbody.AddForce(0.1f, 0, 0);
    }



}
