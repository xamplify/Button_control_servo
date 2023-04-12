#include <Servo.h>

Servo myservo;
int pos = 90; // initial servo position

int buttonPin1 = 2;
int buttonPin2 = 3;

void setup() {
  myservo.attach(9); // attach the servo to pin 9
  pinMode(buttonPin1, INPUT_PULLUP); // configure buttonPin1 as input with pullup
  pinMode(buttonPin2, INPUT_PULLUP); // configure buttonPin2 as input with pullup
}

void loop() {
  if (digitalRead(buttonPin1) == LOW) {
    pos -= 5; // decrease the position by 5 degrees
  }
  if (digitalRead(buttonPin2) == LOW) {
    pos += 5; // increase the position by 5 degrees
  }
  pos = constrain(pos, 0, 180); // make sure the position is within the valid range
  myservo.write(pos); // write the position to the servo
  delay(15); // wait for the servo to move
}
