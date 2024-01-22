#include "../../types.h"
#include <stdbool.h>

// correction constant used for forward drive (can also be used for backw. obv.)
const int correctionConst = 3;

void forward(int speed, bool newInit) {
  // get current rotation
  short currentGyroVal = gyro_z();
  // @NOTE: will reuse value when recalled
  static short initGyroVal = 0;
  if (newInit) {
    initGyroVal = currentGyroVal;
  }
  int generalError = correctionConst * (initGyroVal - currentGyroVal);
  int generalPower = (M_MAX_SPEED * speed) / 100;

  int leftMotorPower = generalPower + generalError;
  int rightMotorPower = generalPower - generalError;

  mav(M_LEFT, leftMotorPower);
  mav(M_RIGHT, rightMotorPower);
}

void backwards(int speed, bool newInit) { forward(-speed, newInit); }

void left(int d) {

}

void right(int d) {

}

void follow_line() {

}
