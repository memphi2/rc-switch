/*
  Example for sending a warema ewfs command
  
 /*
 Usage: sendMC(<command>, <dataLength>, <syncLength>, <repeat of command>, <delay between commands>)
 commands are 0,1 and s,S for Sync
 *mySwitch.sendMC("S01110100010111S000010001S000010001S",1780,5000,3,10000);
 *see aircontol for how to capture singnals: https://github.com/memphi2/aircontrol
 */


#include <RCSwitch.h>

RCSwitch mySwitch = RCSwitch();

void setup() {

  Serial.begin(9600);
  
  // Transmitter is connected to Arduino Pin #10  
  mySwitch.enableTransmit(10);
    
}

void loop() {

  mySwitch.sendMC("S01110100110001S000010001S000010001S",1780,5000,3,10000); //shutter up
  delay(1000);


}