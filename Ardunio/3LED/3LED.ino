
const int Blue = 3;
 
   // 速度
 
void setup() {
  pinMode(Blue, OUTPUT);
}
 
void loop() {
  int r, g, b;
 
  for (b = 0; b < 256; b++) { 
    analogWrite(Blue, b);
    delay(10);
  } 
    for (b = 255; b > 0; b--) { 
    analogWrite(Blue, b);
    delay(10);
  } 
  // 由藍綠色到藍色
  } 
