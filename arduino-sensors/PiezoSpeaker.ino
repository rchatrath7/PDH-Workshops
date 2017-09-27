int piezo = A0; //Red wire to 5V, Black wire to A0 Pin
int speaker = 13; //Red wire to pin 13, Black to GND/Ground
int piezoTrigger = 0; //Variable used in program for reading
void setup() {
  pinMode(piezo, INPUT); //Set the piezo as an INPUT
  pinMode(speaker, OUTPUT); //The speaker is our output
  Serial.begin(9600); //Serial monitor channel 9600

}

void loop() {
  piezoTrigger = analogRead(piezo); //Take a reading

  if(piezoTrigger > 1000) //Scales 0-1023, so this is a high threshold
  {
    analogWrite(speaker, 255); //Max volume the speaker so you can hear it
  }
  else
  {
    analogWrite(speaker, 0); //Turn off the speaker 
  }

}
