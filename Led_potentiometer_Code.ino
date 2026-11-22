const int PotPin = A3;
int PotVal = 0;
const int LED = 11;
int LedVAL = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(LED,OUTPUT);
  pinMode(PotPin, INPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:

  PotVal = analogRead(PotPin);
  LedVAL = map(PotVal, 0,1023,0,255);
  Serial.println(LedVAL);
  analogWrite(LED,LedVAL);


}
