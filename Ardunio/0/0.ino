#define PIN_AO 0
#define PIN_DO 8
  
void setup() {  
  pinMode(PIN_AO, INPUT);
  pinMode(PIN_DO, INPUT);  
  Serial.begin(9600);  
}  
  
void loop() {
  Serial.print("AO=");  
  Serial.print(analogRead(PIN_AO));
  Serial.print(", DO=");  
  Serial.println(digitalRead(PIN_DO));
  delay(500);  
} 
