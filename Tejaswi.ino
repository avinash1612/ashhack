void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(13, OUTPUT);
  Serial.begin(9600);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(13, HIGH);   
  delay(1000);     
  Serial.print("LED ON");
  digitalWrite(13, LOW);    
  delay(1000);
  Serial.print("LED LOW")
}
