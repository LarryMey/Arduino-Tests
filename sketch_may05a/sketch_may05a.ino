int PotiPin = A0;

int PinLED = 9;

int PotiWert;  
     // den wollen wir einlesen


void setup(){
  Serial.begin(19200); 
    // Datenübertragungsrate pro sec. (baut Zahlen)
  Serial.print("Setup Ende"); 
    //in Anführungszeichen ist Text der vom Computer in Askiwerte umwandelt und verschickt anstatt die Worte als Aufforderung zu verstehen
  pinMode (PotiPin, INPUT);  
  pinMode(PinLED, OUTPUT);
}


void loop(){
  PotiWert = analogRead(PotiPin); 
    //einlesen des Potis (analogRead(PotiPin)) wird gespeichert in PotiWert (= ist ein zuweisen)
  Serial.println(PotiWert); 
    //Ausgeben der Variablen auf dem seriellen Port 
    //Serial.print schreibt alles in eine Zeile 
    //Serial.println macht Zeilenumbrüche nach jedem Wert
  analogWrite(PinLED, PotiWert / 4); 
    //führt die Pulsweitenmodulation auf der LED aus über den Bereich des PotiWerts/4
  delay(100); 
    //10 mal pro sec
    
}
