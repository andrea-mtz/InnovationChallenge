//creating the loop

//Add the servo library
#include <Servo.h>

//Define Servo Variables
Servo servo_1;
Servo servo_2;
Servo servo_3;
Servo servo_4;


//Define Servo Position in Degrees
int pos = 0;


void setup()
{
  servo_1.attach(9);
  servo_2.attach(8);
  servo_3.attach(7);
  servo_4.attach(6);

}

void loop()
{
  // sweep the servo from 0 to 90 degrees in steps of 1 degrees
  for (pos = 0; pos <= 90; pos += 1) {
    // tell servo to go to position in variable 'pos'
    servo_1.write(pos);
    servo_2.write(pos);
    servo_3.write(pos);
    servo_4.write(pos);
    // wait 15 ms for servo to reach the position
    delay(15); // Wait for 15 millisecond(s)
  }
  for (pos = 90; pos >= 0; pos -= 1) {
    // tell servo to go to position in variable 'pos'
    servo_1.write(pos);
    servo_2.write(pos);
    servo_3.write(pos);
    servo_4.write(pos);
    // wait 15 ms for servo to reach the position
    delay(15); // Wait for 15 millisecond(s)
  }
}