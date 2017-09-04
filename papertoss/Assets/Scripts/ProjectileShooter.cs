using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ProjectileShooter : MonoBehaviour {

    // Use this for initialization
    GameObject prefab;
    void Start () {
        prefab = Resources.Load ("projectile") as GameObject;
    }

    // Update is called once per frame
    void Update () {
        if (SwipeManager.Instance.IsSwiping(SwipeDirection.Up)) {
            GameObject projectile = Instantiate (prefab) as GameObject;
            //projectile.transform.position = transform.position + Camera.main.transform.forward * 2;
            Rigidbody rb = projectile.GetComponent<Rigidbody> ();
            rb.velocity = Camera.main.transform.forward * 40;
        }

        if (SwipeManager.Instance.IsSwiping(SwipeDirection.Left)) {
            GameObject projectile = Instantiate (prefab) as GameObject;
            //projectile.transform.position = (transform.position + Camera.main.transform.right * 1) * -1;
            Rigidbody rb = projectile.GetComponent<Rigidbody> ();
            //rb.velocity = Camera.main.transform.forward * 20;

            Vector3 force = Camera.main.transform.forward; 
            force.x = (force.x * -1) - 10; 
            rb.AddForce(force.x,force.y, force.z*20 ,ForceMode.Impulse);
        }

        if (SwipeManager.Instance.IsSwiping(SwipeDirection.Right)) {
            GameObject projectile = Instantiate (prefab) as GameObject;
            //projectile.transform.position = transform.position + Camera.main.transform.right * 1;
            Rigidbody rb = projectile.GetComponent<Rigidbody> ();
            rb.velocity = Camera.main.transform.forward * 40;
        }
    }
}
