using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RemoveObject : MonoBehaviour {

    public GameObject gameObject; 
	public GameObject currentBin;
	public double removeHeight;
	// Use this for initialization
	void Start () {
		currentBin = GameObject.Find("BasketWithSphere").GetComponent<GameObject>();
		//removeHeight = currentBin.transform.position.y - 0.5;
	}
	
	// Update is called once per frame
	void Update () {
		
		if (gameObject.transform.position.y < removeHeight)
        {
            Destroy(gameObject); 
        }
	}
}
