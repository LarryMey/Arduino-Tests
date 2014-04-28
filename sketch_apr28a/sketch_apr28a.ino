int SchalterPin = 2; 
    //Pin2 heißt jetzt SchalterPin 
    //int für ganze Zahlen von -32000 bis +32000

int PinLED = 12;

int SchalterStatus;


void setup(){
  pinMode(SchalterPin, INPUT); 
    //Definition, dass die Variable "SchalterPin" (momentan Pin2) ein Eingang ist
  pinMode(PinLED, OUTPUT);
}


void loop(){
  SchalterStatus = digitalRead(SchalterPin);
    //das = ist eine Zuweisung und kein Vergleich
    
  if (SchalterStatus == 1){
    digitalWrite(PinLED, HIGH);
  }
  else{
    digitalWrite(PinLED,LOW);
  }
    //wenn if und else hintereinander stehen, werden sie direkt als zusammengehörig verstanden
}
