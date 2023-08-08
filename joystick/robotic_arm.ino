#include <Servo.h>

#define SW 8
#define joy_x A0
#define joy_y A3
Servo myservo;  // create servo object to control a servo
int pos = 90;    // variable to store the servo position
int x=90;

void setup() {
  Serial.begin(19200);
  pinMode(SW,INPUT_PULLUP);
  pinMode(joy_x,INPUT);
  pinMode(joy_y,INPUT);
  myservo.attach(10);  // attaches the servo on pin 9 to the servo object  

}


void loop() {
  float joy_rx= analogRead(joy_x);
  float joy_ry= analogRead(joy_y);

  joy_rx=map(joy_rx,1,1024,-500,500);
  joy_ry=map(joy_ry,1,1024,-500,500);

  Serial.print(joy_rx);
  Serial.print(",");
  Serial.print(joy_ry);
  Serial.print(",");
  Serial.println(!digitalRead(SW));

  pos=map(joy_rx,-500,500,0,180);
  if(x<=pos){
   for(int position2 = x ; position2<=pos ; position2+=2.5){
    
    myservo.write(position2);
    delay(20);
  }  
  }
  else{
   for(int position2 = x ; position2>=pos ; position2-=2.5){
    
    myservo.write(position2);
    delay(20);
  }  

  }
    x=pos;
  // delay(100);

  
  
  
}

// End
