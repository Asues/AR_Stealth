using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EnemyMovement : MonoBehaviour
{
    [SerializeField] private float movementSpeed = 200f;
    [SerializeField] private float rotationSpeed = 5f;
    [SerializeField] private Waypoint[] waypoints;

    private const float DistanceThreshold = 0.05f;
    private const float AngleThreshold = 0.1f;

    private int curWp;
    private Vector3 velocity;
    private Timer waitTimer;

	private void Start()
	{
        waitTimer = new Timer(99f, null, null);
        waitTimer.Cancel();
	}
	
	private void Update()
	{
	    waitTimer.Tick(Time.deltaTime);

        if (waypoints.Length == 0 || waitTimer.IsRunning)
	        return;

	    Waypoint targetWp = waypoints[curWp];

        // 1. move closer to wp if necessary
        if (Vector3.Distance(transform.position, targetWp.transform.position) > DistanceThreshold)
	    {
            // get movement direction
	        Vector3 movementDir = transform.position - targetWp.transform.position;
            // smoothly rotate towards movementDir
            Vector3 fwd = Vector3.RotateTowards(transform.forward, -movementDir, rotationSpeed * Mathf.Deg2Rad, Mathf.Infinity);
            transform.rotation = Quaternion.LookRotation(fwd, transform.up);
            // move
            transform.position = Vector3.SmoothDamp(transform.position, targetWp.transform.position, ref velocity, 0f, movementSpeed);
	    }
        // 2. rotate to target
		else if (targetWp.WaitTime > 0f && Vector3.Angle(transform.forward, targetWp.transform.forward) > AngleThreshold)
        {
            Vector3 fwd = Vector3.RotateTowards(transform.forward, targetWp.transform.forward, rotationSpeed * Mathf.Deg2Rad, Mathf.Infinity);
            transform.rotation = Quaternion.LookRotation(fwd, transform.up);
        }
        // 3. wait for a while
        else
        {
            waitTimer = new Timer(targetWp.WaitTime, AdvanceWaypoints, null);
            waitTimer.Start();
        }
	}

    private void AdvanceWaypoints()
    {
        if (curWp == waypoints.Length - 1)
            curWp = 0;
        else
            curWp++;
    }

}
