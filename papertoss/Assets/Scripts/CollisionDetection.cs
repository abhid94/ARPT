using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class CollisionDetection : MonoBehaviour 
{
    public Text scoreText; 
    public int x = 0;

    void Start()
    {
        scoreText = GameObject.Find("scoreUI").GetComponent<Text>();

    }

    void OnCollisionEnter(Collision collisionInfo)
    {
        print("Detected collision between " + gameObject.name + " and " + collisionInfo.collider.name);
        print("There are " + collisionInfo.contacts.Length + " point(s) of contacts");
        print("Their relative velocity is " + collisionInfo.relativeVelocity);
        keepScore();
    }

    void OnCollisionStay(Collision collisionInfo)
    {
        print(gameObject.name + " and " + collisionInfo.collider.name + " are still colliding");
    }

    void OnCollisionExit(Collision collisionInfo)
    {
        print(gameObject.name + " and " + collisionInfo.collider.name + " are no longer colliding");
    }

    void keepScore() {
        x = x + 1;

        scoreText.text = x.ToString();
       
        print(x);

    }
}