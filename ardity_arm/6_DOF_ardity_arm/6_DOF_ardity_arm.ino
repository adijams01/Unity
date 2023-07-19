//ardity 02


// Include the Servo library 
#include <Servo.h> 


// Create a servo object 
Servo Servo1; // Base
Servo Servo2; // Gripper
Servo Servo3; // Shoulder
Servo Servo4; // Elbow - 1
Servo Servo5; // Elbow - 2
Servo Servo6; // Wrist
// Servo Servo7; ....

int a=0; // Flag like int, number of cases(positions)



// the setup routine runs once when you press reset:
void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);

   // Outputs
   // for LEDs
   pinMode(13, OUTPUT); 
   // pinMode(12, OUTPUT);..... 
  
   // We need to attach the servo to the used pin number (use only pwm)
   Servo1.attach(11); 
   Servo2.attach(10); 
   Servo3.attach(9); 
   Servo4.attach(6); 
   Servo5.attach(5); 
   Servo6.attach(3); 
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
      else if(c == 'B')
      {
        a=2;
      }
      else if(c == 'C')
      {
        a=3;
      }
      else if(c == 'D')
      {
        a=4;
      }
      else if(c == 'E')
      {
        a=5;
      }
      else if(c == 'F')
      {
        a=6;
      }
      else if(c == 'G')
      {
        a=7;
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
  else if(a==2)
  {
    Serial.println("task 2"); // Display in unity
    Servo2.write(0);    // position servo motor at x degrees
    delay(1000);        // delay in between reads for stability
    Servo2.write(180);  // position servo motor at x degrees
  }
  else if(a==3)
  {
    Serial.println("task 3"); // Display in unity
    Servo3.write(0);    // position servo motor at x degrees
    delay(1000);        // delay in between reads for stability
    Servo3.write(180);  // position servo motor at x degrees
  }
  else if(a==4)
  {
    Serial.println("task 4"); // Display in unity
    Servo4.write(0);    // position servo motor at x degrees
    delay(1000);        // delay in between reads for stability
    Servo4.write(180);  // position servo motor at x degrees
  }
  else if(a==5)
  {
    Serial.println("task 5"); // Display in unity
    Servo5.write(0);    // position servo motor at x degrees
    delay(1000);        // delay in between reads for stability
    Servo5.write(180);  // position servo motor at x degrees
  }
  else if(a==6)
  {
    Serial.println("task 6"); // Display in unity
    Servo6.write(0);    // position servo motor at x degrees
    delay(1000);        // delay in between reads for stability
    Servo6.write(180);  // position servo motor at x degrees
  }

  // add other cases with [else if a==3,4...]

  else
  {
    Serial.println("task 7"); // Display in unity
    digitalWrite(13, HIGH); // LED On
    delay(1000);        // delay in between reads for stability
    digitalWrite(13, LOW); // LED Off
  }
    delay(1000);        // delay in between reads for stability
}

// End//

