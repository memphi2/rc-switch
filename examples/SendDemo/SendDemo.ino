/*
  Example for different sending methods
  
 /*
 Usage: sendMC(<command>, <dataLength>, <syncLength>, <repeat of command>, <delay between commands>)
 commands are 0,1 and 2,3 for Sync
 *mySwitch.sendMC("301110100010111300001000130000100013",1780,5000,3,10000);
 */


#include <RCSwitch.h>

RCSwitch mySwitch = RCSwitch();

void setup() {

  Serial.begin(9600);
  
  // Transmitter is connected to Arduino Pin #10  
  mySwitch.enableTransmit(10);

  // Optional set pulse length.
  // mySwitch.setPulseLength(320);
  
  // Optional set protocol (default is 1, will work for most outlets)
  // mySwitch.setProtocol(2);
  
  // Optional set number of transmission repetitions.
  // mySwitch.setRepeatTransmit(15);
  
}

void loop() {

  /* See Example: TypeA_WithDIPSwitches */
  mySwitch.sendMC("301110100110001300001000130000100013",1780,5000,3,10000); //shutter up
  delay(1000);
  mySwitch.sendMC("300110100110001300001000130000100013",1780,5000,3,10000); //shutter stop
  delay(60000);

}