  //#include <motors.h>
//this is for 2nd round of BHU it will take straight as the priority //

#include "pins.h"
#include "otors.h"
//#define SAMPLES 5

    otors Motors;     //object of the motors clss
  //int count = 0;
 void setup() 
  {

   Serial.begin(9600);
    IRinit();
    distanceInit();
    motorInit();
    buttonInit();
//  startOptions();
    calibrateSensors(); 
    delay(2000);

//    printReadLine();
  }
//  
  void loop()
  {
   //maze();
 
   runAll();



     }
      
     
   
  


