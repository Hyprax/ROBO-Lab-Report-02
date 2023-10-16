/*
This is the Potentiometer Bit and Voltage value program.

Goal: This program will print both the bit value of the potentiometer as well as the voltage value onto the serial monitor.

Main Theme: Float variable + Serial.print function + Analog Input.
*/
void setup() 
{
// This command is used to enable printing on the serial monitor via the Serial.print function.
Serial.begin(9600);
}

void loop() 
{
// Here I declared an integer variable called "BitValue" and it will store the values of analog input pin0.  
int BitValue = analogRead(A0);
// Here I declared a float variable called "Voltage" and gave it the value of : 
// the analog input pin0 multiplied by (5.0 divided by 1023.0) to transform the bit value that the analog input pin0 reads into voltage values.
float Voltage = BitValue * (5.0 / 1023.0); 
// Here the Arduino simply prints the word "voltage" this is just a reference so we know which value is which.
Serial.print("voltage ");
// Here the Arduino prints the voltage values stored within the Voltage variable onto the serial monitor.
Serial.println(Voltage);
// Here the Arduino simply prints the words "bit value" this is just a reference so we know which value is which.
Serial.print("bit value ");
// Here the Arduino prints the bit values stored within the BitValue variable onto the serial monitor.
Serial.println(BitValue);
// Here we add a delay command of 100 millisecond for stability.
delay(100); 
}
