
  #include <PRIZM.h>

  PRIZM prizm;

void setup() {

  prizm.PrizmBegin();

}

void loop() {
  // put your main code here, to run repeatedly:

prizm.setRedLED(HIGH);
delay(500);
prizm.setRedLED(LOW);
delay(500);
prizm.setRedLED(HIGH);
delay(500);
prizm.setRedLED(LOW);
delay(500);
prizm.setRedLED(HIGH);
delay(500);
prizm.setRedLED(LOW);
delay(500);

prizm.setGreenLED(HIGH);
delay(1000);
prizm.setGreenLED(LOW);
delay(1000);
prizm.setGreenLED(HIGH);
delay(1000);
prizm.setGreenLED(LOW);
delay(1000);

  
}
