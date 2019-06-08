
const unsigned long SECOND = 1000;
const unsigned long HOUR = 3600*SECOND;
const int pumpPin = 49;

void setup() {
  // put your setup code here, to run once:
   pinMode(pumpPin, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(pumpPin, HIGH);
  delay(30000); //30s
  digitalWrite(pumpPin, LOW);
  delay(2*HOUR); // Delay 1 minute
}
