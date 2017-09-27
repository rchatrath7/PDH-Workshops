//Wires should go to these arduino ports
int resistorGND = A0; //Red to 5V, Black to A0
int ledPin = 13; //Don't forget resistor. Red to pin 13 black to GND.
int returnedVoltage = 0;

void setup() 
{
  //Tell the Arduino that the LED is an output
  pinMode(ledPin, OUTPUT);
  pinMode(resistorGND, INPUT);
  //Begins serial monitor (CTRL+SHIFT+M)
  Serial.begin(9600);

}

void loop() //Happens endlessly
{
  //Read the voltage, keeping in mind
  returnedVoltage = analogRead(resistorGND);

  //For reference, write the reading to the Serial Monitor
  Serial.write(returnedVoltage);

  //Depending on lighting scenarios, toggle LED state
  if ( returnedVoltage > 300)
  {
    digitalWrite(ledPin, HIGH);
  }
  else
  {
    digitalWrite(ledPin, LOW);
  }

}
