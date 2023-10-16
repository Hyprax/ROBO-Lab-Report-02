/*
This is the RGB Light Chaser Program.

Goal: This program makes a light chaser similar to the second Light Chaser but instead of using LEDs we use a single RBG LED.
The code is also identical except for the variable names. That's because computer wise, this program has the exact same functionality.

Main theme: Digital Output (digitalWrite in Arduino)
*/

// Here I declared an integer variable and named it Red and gave it the value of 10.
int Red = 10;
// Here I declared an integer variable and named it Green and gave it the value of 9.
int Green = 9;
// Here I declared an integer variable and named it Blue and gave it the value of 8.
int Blue = 8;
void setup() 
{
// Here I told the Arduino that Red (pin10) works as an OUTPUT pin.  
pinMode(Red, OUTPUT);
// Here I told the Arduino that Green (pin9) works as an OUTPUT pin.
pinMode(Green, OUTPUT);
// Here I told the Arduino that Blue (pin8) works as an OUTPUT pin.
pinMode(Blue, OUTPUT);
}

void loop() 
{
// Here the Arduino provides 5V to the red LED of the RGB through pin10.  
digitalWrite(Red, HIGH);
// This freezes the whole program at the last line of code before the delay command which would be digitalWrite(Red, High). In other words, red LED of RGB will remain on for 1second.
delay(1000);
//This turns the red LED of the RGB off by sending 0V through pin10.
digitalWrite(Red, LOW);
// This does the same as line 29 except for the green LED of the RGB this time. (5V through pin9)
digitalWrite(Green, HIGH);
// same delay function. 
delay(1000);
//This turns the green LED of the RGB off by sending 0V through pin9.
digitalWrite(Green, LOW);
// This turns the blue LED of RGB on by sending 5V through pin8. 
digitalWrite(Blue, HIGH);
// same delay function.
delay(1000);
// This turns the blue LED of RGB off by sending 0V through pin8.
digitalWrite(Blue, LOW);
// This turns the green LED of RBG on again by sending 5V through pin9.
digitalWrite(Green, HIGH);
// Same delay as always.
delay(1000);
//This turns the Green LED of the RGB off again by sending 0V through pin9.
digitalWrite(Green, LOW);
}
