
  #include <PRIZM.h>      
  PRIZM prizm;            

void setup() {    

  prizm.PrizmBegin();     

  Serial.begin(9600);     
  prizm.setServoSpeed(1,50); 
}

void loop() {     

  int distance = prizm.readSonicSensorCM(3);
  if (distance < 10) {   
    prizm.setServoPosition(1,0);      
  }   
  else {
     prizm.setServoPosition(1,180);
  }
  }
