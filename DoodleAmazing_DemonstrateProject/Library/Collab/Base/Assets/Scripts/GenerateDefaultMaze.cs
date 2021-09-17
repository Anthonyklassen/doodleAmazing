using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class GenerateDefaultMaze : MonoBehaviour
{
   [SerializeField]
   private Texture2D[] images;
   private Texture2D image;
   private RawImage doodle;

   [SerializeField]
   private GameObject wallObject;
   [SerializeField]
   private GameObject groundObject;

    [SerializeField]
   private GameObject ballObject;
    [SerializeField]
   private GameObject goalObject;


   private void Start(){
       //This Selects the image.
       image = images[1];
       //image = File.ReadAllBytes(Application.dataPath + "/Images/" + Time.time + ".png");

       //doodle = GameObject.FindWithTag("DoodleImage").GetComponent<RawImage>();
       //image = (Texture2D)doodle.texture;

       Color[] pix = image.GetPixels();

       int worldX = image.width;
       int worldZ = image.height;

       Vector3[] spawnPositions = new Vector3[pix.Length];
       Vector3 startingSpawnPosition = new Vector3(-Mathf.Round(worldX / 2), 0, -Mathf.Round(worldZ / 2));
       Vector3 currentSpawnPos = startingSpawnPosition;

       int counter = 0;

       for (int z = 0; z < worldZ; z++){
           for (int x = 0; x < worldX; x++){

                spawnPositions[counter] = currentSpawnPos;
                counter ++;
                currentSpawnPos.x++;
           }

           currentSpawnPos.x = startingSpawnPosition.x;
           currentSpawnPos.z++;
       }

       counter = 0;
       bool sphereFlag = false;
       bool goalFlag = false;

       foreach(Vector3 pos in spawnPositions){

           Color c = pix[counter];

            //Check is the pixel is Black
           if (c.r < 0.8 && c.g < .8 && c.b < 0.8){
 
                    Instantiate(wallObject, pos, Quaternion.identity);

            //Fill with ground tiles
           } else {

                   Instantiate(groundObject, pos, Quaternion.identity);

           }

            if (sphereFlag == false) {

                if(c.b > .9 && c.r < .9 && c.g <.9){
                    Vector3 newPosition = new Vector3(pos.x, 2, pos.z);
                   Debug.Log("Blue pixel spotted, adding sphere!");
                    Instantiate(ballObject, newPosition, Quaternion.identity);
                   sphereFlag = true;
                   
               }
            }

            if (goalFlag == false) {

                if(c.b < .9 && c.r < .9 && c.g > .9){
                    Vector3 newPosition = new Vector3(pos.x, 1, pos.z);
                   Debug.Log("Green pixel spotted, adding sphere!");
                    Instantiate(goalObject, newPosition, Quaternion.identity);
                   goalFlag = true;
                   
               }
            }

           counter ++;
       }
       Debug.Log(counter);
   }
}
