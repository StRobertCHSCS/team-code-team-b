
#include <PRIZM.h>    
PRIZM prizm;          
void setup() {

  prizm.PrizmBegin();         
  prizm.setServoSpeed(1,25);  

}

void loop() {   

  prizm.setServoPosition(1,0);  
  delay(2000);                   
  prizm.setServoPosition(1,180);    
  delay(2000);                    
 
}
