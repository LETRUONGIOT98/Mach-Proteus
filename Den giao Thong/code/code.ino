#define AX 2
#define AV 3
#define AD 4

#define BX 5
#define BV 6
#define BD 7
void setup() {
  Serial.begin(9600);
  for(int i = 2; i < 8; i++){
    pinMode(i, OUTPUT);
  }
   digitalWrite(AX, LOW);
   digitalWrite(AV, LOW);
   digitalWrite(AD, LOW);
   digitalWrite(BX, LOW);
   digitalWrite(BV, LOW);
   digitalWrite(BD, LOW);
}
void loop() {
   digitalWrite(AX, HIGH);
   digitalWrite(AV, LOW);
   digitalWrite(AD, LOW);
   
   digitalWrite(BX, LOW);
   digitalWrite(BV, LOW);
   digitalWrite(BD, HIGH);
   delay(15000);
   digitalWrite(AX, LOW);
   digitalWrite(AV, HIGH);
   digitalWrite(AD, LOW);
   
   digitalWrite(BX, LOW);
   digitalWrite(BV, LOW);
   digitalWrite(BD, HIGH);
   delay(3000);
   digitalWrite(AX, LOW);
   digitalWrite(AV, LOW);
   digitalWrite(AD, HIGH);
   
   digitalWrite(BX, HIGH);
   digitalWrite(BV, LOW);
   digitalWrite(BD, LOW);
   delay(15000);
   digitalWrite(AX, LOW);
   digitalWrite(AV, LOW);
   digitalWrite(AD, HIGH);
   
   digitalWrite(BX, LOW);
   digitalWrite(BV, HIGH);
   digitalWrite(BD, LOW);
   delay(3000);
   
}
