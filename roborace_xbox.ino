/*
 Example sketch for the Xbox 360 USB library - developed by Kristian Lauszus
 For more information visit my blog: http://blog.tkjelectronics.dk/ or
 send me an e-mail:  kristianl@tkjelectronics.com
 */

#include <XBOXUSB.h>
int en1=13;
int dir11=22;
int dir12=26;
int en2=12;
int dir21=23;
int dir22=27;
int en3=7;
int dir31=24;
int dir32=28;
int en4=6 ;
int dir41=25;
int dir42=29;

// Satisfy the IDE, which needs to see the include statment in the ino too.
#ifdef dobogusinclude
#include <spi4teensy3.h>
#endif
#include <SPI.h>

USB Usb;
XBOXUSB Xbox(&Usb);

void setup() {
  pinMode(en1,OUTPUT);
  pinMode(dir11,OUTPUT);
  pinMode(dir12,OUTPUT);
  pinMode(en2,OUTPUT);
  pinMode(dir21,OUTPUT);
  pinMode(dir22,OUTPUT);
  pinMode(en3,OUTPUT);
  pinMode(dir31,OUTPUT);
  pinMode(dir32,OUTPUT);
  pinMode(en4,OUTPUT);
  pinMode(dir41,OUTPUT);
  pinMode(dir42,OUTPUT);
  Serial.begin(115200);
#if !defined(__MIPSEL__)
  while (!Serial); // Wait for serial port to connect - used on Leonardo, Teensy and other boards with built-in USB CDC serial connection
#endif
  if (Usb.Init() == -1) {
    Serial.print(F("\r\nOSC did not start"));
    while (1); //halt
  }
  Serial.print(F("\r\nXBOX USB Library Started"));
}
void loop() {
  Usb.Task();
  if (Xbox.Xbox360Connected) {
    if (Xbox.getButtonPress(L2) || Xbox.getButtonPress(R2)) {
      Serial.print("L2: ");
      Serial.print(Xbox.getButtonPress(L2));
      Serial.print("\tR2: ");
      Serial.println(Xbox.getButtonPress(R2));
      Xbox.setRumbleOn(Xbox.getButtonPress(L2), Xbox.getButtonPress(R2));
    if(Xbox.getButtonPress(L2) ){
      allLeft();
      }
      else if( Xbox.getButtonPress(R2)){
        allRight();
        }
    
    } else
      Xbox.setRumbleOn(0, 0);

    if (Xbox.getAnalogHat(LeftHatX) > 7500 || Xbox.getAnalogHat(LeftHatX) < -7500 || Xbox.getAnalogHat(LeftHatY) > 7500 || Xbox.getAnalogHat(LeftHatY) < -7500 || Xbox.getAnalogHat(RightHatX) > 7500 || Xbox.getAnalogHat(RightHatX) < -7500 || Xbox.getAnalogHat(RightHatY) > 7500 || Xbox.getAnalogHat(RightHatY) < -7500) {
      if (Xbox.getAnalogHat(LeftHatX) > 7500 || Xbox.getAnalogHat(LeftHatX) < -7500) {
        Serial.print(F("LeftHatX: "));
        Serial.print(Xbox.getAnalogHat(LeftHatX));
        Serial.print("\t");
        if(Xbox.getAnalogHat(LeftHatX) > 7500){
             Right();
          }
          else if(Xbox.getAnalogHat(LeftHatX) < -7500){
        
             Left();
            }
      }
      if (Xbox.getAnalogHat(LeftHatY) > 7500 || Xbox.getAnalogHat(LeftHatY) < -7500) {
        Serial.print(F("LeftHatY: "));
        Serial.print(Xbox.getAnalogHat(LeftHatY));
        Serial.print("\t");
        if(Xbox.getAnalogHat(LeftHatY) > 7500){
          Forward();
          }
          else if( Xbox.getAnalogHat(LeftHatY) < -7500){
            Backward();
            }
      }
      if (Xbox.getAnalogHat(RightHatX) > 7500 || Xbox.getAnalogHat(RightHatX) < -7500) {
        Serial.print(F("RightHatX: "));
        Serial.print(Xbox.getAnalogHat(RightHatX));
        Serial.print("\t");
      }
      if (Xbox.getAnalogHat(RightHatY) > 7500 || Xbox.getAnalogHat(RightHatY) < -7500) {
        Serial.print(F("RightHatY: "));
        Serial.print(Xbox.getAnalogHat(RightHatY));
      }
      Serial.println();
     
    }
 else{
        Stop();
        }
    if (Xbox.getButtonClick(UP)) {
      Xbox.setLedOn(LED1);
      Serial.println(F("Up"));
    }
    if (Xbox.getButtonClick(DOWN)) {
      Xbox.setLedOn(LED4);
      Serial.println(F("Down"));
    }
    if (Xbox.getButtonClick(LEFT)) {
      Xbox.setLedOn(LED3);
      Serial.println(F("Left"));
    }
    if (Xbox.getButtonClick(RIGHT)) {
      Xbox.setLedOn(LED2);
      Serial.println(F("Right"));
    }

    if (Xbox.getButtonClick(START)) {
      Xbox.setLedMode(ALTERNATING);
      Serial.println(F("Start"));
    }
    if (Xbox.getButtonClick(BACK)) {
      Xbox.setLedBlink(ALL);
      Serial.println(F("Back"));
    }
    if (Xbox.getButtonClick(L3))
      Serial.println(F("L3"));
    if (Xbox.getButtonClick(R3))
      Serial.println(F("R3"));

    if (Xbox.getButtonClick(L1))
      Serial.println(F("L1"));
    if (Xbox.getButtonClick(R1))
      Serial.println(F("R1"));
    if (Xbox.getButtonClick(XBOX)) {
      Xbox.setLedMode(ROTATING);
      Serial.println(F("Xbox"));
    }

    if (Xbox.getButtonClick(A))
      Serial.println(F("A"));
    if (Xbox.getButtonClick(B))
      Serial.println(F("B"));
    if (Xbox.getButtonClick(X))
      Serial.println(F("X"));
    if (Xbox.getButtonClick(Y))
      Serial.println(F("Y"));
  }
  delay(1);
}
