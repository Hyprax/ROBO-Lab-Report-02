/*
This is the RGB color selector program.

Goal: make any color you want using a combination of Red, Green and Blue on your RGB LED.
The color is achieved by varying the intensity of the 3 different colors of RGB.

Main Theme: Analog Output (analogWrite) + byte function.
*/

// Here I declared a variable called "Red" and gave it the value of 8.
int Red = 8;
// Here I declared a variable called "Green" and gave it the value of 9.
int Green = 9;
// Here I declared a variable called "Blue" and gave it the value of 10.
int Blue = 10;
void setup() 
{
// This function will allow us to assign any bit number ranging from 0 to 255.  
byte(255);
// bits ---> volts  [bit value * (5/255) = volts]  
}

void loop() 
{
// Here I tell the Arduino to output an analog value of 255 bit to my Red LED of RGB (5V) 
analogWrite(Red, 226);
// Here I tell the Arduino to output an analog value of 17 bit to my Green LED of RGB (0.34V) 
analogWrite(Green, 28);
// Here I tell the Arduino to output an analog value of 131 bit to my Blue LED of RGB (2.62V) 
analogWrite(Blue, 202);  
}
