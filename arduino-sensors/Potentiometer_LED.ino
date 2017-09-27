//Wires should go to these arduino ports
int potPin = A0; //Red to 5V, Black to GND, Blue to A0
int ledPin = 13; //Don't forget to include a resistor!
int potVoltage = 0; //Used in the code for readings.

void setup() 
{
  //Tell the Arduino that the LED is an output
  pinMode(ledPin, OUTPUT);
  //Begins serial monitor (CTRL+SHIFT+M) on 9600 baud
  Serial.begin(9600);

}

void loop() //Happens endlessly
{
  //Read the voltage, keeping in mind
  potVoltage = analogRead(potPin);

  //For reference, write the reading to the Serial Monitor
  Serial.write(potVoltage);

  //Depending on lighting scenarios, toggle LED state
  if ( potVoltage > 300) //This number will need some changing depending on room lighting
  {
    digitalWrite(ledPin, HIGH); //Turn the LED on 
  }
  else
  {
    digitalWrite(ledPin, LOW); //Turn the LED off
  }

}
