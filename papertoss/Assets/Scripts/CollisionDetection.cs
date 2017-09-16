using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class CollisionDetection : MonoBehaviour 
{
    private Text scoreText;
    private Text highScoreText;
    private Text multiplyerText;
    public float score = 0;
    public float highScore = 0;
    private float distanceFromBin = 0;

    void Start()
    {
        scoreText = GameObject.Find("ScoreUI").GetComponent<Text>();
        highScoreText = GameObject.Find("HighScoreUI").GetComponent<Text>();
        multiplyerText = GameObject.Find("MultiplyerUI").GetComponent<Text>();
		scoreText.text = "0";
        highScoreText.text = PlayerPrefs.GetFloat("highScore").ToString("0.0");

        if (highScore == 0)
        {
            highScore = PlayerPrefs.GetFloat("highScore", 0);
        }

    }

    void Update()
    {
		float binPos = GameObject.Find("BasketWithSphere(Clone)").transform.position.z;
        float cameraPos = GameObject.Find("Main Camera").transform.position.z;
        distanceFromBin =  Mathf.Abs(binPos - cameraPos);
        multiplyerText.text = distanceFromBin.ToString("0.00");
        scoreText.text = score.ToString("0.0");
    }
        
    void OnCollisionEnter(Collision collisionInfo)
    {
        //print("Detected collision between " + gameObject.name + " and " + collisionInfo.collider.name);
        //print("There are " + collisionInfo.contacts.Length + " point(s) of contacts");
        //print("Their relative velocity is " + collisionInfo.relativeVelocity);
		//print(collisionInfo.collider.);
        if (gameObject.name == "Sphere")
        {
            Destroy(collisionInfo.collider.gameObject);
            keepScore();
        }

    }

    void OnCollisionStay(Collision collisionInfo)
    {
        //print(gameObject.name + " and " + collisionInfo.collider.name + " are still colliding");
    }

    void OnCollisionExit(Collision collisionInfo)
    {
        //print(gameObject.name + " and " + collisionInfo.collider.name + " are no longer colliding");
    }

    void keepScore() {
        
        score = score + distanceFromBin;

        if (score >= highScore)
        {
            PlayerPrefs.SetFloat("highScore", score);
            highScoreText.text = score.ToString("0.0");
        }

    }
}