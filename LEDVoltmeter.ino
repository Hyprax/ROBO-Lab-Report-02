/*
This is the 5 LED Voltmeter program.

Goal: This program simulates a voltmeter out of LEDs using a potentiometer and 5 LEDs of any color.
At 1 volt, the first LED lights up. At 2 volt the second LED lights up. At 3 volts the third LED lights up and this goes on till 5V (5 LEDs for each volt)

Main Theme: The if statement as well as the else statment.
*/

// Here I declared a variable called "ledB" and gave it the value of 2.
int ledB = 2; 
// Here I declared a variable called "ledG" and gave it the value of 3.
int ledG = 3; 
// Here I declared a variable called "ledY" and gave it the value of 4.
int ledY = 4; 
// Here I declared a variable called "ledR" and gave it the value of 5.
int ledR = 5; 
// Here I declared a variable called "ledW" and gave it the value of 6.
int ledW = 6; 
void setup() 
{
// This command is used to enable printing on the serial monitor via the Serial.print function.
Serial.begin(9600);
// Here I tell the Arduino that ledB (pin2) is an OUTPUT pin. 
pinMode(ledB, OUTPUT); 
// Here I tell the Arduino that ledG (pin3) is an OUTPUT pin. 
pinMode(ledG, OUTPUT); 
// Here I tell the Arduino that ledY (pin4) is an OUTPUT pin. 
pinMode(ledY, OUTPUT); 
// Here I tell the Arduino that ledR (pin5) is an OUTPUT pin. 
pinMode(ledR, OUTPUT); 
// Here I tell the Arduino that ledW (pin6) is an OUTPUT pin. 
pinMode(ledW, OUTPUT); 
}

void loop() 
{
// Here I declared a variable called "PotentiometerValue" and whatever value the analog input pin0 reads, it will be stored within this variable.
float PotentiometerValue = analogRead(A0);
// Here I declared a variable called "Voltage" and gave it the value of : the analog input pin0 multiplied by (5.0 divided by 1023.0) to transform the bit value that the analog input pin0 reads into voltage values.
float Voltage = PotentiometerValue * (5.0 / 1023.0); 
// Here the Arduino prints the voltage values stored within the Voltage variable onto the serial monitor.
Serial.println(Voltage); 
// Here we add a delay command of 1 millisecond for stability. So the printing can be done smoothly without lag.
delay(1); 
// This line tells the Arduino that IF the voltage is bigger or equal to 1V...
if( Voltage >= 1) 
  { 
  // Turn the first LED on...
  digitalWrite(ledB, HIGH); 
  } 
  // IF not,...
  else 
  { 
  // Turn the first LED off.
  digitalWrite(ledB, LOW); 
  } 
// This line tells the Arduino that IF the voltage is bigger or equal to 2V...
if( Voltage >= 2) 
  { 
  // Turn the second LED on...
  digitalWrite(ledG, HIGH); 
  } 
  // IF not,...
  else 
  { 
  // Turn the second LED off.
  digitalWrite(ledG, LOW); 
  }
// This line tells the Arduino that IF the voltage is bigger or equal to 3V...  
if( Voltage >= 3) 
  {
  // Turn the third LED on...   
  digitalWrite(ledY, HIGH); 
  }
  // IF not,... 
  else 
  { 
  // Turn the third LED off.
  digitalWrite(ledY, LOW); 
  }
// This line tells the Arduino that IF the voltage is bigger or equal to 4V... 
if( Voltage >= 4) 
  {
  // Turn the fourth LED on... 
  digitalWrite(ledR, HIGH); 
  }
  // IF not,...  
  else 
  { 
  // Turn the fourth LED off.  
  digitalWrite(ledR, LOW); 
  }
// This line tells the Arduino that IF the voltage is bigger or equal to 5V... 
if( Voltage >= 5) 
  { 
  // Turn the Fifth LED on...
  digitalWrite(ledW, HIGH); 
  } 
  // IF not,... 
  else 
  { 
  // Turn the fifth LED off.
  digitalWrite(ledW, LOW);
  } 
}
