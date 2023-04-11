#include <Servo.h>
Servo myservo;  // create servo object to control a servo
int pos = 0;    // variable to store the servo position
int lastButtonState;    // the previous state of button
int currentButtonState; // the current state of button
void setup() {
  Serial.begin(9600); // initialize serial
  pinMode(7, INPUT_PULLUP); // set arduino pin to input pull-up mode
  myservo.attach(9);  // attaches the servo on pin 9 to the servo object
  myservo.write(pos);
  currentButtonState = digitalRead(7);  
}
void loop() {
  lastButtonState    = currentButtonState;      // save the last state
  currentButtonState = digitalRead(7); // read new state

  if(lastButtonState == HIGH && currentButtonState == LOW) {
    // change pos of servo motor
    if(pos == 0)
      pos = 90;
    else
    if(pos == 90)
      pos = 0;

    // control servo motor arccoding to the pos
    myservo.write(pos);
  }
}
