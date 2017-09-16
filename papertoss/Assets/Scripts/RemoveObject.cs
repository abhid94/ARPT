using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RemoveObject : MonoBehaviour {

    public GameObject gameObject; 
    private GameObject currentBin;
    private CollisionDetection score;
	public double removeHeight;
	// Use this for initialization
	void Start () {
        currentBin = GameObject.Find("Sphere");
		//removeHeight = currentBin.transform.position.y - 0.5;
	}
	
	// Update is called once per frame
	void Update () {
		
		if (gameObject.transform.position.y < removeHeight)
        {
            CollisionDetection collisionScript = currentBin.GetComponent<CollisionDetection>();
            collisionScript.score = 0;
            Destroy(gameObject); 
        }
	}
}
