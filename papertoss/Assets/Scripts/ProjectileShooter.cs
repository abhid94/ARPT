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
    private int firingVelocity;
    public float gravity = 9.8f;
	public bool forTouch;
    private double swipeDistance = 0;
    private GameObject projectile;
    private bool throwInMotion = false;
    private float currFire = 0;

	void Start(){
		if(forTouch){
			bin = Instantiate (prefabBin) as GameObject;
		}
        projectile = Instantiate(prefab) as GameObject;
	}

	public void createBin(){
		Destroy (bin);
		bin = Instantiate (prefabBin) as GameObject;

	}

    // Update is called once per frame
    void Update () {
        
        if(!throwInMotion){
            projectile.transform.position = transform.position + Camera.main.transform.forward/3 + Camera.main.transform.up/-15 ;
        } else if (Time.time > currFire + 2) {
            throwInMotion = false;
            projectile = Instantiate(prefab,transform.position, transform.rotation) as GameObject;
        }
           
        if (SwipeManager.Instance.IsSwiping(SwipeDirection.Up))
        {
            //GameObject projectile = Instantiate(prefab) as GameObject;
            throwInMotion = true;
            currFire = Time.time;
			projectile.transform.position = transform.position;// + Camera.main.transform.forward * 2;
            Rigidbody rb = projectile.GetComponent<Rigidbody>();

            swipeDistance = SwipeManager.Instance.SwipeDistance();
            firingVelocity = (int)swipeDistance;
            rb.velocity = Camera.main.transform.forward * firingVelocity/20 + Camera.main.transform.up * firingVelocity/50 ;

        }
    }
}
