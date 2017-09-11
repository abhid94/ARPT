using UnityEngine; 
using System.Collections;

public enum SwipeDirection
{
    None = 0,
    Left = 1,
    Right = 2,
    Up = 4,
    Down = 8,
}


public class SwipeManager : MonoBehaviour 
{ 
    private static SwipeManager instance;
    public static SwipeManager Instance{get{return instance;}}
    public SwipeDirection Direction{set;get;}

    private Vector3 touchPosition;
    private float swipeResistenceX = 50.0f;
    private float swipeResistenceY = 50.0f;
    Vector2 deltaSwipe;

    private void Start()
    {
        instance = this;
    }

    private void Update()
    {
        Direction = SwipeDirection.None;  

        if (Input.GetMouseButtonDown(0))
        {
            touchPosition = Input.mousePosition;
        }

        if (Input.GetMouseButtonUp(0))
        {
            deltaSwipe = touchPosition - Input.mousePosition;

            if (Mathf.Abs(deltaSwipe.x) > swipeResistenceX)
            {
                //Swipe x
                Direction |= (deltaSwipe.x < 0) ? SwipeDirection.Right : SwipeDirection.Left;            
            }

            if (Mathf.Abs(deltaSwipe.y) > swipeResistenceY)
            {
                Direction |= (deltaSwipe.y < 0) ? SwipeDirection.Up : SwipeDirection.Down;  
                SwipeDistance();
            }
        }
    }

    public bool IsSwiping(SwipeDirection dir)
    {
        return (Direction & dir) == dir;
    }﻿

    public double SwipeDistance()
    {
        return Mathf.Abs(deltaSwipe.y);
    }﻿
}