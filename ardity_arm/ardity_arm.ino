//ardity 01


// Include the Servo library 
#include <Servo.h> 

// Declare the Servo pin 
int servoPin = 3; 
// int servoPin = 5;..... use only pwm


// Create a servo object 
Servo Servo1; 
// Servo Servo2; ....

int a=0; // Flag like int, number of cases(positions)



// the setup routine runs once when you press reset:
void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
  // make the pushbutton's pin an input:
  pinMode(13, OUTPUT); // for LEDs
  // pinMode(12, OUTPUT);..... 
   // We need to attach the servo to the used pin number 
   Servo1.attach(servoPin); 
}


// the loop routine runs over and over again forever:
void loop() {
  // print out the state of the button:

  //arduino communication with unity
  if(Serial.available())
  {
    char c = Serial.read();
    if (c)
    {
      if(c == 'A')
      {        
        a=1;
      }
      else if(c == 'Z')
      {
        a=2;
      }
      c = NULL;
    }
  }
// comms ends here


// Cases starts

  if(a==1)
  {
    Serial.println("task 1"); // Display in unity
    Servo1.write(0);    // position servo motor at x degrees
    delay(1000);        // delay in between reads for stability
    Servo1.write(180);  // position servo motor at x degrees
  }

  // add other cases with [else if a==3,4...]

  else
  {
    digitalWrite(13, HIGH); // LED On
    delay(1000);        // delay in between reads for stability
    digitalWrite(13, LOW); // LED Off
    Serial.println("task 2"); // Display in unity
  }
    delay(1000);        // delay in between reads for stability
}

// End