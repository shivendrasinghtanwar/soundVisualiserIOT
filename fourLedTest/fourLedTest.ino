
int GREEN_1 = 4;
int GREEN_2 = 3;
int RED_1 = 2;
int RED_2 = 5;

void setup() {
  // put your setup code here, to run once:
  pinMode(GREEN_1, OUTPUT);
  pinMode(GREEN_2, OUTPUT);
  pinMode(RED_2, OUTPUT);
  pinMode(RED_1, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  blink(RED_1);
  blink(GREEN_2);
  blink(GREEN_1);
  blink(RED_2);
}

void blink(int PIN){
  digitalWrite(PIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait for a second
  digitalWrite(PIN, LOW);    // turn the LED off by making the voltage LOW
  delay(1000); 
}
