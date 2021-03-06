using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Firebase;
using Firebase.Analytics;

public class FirebaseInit : MonoBehaviour
{
    // Start is called before the first frame update
    private async void Start()
    {
        FirebaseApp.CheckAndFixDependenciesAsync().ContinueWith(task => 
        {
            FirebaseAnalytics.SetAnalyticsCollectionEnabled(true);
        });
    }
}
