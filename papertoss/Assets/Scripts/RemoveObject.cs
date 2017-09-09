using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RemoveObject : MonoBehaviour {

    public GameObject gameObject; 
	public int removeHeight;
	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		if (gameObject.transform.position.y < removeHeight)
        {
            Destroy(gameObject); 
        }
	}
}
