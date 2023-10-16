/*
This is the Arduino Blink Program.

Goal: Blink an LED (turn LED on for 1 second then turn LED off for 1 second and repeat)

Main Theme: Digital Output. (using the digitalWrite function)
*/

// Here I declared an integer variable called "LED" and gave it the value of 10.
int LED = 10;
void setup() 
{
// Here I told the Arduino that LED (pin10) acts as an OUTPUT.
pinMode(LED, OUTPUT);
}

void loop() 
{
// Here we tell the Arduino to OUTPUT 5V (because digital means 0V or 5V no inbetween) to the LED through pin10 which is an OUTPUT pin. This turns the LED on.
digitalWrite(LED, HIGH);
// This delay command freezes the whole program for 1000 milliseconds (1second). This allows the LED to stay on for 1 second.
delay(1000);
// Here we tell the Arduino to OUTPUT 0V to the LED turning it off. 
digitalWrite(LED,LOW);
// same as the previous delay except the LED is now off for 1 second.
delay(1000);
}
