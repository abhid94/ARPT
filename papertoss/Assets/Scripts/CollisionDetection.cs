using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CollisionDetection : MonoBehaviour {

    public class ExampleClass : MonoBehaviour {
        void OnTriggerEnter(Collider other) {
            print("test");
        }
    }
}
