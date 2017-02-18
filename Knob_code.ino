#include <Servo.h>

Servo one_wheel;          // Define left servo
Servo two_wheel;         // Define right servo

//int pitchType = 0;      // State interger that determines. Default is 0 represneting
                        // the start zero position.
char pitchType [10] = {};

void setup() { 
  one_wheel.attach(10);  // Set left servo to digital pin 10
  two_wheel.attach(9);  // Set right servo to digital pin 9
} 

/*This loop will read throuh the array sent over from the app.
 * The aray values are read into the pitchType and executed in a 
 * loop that will call the cases.  
 * 
 * NOTE: Implement interup from user (app). When interupt signal
 * is send go to zeroPos and stop the wheels.
*/
void loop() {            
 
}


// Switch statment for the pitch statement.
switch (pitchType) {
    case 0:
      //call zeroPos function. This should be at start and end of pitch sequence.
      zeroPos();
      delay(8000);
      break;
      
    case 1:
      fast60();    // Speed adjustment for type
      delay(2000); // Delay to allow the ball to be pitched
      break;
    case 2:
      //do something when var equals 2
      break;
    default: 
      // if nothing else matches, do the default
      // default is optional
    break;
  }

// Begining of presets
//-------- Zero Position --------
void zeroPos() {       
  one_wheel.write(0);
  two_wheel.write(0);
}

//-------- Fast Balls --------
void fast60() {
  one_wheel.write(158);
  two_wheel.write(83);
}

void fast70() {
  one_wheel.write(173);
  two_wheel.write(90);
}

void fast80() {
  1wheel.write(203);
  2wheel.write(98);
}

void fast90() {
  1wheel.write(218);
  2wheel.write(113);
}

//-------- Curve Balls --------
void curve60() {
  1wheel.write(180);
  2wheel.write(30);
}

void curve70() {
  1wheel.write(210);
  2wheel.write(30);
}

void curve80() {
  1wheel.write(263);
  2wheel.write(0);
}

//-------- Chage Up --------
void change60() {
  1wheel.write(180);
  2wheel.write(0);
}

void change70() {
  1wheel.write(233);
  2wheel.write(23);
}

void change80() {
  1wheel.write(240);
  2wheel.write(53);
}

