using System;
using System.Collections.Generic;
using UnityEngine.EventSystems;
using UnityEngine.UI;

namespace UnityEngine.XR.iOS
{
	public class PlaceBin : MonoBehaviour
	{
		public Transform m_HitTransform;
		public bool binPlaced = false;
		public Renderer rend;


		//public Button resetBinButton;

		void Start()
		{
			rend = GetComponent<Renderer>();
			rend.enabled = false;
		}

		public void TaskOnClick(){

			print("button pressed");
			binPlaced = false;
		}

		private bool IsPointerOverUIObject(Touch currTouch) {
			PointerEventData eventDataCurrentPosition = new PointerEventData(EventSystem.current);
			eventDataCurrentPosition.position = new Vector2 (currTouch.position.x, currTouch.position.y);
			//Input.mousePosition.x, Input.mousePosition.y);
			List<RaycastResult> results = new List<RaycastResult>();
			EventSystem.current.RaycastAll(eventDataCurrentPosition, results);
			return results.Count > 0;
		}

		bool HitTestWithResultType (ARPoint point, ARHitTestResultType resultTypes)
		{
			List<ARHitTestResult> hitResults = UnityARSessionNativeInterface.GetARSessionNativeInterface ().HitTest (point, resultTypes);
			if (hitResults.Count > 0) {
				foreach (var hitResult in hitResults) {
					print ("Got hit!");
					m_HitTransform.position = UnityARMatrixOps.GetPosition (hitResult.worldTransform);
					m_HitTransform.rotation = UnityARMatrixOps.GetRotation (hitResult.worldTransform);
					Debug.Log (string.Format ("x:{0:0.######} y:{1:0.######} z:{2:0.######}", m_HitTransform.position.x, m_HitTransform.position.y, m_HitTransform.position.z));
					rend.enabled = true;
					binPlaced = true;

					return true;
				}
			}
			return false;
		}

		// Update is called once per frame
		void Update () {
			
			if (Input.touchCount > 0 && m_HitTransform != null && !binPlaced)
			//if (m_HitTransform != null && !binPlaced)
			{
				print ("bin placed false after touch");
			
				var touch = Input.GetTouch(0);
				if (touch.phase == TouchPhase.Began || touch.phase == TouchPhase.Moved)
				{
					//if( IsPointerOverUIObject(touch) ){
					var screenPosition = Camera.main.ScreenToViewportPoint(touch.position);
					print (screenPosition);
					print ("screen position");
					ARPoint point = new ARPoint {
						x = screenPosition.x,
						y = screenPosition.y
					};

					// prioritize reults types
					ARHitTestResultType[] resultTypes = {
						ARHitTestResultType.ARHitTestResultTypeExistingPlaneUsingExtent, 
						// if you want to use infinite planes use this:
						//ARHitTestResultType.ARHitTestResultTypeExistingPlane,
						ARHitTestResultType.ARHitTestResultTypeHorizontalPlane, 
						ARHitTestResultType.ARHitTestResultTypeFeaturePoint
					}; 

					foreach (ARHitTestResultType resultType in resultTypes)
					{
						if (HitTestWithResultType (point, resultType))
						{
							return;
						}
					}
					//}
				}
			}
		}


	}
}

