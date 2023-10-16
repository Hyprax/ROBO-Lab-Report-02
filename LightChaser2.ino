/*
This is the second Light Chaser Program.

Goal: This program is very simial to the first light chaser program except this time, it's not first LED turns on then second then third and back to first. 
It is back and forth; meaning the first LED will turn on for a second then turn off at the same time as LED 2 turns on, then wait 1 second and LED 2 turns off
Turning LED 3 on for a second, and when LED 3 turns off it is not LED 1 but LED 2 that turns on again for a second until it turns off. 
Finally, The program Loops back to the start repeating the whole process. This creates a nice light chaser that goes back and forth in a loop.

Main Theme: Digital Output via the digitalWrite function. (same as LightChaser1)
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
// This turns the LEDg on again by sending 5V through pin9.
digitalWrite(LEDg, HIGH);
// once again freezing the program at the last line before the delay command thus leaving LEDg turned on for 1 second.
delay(1000);
//This turns the LEDg off again by sending 0V through pin9.
digitalWrite(LEDg, LOW);
}
