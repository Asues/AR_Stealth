using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[RequireComponent(typeof(Rigidbody))]
public class Player : MonoBehaviour
{
    public static Transform PlayerTransform;
    public Transform SpawnPoint;

    private Rigidbody playerRigidbody;
    private CapsuleCollider capsuleCollider;

	private void Start()
	{
	    PlayerTransform = transform;
        playerRigidbody = GetComponent<Rigidbody>();
        capsuleCollider = GetComponent<CapsuleCollider>();

        if (!GameController.instance.Entities.Contains(gameObject))
            GameController.instance.Entities.Add(gameObject);
    }

    private void OnEnable()
    {
        transform.position = SpawnPoint.position;
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
        if (capsuleCollider.enabled == false)
            playerRigidbody.isKinematic = true;
        else
            playerRigidbody.isKinematic = false;
        //playerRigidbody.AddForce(0.1f, 0, 0);
    }

    private void OnTriggerEnter(Collider other)
    {
        //GameObject go = other.gameObject;
        //if (go != null){
        //    Destroy(go);
        //}

    }



}
