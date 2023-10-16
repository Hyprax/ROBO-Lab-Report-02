/*
This is the Light chaser program 1.

Goal: Make a light chaser using 3 LEDs. 
This program will tell the Arduino to turn on one LED for 1 second then turn it off and turn on another LED for 1 second at the same time.
Turning on an off each LED one by one creating a nice chaser effect.
Once the third LED has been turned off, the program loops back to the start turning on the first LED again, so on and so forth. 

Main Theme: Controlling Digital Output (using digitalWrite)
*/

// Here I declared an integer variable and named it LEDr and gave it the value of 10.
int LEDr = 10;
// Here I declared an integer variable and named it LEDg and gave it the value of 9.
int LEDg = 9;
// Here I declared an integer variable and named it LEDb and gave it the value of 8.
int LEDb = 8;
void setup() 
{
// Here I told the Arduino that LEDr (pin10) works as an OUTPUT pin.  
pinMode(LEDr, OUTPUT);
// Here I told the Arduino that LEDg (pin9) works as an OUTPUT pin.
pinMode(LEDg, OUTPUT);
// Here I told the Arduino that LEDb (pin8) works as an OUTPUT pin.
pinMode(LEDb, OUTPUT);
}

void loop() 
{
// This turns the LEDr on by sending 5V through pin10.  
digitalWrite(LEDr, HIGH);
// This freezes the whole program, leaving the LEDr turned on for 1 second.
delay(1000);
//This turns the LEDr off by sending 0V through pin10.
digitalWrite(LEDr, LOW);
// This turns the LEDg on by sending 5V through pin9.
digitalWrite(LEDg, HIGH);
// same delay command as previous one. 
delay(1000);
//This turns the LEDg off by sending 0V through pin9.
digitalWrite(LEDg, LOW);
// This turns the LEDb on by sending 5V through pin8. 
digitalWrite(LEDb, HIGH);
// same function as previous delay commands.
delay(1000);
// This turns the LEDb off by sending 0V through pin8.
digitalWrite(LEDb, LOW);
}
