#include <Servo.h>
#include <ezButton.h>
ezButton button(7);
Servo myservo;  // create servo object to control a servo
int pos = 0;    // variable to store the servo position
int lastButtonState;    // the previous state of button
int currentButtonState; // the current state of button
void setup() {
  Serial.begin(9600); // initialize serial
  button.setDebounceTime(50); // set debounce time to 50 milliseconds
  myservo.attach(9);  // attaches the servo on pin 9 to the servo object
  myservo.write(pos);
  currentButtonState = digitalRead(7);  
}
void loop() {
  button.loop(); // MUST call the loop() function first
  if(button.isPressed()) {
    Serial.println("The button is pressed");
    if(pos == 0)
      pos = 180;
    else
    if(pos == 180)
      pos = 0;

    // control servo motor arccoding to the pos
    myservo.write(pos);
  }
}
