void setup() {
// initialize digital pin LED_BUILTIN as an output.
Serial.begin(9600);
pinMode(LED_BUILTIN, OUTPUT);
}
// the loop function runs over and over again forever
int i=0;
void loop() {
digitalWrite(LED_BUILTIN, HIGH); // turn the LED on (HIGH is the voltage level)
Serial.write(1);
Serial.flush();
delay(5000); // wait for a second
Serial.println(i);  
digitalWrite(LED_BUILTIN, LOW); // turn the LED off by making the voltage LOW
Serial.write(2);
Serial.flush();
delay(5000); // wait for a second
Serial.println("a");  
i++;
}