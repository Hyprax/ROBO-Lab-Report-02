/*
This is the PBpulldown program.

Goal: All this program does is that it prints the value of the PB onto the serial monitor. (0 when idl, 1 when pressed)
The difference between PBpullup and PBpulldown is not in the code but in the wiring. 
Meaning the code will be the exact same, but the values on the serial monitor will be different.

Main Theme: Digital Input (digitalRead) + Serial.print functcion.
*/

// Here I declared an integer variable named "PB" and gave it the value of 5.
int PB = 5;
void setup() 
{  
// This line is used to enable printing on the serial monitor.
Serial.begin(9600);
// Here I tell the Arduino that PB (pin5) works as an input.  
pinMode(PB, INPUT);  
}

void loop() 
{
// Here I declared an integer variable called "PBstate" and stored inside it the values that pin5 (PB) reads.
int PBstate = digitalRead(PB);
// This prints the values of PBstate onto the serial monitor.
Serial.println(PBstate);
// delay of 1 millisecond for stability.
delay(1);  
}
