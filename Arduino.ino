int timer = 100;          
int ledPins[] = {
  2, 7, 4, 6, 5, 8,9
};       
int pinCount = 7;           

void setup() {
  Serial.begin(96500);
  for (int thisPin = 0; thisPin < pinCount; thisPin++) {
    pinMode(ledPins[thisPin], OUTPUT);
  }
}

void loop() {
  
  for (int thisPin = 0; thisPin < pinCount; thisPin++) {
   
    digitalWrite(ledPins[thisPin], HIGH);
    delay(timer);
    delay(3000);
    
    digitalWrite(ledPins[thisPin], LOW);
    Serial.print("Timer starts");

  }

  
  for (int thisPin = pinCount - 1; thisPin >= 0; thisPin--) {Serial.print("Timer stops");
    
    digitalWrite(ledPins[thisPin], HIGH);
    delay(timer);
    delay(1000);
    digitalWrite(ledPins[thisPin], LOW);
  }
}
