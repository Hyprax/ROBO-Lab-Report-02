/*
This is the LED BlinkWithoutDelay and PushButton program.

Goal: blink an LED (5 seconds on, 5 seconds off in a loop) WITHOUT using the delay function. 
At the same time, have a PB connected to a circuit of its own (not interfering with the blinking LED) displaying on the serial monitor the values 0 when idle and 1 when pressed.

Main Theme: using the built-in clock/timer of the Arduino via the 'millis' command to simulate delay without freezing the entire program.
*/

// Here I declared a constant interger variable named "LED" and gave it the value of 5 (pin5).
const int LED = 5; 
// Here I declared a integer variable named "LEDstate" and gave it the value of 0 (LOW).
int LEDstate = LOW; 
// Here I declared an unsigned long variable named "blink01" and gave it the value of 0.
unsigned long blink01 = 0; 
//Here I declared a constant long variable named "deltaTime" and gave it the value of 5000.
const long deltaTime = 5000; 
// Here I declared an integer variable named "PB" and gave it the value of 10 (pin10).
int PB = 10;
void setup() 
{
// This command is used to enable printing on the serial monitor via the Serial.print function.
Serial.begin(9600); 
// This line tells the Arduino that my LED (pin5) is an OUTPUT pin.
pinMode(LED, OUTPUT); 
// This line tells the Arduino that my PB (pin10) is an INPUT pin.
pinMode(PB, INPUT); 
}

void loop() 
{
//Here I declared a unsigned long variable called "blink02" and stored inside of it the values of the builtin clock/timer of the Arduino.
unsigned long blink02 = millis(); 
// This line tells the Arduino that IF the difference between the time of the second blink (x) and the time of the first blink (0) is equal or greater than 5000 (deltaTime)(5 seconds)...
if (blink02 - blink01 >= deltaTime) 
  { 
    //Reset the clock by making the value of the second blink equal to the first (0)...
    blink01 = blink02;
    // and if the LED was off (LOW)...  
    if (LEDstate == LOW) 
    { 
    // Turn the LED on (HIGH)...
    LEDstate = HIGH; 
    } 
    else 
    { 
    // if not, keep the LED off.
    LEDstate = LOW; 
    }  
  } 
// Depending on the value that LEDstate receives (HIGH or LOW) The Arduino will supply 5V if HIGH and 0V if LOW.
digitalWrite(LED, LEDstate); 

// This is the code for the PB
//  Here I declared a variable called "PBvalue" and gave it the value of wathever value my digitalRead of pin10 (PB) picks up.
int PBvalue = digitalRead(PB); 
// This line simply prints the values I read from pin10 stored within my "PBvalue" variable onto the serial monitor.
Serial.println(PBvalue); 
}
