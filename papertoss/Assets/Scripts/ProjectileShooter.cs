using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ProjectileShooter : MonoBehaviour {

    // Use this for initialization
    public GameObject prefab;
    public Transform Target;
    public float firingAngle = 45.0f;
    public float gravity = 9.8f;

    // Update is called once per frame
    void Update () {
        if (SwipeManager.Instance.IsSwiping(SwipeDirection.Up))
        {
            GameObject projectile = Instantiate(prefab) as GameObject;
            projectile.transform.position = transform.position + Camera.main.transform.forward * 2;
            Rigidbody rb = projectile.GetComponent<Rigidbody>();
            rb.velocity = Camera.main.transform.forward * 30;
        }
    }
}
