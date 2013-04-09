// I/O-Pin for shutter release
int shutter = 13;
// I/O-Pin for valve release
int valve = 12;
// time between opening and closing the selenoid valve 
// to create a single drop
int drop_time_len = 25;

void setup() {                
  pinMode(shutter, OUTPUT);     
  pinMode(valve, OUTPUT);     
}

void loop() {
  delay(4000);
  
  // First drop
  digitalWrite(valve, HIGH);
  delay(drop_time_len);
  digitalWrite(valve, LOW);

  // wait this long before next drop
  delay(100);

  // Second drop
  digitalWrite(valve, HIGH);
  delay(drop_time_len);
  digitalWrite(valve, LOW);

  // wait this long for collision
  delay(65);

  // take picture
  digitalWrite(shutter, HIGH);
  delay(100);
  digitalWrite(shutter, LOW);
}
