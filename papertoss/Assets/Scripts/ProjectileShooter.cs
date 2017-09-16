using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.XR.iOS;

public class ProjectileShooter : MonoBehaviour {

    // Use this for initialization
    public GameObject prefab;
	public GameObject prefabBin;
	public GameObject bin;
    private int firingVelocity;
	public bool forTouch;
    private double swipeDistance = 0;
    private GameObject projectile;
    private bool throwInMotion = false;
    private float currFire = 0;
	private Canvas gameplayCanvas;
	private Canvas startCanvas;
	private Canvas titleCanvas;
	private GameObject startPlayButton;
	private GameObject resetBinButton;
	private GameObject binBasket;
	private bool gameStarted = false;
	void Start(){
		if(forTouch){
			bin = Instantiate (prefabBin) as GameObject;
			binBasket = GameObject.Find ("Basket");
		}
		gameplayCanvas = GameObject.Find("GameplayCanvas").GetComponent<Canvas>();
		startCanvas = GameObject.Find("StartCanvas").GetComponent<Canvas>();
		titleCanvas = GameObject.Find("TitleCanvas").GetComponent<Canvas>();
		gameplayCanvas.enabled = false;
		startCanvas.enabled = true;
		titleCanvas.enabled = true;
	}

	public void createBin(){
		binBasket = GameObject.Find ("Basket");
		binBasket.GetComponent<Renderer> ().enabled = false;
		binBasket.GetComponent<PlaceBin> ().binPlaced = false;
		//GameObject.Find("Basket").GetComponent<PlaceBin>().binPlaced = false;
		startCanvas.enabled = false;
	}

	public void gameBegin(){
		gameStarted = true;
		gameplayCanvas.enabled = true;
		startCanvas.enabled = false;
		titleCanvas.enabled = false;
		projectile = Instantiate(prefab) as GameObject;
	}

    // Update is called once per frame
    void Update () {
        
		if(!gameStarted && binBasket.GetComponent<Renderer>().enabled == false){
			startCanvas.enabled = false;
		}

		if(!gameStarted && binBasket.GetComponent<Renderer>().enabled == true){
			startCanvas.enabled = true;
		}

		if(!throwInMotion && gameStarted == true){
            projectile.transform.position = transform.position + Camera.main.transform.forward/3 + Camera.main.transform.up/-8 ;
		} else if (Time.time > currFire + 1 && gameStarted == true) {
            throwInMotion = false;
            projectile = Instantiate(prefab,transform.position, transform.rotation) as GameObject;
        }
           
		if (SwipeManager.Instance.IsSwiping(SwipeDirection.Up) && gameStarted == true)
        {
            //GameObject projectile = Instantiate(prefab) as GameObject;
            throwInMotion = true;
            currFire = Time.time;
			if (projectile != null) {
				projectile.transform.position = transform.position;// + Camera.main.transform.forward * 2;
				Rigidbody rb = projectile.GetComponent<Rigidbody>();

				swipeDistance = SwipeManager.Instance.SwipeDistance();
				firingVelocity = (int)swipeDistance;
				rb.velocity = Camera.main.transform.forward * firingVelocity/40 + Camera.main.transform.up * firingVelocity/150 ;
			}
        }
    }
}
