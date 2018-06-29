using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EnemyFov : MonoBehaviour
{
    [SerializeField] [Range(0f, 180f)] private float fovAngle = 90f;
    [SerializeField] [Range(0f, 10f)] private float range = 5f;
    [SerializeField] [Range(3, 50)] private int resolution = 10;
    [SerializeField] private LayerMask playerLayerMask;

    [SerializeField] private bool drawDebugLines = false;

    // can the enemy see the player?
    public bool IsSpotted { get; private set; }

    private MeshFilter meshFilter;
    private MeshRenderer meshRenderer;
    private Mesh mesh;
    private int[] tris;

	private void Start ()
	{
	    meshFilter = GetComponent<MeshFilter>();
	    meshRenderer = GetComponent<MeshRenderer>();
        mesh = new Mesh();
	    mesh.name = "FOV";
	    meshFilter.mesh = mesh;
	    CreateTris();
	}
	
	private void LateUpdate ()
	{
	    CheckPlayerVisibility();
        UpdateMesh();
	}

    private void CheckPlayerVisibility()
    {
        Vector3 dir = Player.PlayerTransform.position - transform.position;
        // remove y component from angle
        dir = transform.InverseTransformVector(dir);
        dir.y = 0;
        dir = transform.TransformVector(dir);

        float unsignedAngle = Mathf.Abs(Vector3.Angle(dir, transform.forward));
        float dist = Vector3.Distance(transform.position, Player.PlayerTransform.position);
        if (dist > range || unsignedAngle > fovAngle / 2f)
        {
            IsSpotted = false;
            return;
        }
        else
        {
            RaycastHit hit;
            Ray ray = new Ray(transform.position, Player.PlayerTransform.position - transform.position);
            Debug.DrawLine(transform.position, Player.PlayerTransform.position);
            // spotted only with clear line of sight
            Physics.Raycast(ray, out hit, range);
            if (hit.collider != null && hit.collider.tag == "Player")
                IsSpotted = true;
            else
                IsSpotted = false;
        }
    }

    public void UpdateMesh()
    {
        // two front verts * rays + 1 for origin
        var vertices = new Vector3[resolution + 1];
        vertices[0] = Vector3.zero;

        for (int i = 0; i < resolution; i++)
        {
            // determine angle
            float angle = -fovAngle / 2f + i * fovAngle / resolution;
            Vector3 dir = Quaternion.AngleAxis(angle, transform.up) * transform.forward;
            
            // raycast
            RaycastHit hit = new RaycastHit();
            Ray ray = new Ray(transform.position, dir * range);
            Physics.Raycast(ray, out hit, range, playerLayerMask);
            float dist = hit.distance != 0f ? hit.distance : range;

            if(drawDebugLines)
                Debug.DrawLine(transform.position, transform.position + dir * dist);

            vertices[i + 1] = transform.InverseTransformPoint(transform.position + dir * dist);
        }

        mesh.vertices = vertices;
        mesh.triangles = tris;
        
        meshRenderer.material.color = IsSpotted ? new Color(1.0f, 0.0f, 0.0f, 0.25f) : new Color(0.0f, 1.0f, 0.0f, 0.25f);
    }

    private void CreateTris()
    {
        tris = new int[resolution * 3];
        for (int i = 0; i < resolution; i++)
        {
            tris[0 + i * 3] = 0;
            tris[1 + i * 3] = i;
            tris[2 + i * 3] = i + 1;
        }
    }
}
