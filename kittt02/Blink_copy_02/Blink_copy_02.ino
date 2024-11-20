
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  
 pinMode(1, OUTPUT);
 pinMode(2, OUTPUT);
 pinMode(3, OUTPUT);
 pinMode(4, OUTPUT);

}

// the loop function runs over and over again forever
void loop() {

digitalWrite(1, HIGH);  // turn the LED on (HIGH is the voltage level)
digitalWrite(2, HIGH);  // turn the LED on (HIGH is the voltage level)
                      
digitalWrite(3, HIGH);   // turn the LED off by making the voltage LOW
delay(500); 
digitalWrite(3, LOW);   // turn the LED off by making the voltage LOW
delay(500); 
digitalWrite(4, HIGH);   // turn the LED off by making the voltage LOW
delay(500); 
digitalWrite(4, LOW);   // turn the LED off by making the voltage LOW
delay(500); 
  
  
  
}
