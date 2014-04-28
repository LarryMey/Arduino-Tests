int SchalterPin = 2; 
    //Pin2 heißt jetzt SchalterPin 
    //int für ganze Zahlen von -32000 bis +32000

int SchalterStatus;


void setup(){
  pinMode(SchalterPin, INPUT); 
    //Definition, dass die Variable "SchalterPin" (momentan Pin2) ein Eingang ist
}

void loop(){
  SchalterStatus = digitalRead(SchalterPin);



}
