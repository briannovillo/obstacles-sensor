#define SENSOR_PIN 14
 
void setup() {
  Serial.begin(9600);
  pinMode(SENSOR_PIN , INPUT);
}
 
void loop(){ 
  if (digitalRead(SENSOR_PIN) == LOW) {
    Serial.println("Detectado obstaculo");
  } else {
    Serial.println("No se ha detectado un obstaculo");
  }
  delay(100);
}
