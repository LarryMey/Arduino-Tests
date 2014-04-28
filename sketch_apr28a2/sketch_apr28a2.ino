int PotiPin = A0;

int PinLED = 11;

int PotiWert;


void setup(){
  pinMode(PotiPin, INPUT); //brauch man eigentlich nicht hin schreiben
    
  pinMode(PinLED, OUTPUT);
}


void loop(){
  PotiWert = analogRead(PotiPin);
  analogWrite(PinLED, PotiWert / 4);
    
}
