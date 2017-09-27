//Wires should go to these arduino ports
int thermalPin = A0; //Red to 5V, Black to GND, Middle to A0
int ledPin = 13; //Longer wire to 13, black to GND. Don't forget resistor!
int thermalVoltage = 0; //Used in software for readings

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
  thermalVoltage = analogRead(thermalPin);

  //For reference, write the reading to the Serial Monitor
  Serial.write(thermalVoltage);

  //Depending on temp scenarios, toggle LED state
  //Note this number was arbitrarily chosen and will need some tinkering based on the room temperature most likely
  if ( thermalVoltage > 300)
  {
    digitalWrite(ledPin, LOW); //LED off
  }
  else
  {
    digitalWrite(ledPin, HIGH); //LED on
  }

}
