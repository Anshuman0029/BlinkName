/**
 * Name- ANSHUMAN BISHNOI
 * Student ID- 2010993024
 *  
 * Below is the code for blinking my name on Arduino Nano using MORSE CODE.
 * Rules used in the Morse code:
 * Length of dot - 1 units time.
 * Length of dash- 3 units time.
 * Space between dots and dashes of the same letter - 1 units time
 * Space between letters- 3 units time.
 * Space between words - 7 units time.
 Here, 1 unit time - 300 milliseconds.
*/

void dash()
{
   digitalWrite(LED_BUILTIN, HIGH);       // setting up pin 13 on HIGH state
   delay(900);                           // LED is ON for 0.9 seconds ( 3 units time) 
   digitalWrite(LED_BUILTIN, LOW);        // setting up pin 13 on LOW state 
   delay(300);                           // LED is OFF for 0.3 seconds ( 1 unit time)
}
void dot()
{
   digitalWrite(LED_BUILTIN, HIGH);      // setting up pin 13 on HIGH state
   delay(300);                           // LED is ON for 0.3 seconds ( 1 unit time)  
   digitalWrite(LED_BUILTIN, LOW);       // setting up pin 13 on LOW state
   delay(300);                           // LED is OFF for 0.3 seconds( 1 unit time)
}
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  // Blinking my name using MORSE CODE

  // A - (.-)
    dot();                          // call to "dot" function
    dash();                         // call to "dash" function
    delay(900);                     // Space between two letters is 3 unit time- 900 milliseconds.

  //N - (-.)
   dash();
   dot();
   delay(900);

  //S - (...)
  dot();
  dot();
  dot();
  delay(900);

  //H - (....)
   dot();
   dot();
   dot();
   dot();
   delay(900);

  //U - (..-)
   dot();
   dot();
   dash();
   delay(900);   

  //M - (--)
   dash();
   dash();
   delay(900);

  //A - (.-)
   dot();
   dash();
   delay(900);


  //N - (-.)
  dash();
  dot();
  delay(900);
}
