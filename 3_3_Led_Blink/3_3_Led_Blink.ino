
int H1=2;
int H2=4;
int H3=6;
int V1=8;
int V2=10;
int V3=12;



void setup() {
  pinMode(H1,OUTPUT);
  pinMode(H2,OUTPUT);
  pinMode(H3,OUTPUT);
  pinMode(V1,OUTPUT);
  pinMode(V2,OUTPUT);
  pinMode(V3,OUTPUT);

}

void blinkL1(){
  digitalWrite(H1,HIGH);
  digitalWrite(H2,LOW);
  digitalWrite(H3,LOW);
  digitalWrite(V1,LOW);
  digitalWrite(V2,HIGH);
  digitalWrite(V3,HIGH);
}
void blinkL2(){
  digitalWrite(H1,HIGH);
  digitalWrite(H2,LOW);
  digitalWrite(H3,LOW);
  digitalWrite(V1,HIGH);
  digitalWrite(V2,LOW);
  digitalWrite(V3,HIGH);
}
void blinkL3(){
  digitalWrite(H1,HIGH);
  digitalWrite(H2,LOW);
  digitalWrite(H3,LOW);
  digitalWrite(V1,HIGH);
  digitalWrite(V2,HIGH);
  digitalWrite(V3,LOW);
}
void blinkL4(){
  digitalWrite(H1,LOW);
  digitalWrite(H2,HIGH);
  digitalWrite(H3,LOW);
  digitalWrite(V1,LOW);
  digitalWrite(V2,HIGH);
  digitalWrite(V3,HIGH);
}
void blinkL5(){
  digitalWrite(H1,LOW);
  digitalWrite(H2,HIGH);
  digitalWrite(H3,LOW);
  digitalWrite(V1,HIGH);
  digitalWrite(V2,LOW);
  digitalWrite(V3,HIGH);
}
void blinkL6(){
  digitalWrite(H1,LOW);
  digitalWrite(H2,HIGH);
  digitalWrite(H3,LOW);
  digitalWrite(V1,HIGH);
  digitalWrite(V2,HIGH);
  digitalWrite(V3,LOW);
}
void blinkL7(){
  digitalWrite(H1,LOW);
  digitalWrite(H2,LOW);
  digitalWrite(H3,HIGH);
  digitalWrite(V1,LOW);
  digitalWrite(V2,HIGH);
  digitalWrite(V3,HIGH);
}
void blinkL8(){
  digitalWrite(H1,LOW);
  digitalWrite(H2,LOW);
  digitalWrite(H3,HIGH);
  digitalWrite(V1,HIGH);
  digitalWrite(V2,LOW);
  digitalWrite(V3,HIGH);
}
void blinkL9(){
  digitalWrite(H1,LOW);
  digitalWrite(H2,LOW);
  digitalWrite(H3,HIGH);
  digitalWrite(V1,HIGH);
  digitalWrite(V2,HIGH);
  digitalWrite(V3,LOW);
}
void loop() {
  blinkL1();
  delay(100);
  blinkL2();
  delay(100);
  blinkL3();
  delay(100);
  blinkL4();
  delay(100);
  blinkL5();
  delay(100);
  blinkL6();
  delay(100);
  blinkL7();
  delay(100);
  blinkL8();
  delay(100);
  blinkL9();
  delay(100);
}
