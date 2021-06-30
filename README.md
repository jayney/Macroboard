# Macroboard
20 Key Macro Keypad

An Arduino powered macro keyboard, designed for up to 20 x Cherry MX switches (or similar).The Arduino is a 5v 16MHz Sparkfun Pro Micro (32U4), or one of the cheap clones available on your favourite retail site!

Code is based on the Keypad library by Chris--A, and is available from the library manager in the Arduino IDE, or at

https://github.com/Chris--A/Keypad

The PCB is designed to fit Bopla BP810 enclosure.

Initially the keyboard strings attached to each key will need to be hard coded in the main loop. At some point I intend to put these into an #include file, and perhaps investigate upload and storage in EEPROM.
