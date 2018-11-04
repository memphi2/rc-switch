# rc-switch-mc
[![Build Status](https://travis-ci.org/sui77/rc-switch.svg?branch=master)](https://travis-ci.org/sui77/rc-switch)

Use your Arduino or Raspberry Pi to operate Warema EWFS

## Info
### Send RC codes

Use your Arduino or Raspberry Pi to operate remote radio controlled devices.
This will most likely work with all popular low cost power outlet sockets. If
yours doesn't work, you might need to adjust the pulse length.

All you need is a Arduino or Raspberry Pi

Usage: sendMC(<command>, <dataLength>, <syncLength>, <repeat of command>, <delay between commands>)
 
 see SendDemo.ino
