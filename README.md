# rc-switch-ewfs
[![Build Status](https://travis-ci.org/sui77/rc-switch.svg?branch=master)](https://travis-ci.org/sui77/rc-switch)

Use your Arduino or Raspberry Pi to operate Warema EWFS

## Info
### Send RC codes for Warema EWFS / Manchester encoded

Use your Arduino or Raspberry Pi to operate warema ewfs controlled devices.
This will most likely work. If yours doesn't work, you might need to adjust the dataLength,syncLength or repeat of command.

All you need is a Arduino or Raspberry Pi

Usage: sendMC(command, dataLength, syncLength, repeat of command, delay between commands)
 
see SendDemo.ino
 
decoding is not supported
