
#include <Servo.h>

Servo billy;
Servo federick;

int posBilly = 0;
int posFederick = 0;

void setup() {
  // put your setup code here, to run once:
  billy.attach(6);
  federick.attach(5);
}

void loop() {
  // put your main code here, to run repeatedly:
  for (posBilly = 0; posBilly <= 10; posBilly += 1) 
  {
    billy.write(posBilly);              
    delay(15);                      
  }

  delay(1000);
  
  for (posBilly = 10; posBilly >= 0; posBilly -= 1) 
  { 
    billy.write(posBilly);              
    delay(15);  
  }
}
