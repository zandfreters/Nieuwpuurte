#include <Arduino.h>
#include <Blink.h>

Blink myBlinker(2);

void setup(){

}

void loop(){
  myBlinker.now();
}