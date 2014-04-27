int Horst = 11;
int Helligkeit = 0;
int Zuwachs = 1;
int i;

void setup(){
pinMode(11, OUTPUT); 
//Pin 12 als Ausgang definieren
}

void loop(){
 
for (i=0; i<256; i++){
analogWrite(Horst, i);
 delay(1);
}

for (i=255; i>=0; i--){
analogWrite(Horst, i);
 delay(10);
}

}
