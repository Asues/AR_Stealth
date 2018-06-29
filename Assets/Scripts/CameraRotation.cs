using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CameraRotation : MonoBehaviour
{

    [SerializeField] [Range(-90f, 90f)] private float rotationAngle = 30f;
    [SerializeField] private float rotationTime = 3f;
    [SerializeField] private float waitTime = 5f;
    [SerializeField] private GameObject player;

    private Timer waitTimer;
    private float angle1, angle2;
    private bool isWaiting = false;
    private float t;


	private void Start()
	{
		waitTimer = new Timer(waitTime, () => isWaiting = false, null);
	    angle1 = transform.rotation.eulerAngles.y;
	    angle2 = angle1 + rotationAngle;

	}
	
	private void Update()
	{
        waitTimer.Tick(Time.deltaTime);

	    if (isWaiting)
	        return;

	    t += Time.deltaTime;

        // rotate
        float currentAngle = Mathf.Lerp(angle1, angle2, t / rotationTime);
        //Vector3 fwd = Quaternion.Euler(0, currentAngle, 0) * 
	    transform.localRotation = Quaternion.Euler(0, currentAngle, 0);
        //transform.rotation = Quaternion.L
        // reached end point
	    if (t >= rotationTime)
	    {
            // switch direction
	        float tempAngle = angle1;
	        angle1 = angle2;
	        angle2 = tempAngle;
            // wait
	        t = 0f;
	        isWaiting = true;
            waitTimer.Restart();
	    }


        // check the camera postion and move the player


	}
}
