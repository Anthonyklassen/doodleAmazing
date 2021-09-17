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
       //This Selects the image
       image = images[0];

       // Storing all pixel information of imag as an arrya of colors
       Color[] pix = image.GetPixels();

       // Getting image width and height
       int worldX = image.width;
       int worldZ = image.height;

       // Setting up pixel positioning variables for generating maze items
       Vector3[] spawnPositions = new Vector3[pix.Length];
       Vector3 startingSpawnPosition = new Vector3(-Mathf.Round(worldX / 2), 0, -Mathf.Round(worldZ / 2));
       Vector3 currentSpawnPos = startingSpawnPosition;

       // Global loop counter
       int counter = 0;

       // Populating spawnPosition array to analyze which pixel locations to create each maze object
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
           if (c.r < 0.25 && c.g < .25 && c.b < 0.25){
 
                    Instantiate(wallObject, pos, Quaternion.identity);

            //Fill with ground tiles
           } else {

                   Instantiate(groundObject, pos, Quaternion.identity);

           }

            if (sphereFlag == false) {

                if(c.b > .5 && c.r < .5 && c.g <.9){
                    Vector3 newPosition = new Vector3(pos.x, 2, pos.z);
                    Debug.Log("Blue pixel spotted, adding sphere!");
                    Instantiate(ballObject, newPosition, Quaternion.identity);
                    sphereFlag = true;
               }
            }

            if (goalFlag == false) {

                if(c.b < .5 && c.r < .2 && c.g > .4){
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
