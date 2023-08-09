// Libraries
#include <Servo.h>
#include<Wire.h>

void setup() {

  Serial.begin(19200);

}

// Receiving data from python script as string 
// of format("$xy")[x is ranging from 1-4, y is either 1 or 0] then converting x and y to int 
// and puting it in a array

void receiveData() {
  while(Serial.available()){
    char c = Serial.read();
    if (c=='$'){
      counterStart = true;

    }
    if (counterStart){
      
       if (counter<stringLength){
     receivedarray[counter]=int(c);
     counter++;
       }
       else{
        counter=0;
        counterStart=false;
       }
    }
  
  }
}
void loop() {
  receiveData();
  r=sizeof(receivedarray) / sizeof(receivedarray[0]);
  
  if (r>0){
      digitalWrite(LED_BUILTIN, HIGH);  // turn on the LED
      Serial.println("LED ON");      // print a message over serial

      delay(1000);
  }
  else{
      digitalWrite(LED_BUILTIN, LOW);  // turn on the LED
      Serial.println("LED OFF");      // print a message over serial

  }
    
}
