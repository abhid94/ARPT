using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class CollisionDetection : MonoBehaviour 
{
    private Text scoreText;
    private Text highScoreText; 
    public int score = 0;
    public int highScore = 0;
    private int prevScore = 0;

    void Start()
    {
        scoreText = GameObject.Find("ScoreUI").GetComponent<Text>();
        highScoreText = GameObject.Find("HighScoreUI").GetComponent<Text>();
		scoreText.text = "0";
        highScoreText.text = PlayerPrefs.GetInt("highScore").ToString();

        if (highScore < 1)
        {
            highScore = PlayerPrefs.GetInt("highScore", 0);
        }

    }

    void Update()
    {
        prevScore = score; 
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
        
        score = score + 1;
        scoreText.text = score.ToString();

        if (score >= highScore)
        {
            PlayerPrefs.SetInt("highScore", score);
            highScoreText.text = score.ToString();
        }

    }
}