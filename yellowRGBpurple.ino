/*
This is the Yellow n Purple RGB program.

Goal: RGB LED will give a Yellow ish color when the PB is idl (not being pressed) by turning on the Red and Green colors of the RGB only. 
However, once the PB is pressed the Green color turns off and the Blue color turns on making a purple/magenta color due to a mix of Red and Blue.

Main Theme: Digital Output + Digital Input.
*/

// Here I declared an integer variable named "PB" and gave it the value of 5.
int PB = 5;
// Here I declared an integer variable named "Red" and gave it the value of 8.
int Red = 8;
// Here I declared an integer variable named "Green" and gave it the value of 9.
int Green = 9;
// Here I declared an integer variable named "Blue" and gave it the value of 10.
int Blue = 10;
void setup() 
{
// This line is used to enable printing on the serial monitor.
Serial.begin(9600);
// Here I tell the Arduino that PB (pin5) works as an input.  
pinMode(PB, INPUT);
// Here I tell the Arduino that Red (pin8) works as an output.
pinMode(Red, OUTPUT);
// Here I tell the Arduino that Green (pin9) works as an output.
pinMode(Green, OUTPUT);
// Here I tell the Arduino that Blue (pin10) works as an output.
pinMode(Blue, OUTPUT);
}

void loop() 
{
// Here I declared an integer variable called "PBstate" and stored inside it the values that pin5 (PB) reads.
int PBstate = digitalRead(PB);
// This prints the values of PBstate onto the serial monitor.
Serial.println(PBstate);
// delay of 1 millisecond for stability.
delay(1);
// Here I tell the Arduino that if the value of my PBstate is equal to 0 (meaning the PB is NOT being pressed)...
if(PBstate == 0)
{
  // Turn on the Red LED of RGB.
  digitalWrite(Red, HIGH);
  // Turn on the Green LED of RGB.
  digitalWrite(Green, HIGH);
}
// if the PBstate value is NOT equal to 0 then...
else
{
  // Turn the Green LED of RGB off.
  digitalWrite(Green, LOW);
}
// Here I tell the Arduino that if the value of my PBstate is equal to 1 (meaning the PB IS being pressed)...
if(PBstate == 1)
{
  // Turn on the Blue LED of RGB.
  digitalWrite(Blue, HIGH);
}
// if the PBstate value is NOT equal to 1 then...
else
{
  // Turn the Blue LED of RGB off.
  digitalWrite(Blue, LOW);
}
}
