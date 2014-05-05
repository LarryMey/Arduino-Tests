int PotiPin = A0;

int PinLED = 9;

int PotiWert;  
     // den wollen wir einlesen
     // Poti ersetzt durch Photo-Widerstand 
     // In Abhängigkeit der Helligkeit werden verschiedene Werte eingelesen


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
    //einlesen des Potis (analogRead(PotiPin)) wird intern gespeichert in PotiWert (= ist ein zuweisen)
  Serial.println(PotiWert); 
    //Ausgeben der Variablen auf dem seriellen Port 
    //Serial.print schreibt alles in eine Zeile 
    //Serial.println macht Zeilenumbrüche nach jedem Wert
  
  if (PotiWert < 90){
   Helligkeit = 255;
  }
      // LED ganz angeschalten (255), wenn Photo-Dings ganz dunkel liest
  
  else if (PotiWert > 625){
   Helligkeit = 0;
  }  
      // mit else überprüft er nur wenn das erste nicht gegeben ist
      
  else{
    Helligkeit = map(PotiWert, 90, 625, 0, 255);
  }
      //mapping Bereich des Eingelesenen Wertebereich auf den auslesbaren Wertebereich.
    analogWrite(LedPin, Helligkeit);
    
  delay(100); 
    //10 mal pro sec
    
}
