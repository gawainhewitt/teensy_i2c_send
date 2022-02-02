// pull up both sda and scl with 10k resistors

#include <Wire.h>

// #define Wire Wire1 // use this to specifty a different i2c bus - For example: #define Wire Wire1 means that we are using bus 1 instead of bus 0 as default.


void setup() {
  Wire.begin(8);                // join i2c bus with address #8
  Wire.onRequest(requestEvent); // register event
}

void loop() {
  delay(100);
}

// function that executes whenever data is requested by master
// this function is registered as an event, see setup()
void requestEvent() {
  Wire.write("hello "); // respond with message of 6 bytes
  // as expected by master
}
