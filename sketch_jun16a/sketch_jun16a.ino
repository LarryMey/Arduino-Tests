int Taktrate = 125;
int LedPin = 13; //16Bits speichert der int

byte Lesedaten; //8bits platz gespeichert für die variable - mehr brauch ich hier nicht

void setup (){
  Serial.begin(19200); //Taktung / Daten pro sec. die der Arduino schreibt
  pinMode(LedPin, OUTPUT);
}

void loop(){
  if(Serial.available() > 0){ // wenn die zeichen die an dem monitor größer 0 darf er in die klammer, sonst kann er ruhen. bei "knut" weiß er 4 zeichen
  Lesedaten = Serial.read(); // serial read liest jedes zeichen. bei "Knut" liest er eine variable. mit jedem serial read liest er ein zeichen aus dem speicher oben raus. wenn er k gelesen hat, stehen in der zeile drüber nur noch 3zeichen
  
  if ((Lesedaten / 128)>=1){  //rechnet in ganzzahlen.}
  digitalWrite(LedPin, HIGH);
  Lesedaten = Lesedaten -128;
  }
  else{
    digitalWrite(LedPin, LOW);
  }
  delay(Taktrate);
 
 //----------
  
  if ((Lesedaten / 64)>=1){
  digitalWrite(LedPin, HIGH);
  Lesedaten = Lesedaten -64;
  }
  else{
    digitalWrite(LedPin, LOW);
  }
  delay(Taktrate);
  
  //----------
  
    if ((Lesedaten / 32)>=1){
  digitalWrite(LedPin, HIGH);
  Lesedaten = Lesedaten -32;
  }
  else{
    digitalWrite(LedPin, LOW);
  }
  delay(Taktrate);
  
  //----------
  
    if ((Lesedaten / 16)>=1){
  digitalWrite(LedPin, HIGH);
  Lesedaten = Lesedaten -16;
  }
  else{
    digitalWrite(LedPin, LOW);
  }
  delay(Taktrate);
  
  //----------
  
    if ((Lesedaten / 8)>=1){
  digitalWrite(LedPin, HIGH);
  Lesedaten = Lesedaten -8;
  }
  else{
    digitalWrite(LedPin, LOW);
  }
  delay(Taktrate);
  
  //----------
  
    if ((Lesedaten / 4)>=1){
  digitalWrite(LedPin, HIGH);
  Lesedaten = Lesedaten -4;
  }
  else{
    digitalWrite(LedPin, LOW);
  }
  delay(Taktrate);
  
  //----------
  
    if ((Lesedaten / 2)>=1){
  digitalWrite(LedPin, HIGH);
  Lesedaten = Lesedaten -2;
  }
  else{
    digitalWrite(LedPin, LOW);
  }
  delay(Taktrate);
  
  //----------
  
    if ((Lesedaten / 1)>=1){
  digitalWrite(LedPin, HIGH);
  Lesedaten = Lesedaten -1;
  }
  else{
    digitalWrite(LedPin, LOW);
  }
  delay(Taktrate);
  
  //----------
  
  digitalWrite(LedPin, LOW);
    }
}
