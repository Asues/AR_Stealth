using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ARCamera : MonoBehaviour {

    float angleX;
    float angleY;
    float angleZ;

    public GameObject myPlayer;
    private Rigidbody rb;

	// Use this for initialization
	void Start () {
        rb = myPlayer.GetComponent<Rigidbody>();
	}
	
	// Update is called once per frame
	void Update () {
        angleX = transform.rotation.eulerAngles.x;
        angleY = transform.rotation.eulerAngles.y;
        angleZ = transform.rotation.eulerAngles.z;

        //Debug.Log("x 轴：" + angleX);
        //Debug.Log("y 轴：" + angleY);
        //Debug.Log("z 轴：" + angleZ);

        if(angleX > 0){
            rb.AddForce(Vector3.left);
        }else if (angleX < 0){
            rb.AddForce(Vector3.right);
        }

        if (angleZ > 0)
        {
            rb.AddForce(Vector3.forward);
        }
        else if (angleZ < 0)
        {
            rb.AddForce(Vector3.back);
        }
	}
}
