/*
This is the PB Input Pullup program.

Goal: This program is the same as a regular PBpullup program except for the use of an external 10k ohm restistor.
This program uses instead the built-in 10k ohm resistor inside the Arduino itself.
But in terms of functionality it's the same as the PBpullup program. (1 when idle, 0 when pressed)

Main Theme: Digital Input (digitalRead) + INPUT_PULLUP + Serial.print functcion.
*/

// Here I declared an integer variable named "PB" and gave it the value of 5.
int PB = 5;
void setup()
{
// This line is used to enable printing on the serial monitor.
Serial.begin(9600);
// Here I tell the Arduino that PB (pin5) works as an input. The pullup tells the aduino to use the internal 10k ohm resistor.  
pinMode(PB, INPUT_PULLUP);  
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
