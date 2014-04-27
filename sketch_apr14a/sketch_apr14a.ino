int Horst = 11;

void setup() {
    pinMode(Horst, OUTPUT); 
    //Pin 12 als Ausgang definieren
}

void loop() {
 
    int Helligkeit = 0;
    int Zuwachs = 1;

    analogWrite(Horst, Helligkeit);
    delay(5);
    Helligkeit = Helligkeit + Zuwachs;

    if (Helligkeit == 255) {
        Zuwachs = -1;
    }

    if (Helligkeit == 0) {
        Zuwachs = 1;
    }
}
