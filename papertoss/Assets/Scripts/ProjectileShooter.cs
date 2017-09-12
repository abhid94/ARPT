using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ProjectileShooter : MonoBehaviour {

    // Use this for initialization
    public GameObject prefab;
	public GameObject prefabBin;
	public GameObject bin;
    public Transform Target;
    public float firingAngle = 45.0f;
	public int firingVelocity;
    public float gravity = 9.8f;
	public bool forTouch;
    private double swipeDistance = 0;

	void Start(){
		if(forTouch){
			bin = Instantiate (prefabBin) as GameObject;
		}
	}

	public void createBin(){
		Destroy (bin);
		bin = Instantiate (prefabBin) as GameObject;

	}

    // Update is called once per frame
    void Update () {
        
        if (SwipeManager.Instance.IsSwiping(SwipeDirection.Up))
        {
            GameObject projectile = Instantiate(prefab) as GameObject;
			projectile.transform.position = transform.position;// + Camera.main.transform.forward * 2;
            Rigidbody rb = projectile.GetComponent<Rigidbody>();


            swipeDistance = SwipeManager.Instance.SwipeDistance();
            firingVelocity = (int)swipeDistance;
			rb.velocity = Camera.main.transform.forward * firingVelocity/10;

        }
    }
}
