#include "../../types.h"
#include <stdbool.h>

const int correctionConst = 0;

void forward(int speed, bool newInit) {
  // Error produced
  short currentGyroVal = gyro_x();
  static short initGyroVal = -1;
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


void left(int d) {}

void right(int d) {}

void follow_line() {}
