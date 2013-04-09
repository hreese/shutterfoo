int shutter = 13;
int valve = 12;

void setup() {                
  pinMode(shutter, OUTPUT);     
  pinMode(valve, OUTPUT);     
}

void loop() {
  delay(4000);
  
  digitalWrite(valve, HIGH);
  delay(25);
  digitalWrite(valve, LOW);
  delay(100);
  
  digitalWrite(valve, HIGH);
  delay(25);
  digitalWrite(valve, LOW);
  delay(65);
  
  digitalWrite(shutter, HIGH);
  delay(100);
  digitalWrite(shutter, LOW);
}
