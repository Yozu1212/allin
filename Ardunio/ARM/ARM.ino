#include <Servo.h>//匯入servo這個library
 
Servo spin, claw, x, y;// 建立 spin, claw, x, y這些 Servo 物件 

int claw_open = 0;//設定夾爪開啟的角度
int claw_close = 30;//設定夾爪關閉的角度

void setup() { 
  spin.attach(7);// 指定伺服馬達的腳位在 Arduino Uno 的 哪個pin
  claw.attach(8);// 
  x.attach(9);// 
  y.attach(10);// 
} 
 
void loop() {
  
  for (int i = 0; i<90; i++) {  //使伺服馬達spin一度一度由 0 度旋轉到 90 度
    spin.write(i);
    delay(30);
  }
  
  for(int i = 60; i<150; i++) { //使伺服馬達y一度一度由6 0 度旋轉到 150 度
    y.write(i);
    delay(30);
  }
  
  for (int i = 0; i<3; i++) { //使爪子開關三次
    claw.write(claw_close);
    delay(200);
    claw.write(claw_open);
    delay(200);
  }
  delay(2000);
  
  claw.write(claw_close); //關爪子
  delay(100);
  
  for(int i = 90; i>1; i--) { //使伺服馬達spin一度一度由 90 度旋轉到 0 度
    spin.write(i);
    delay(30);
  }
  
  for(int i = 150; i>60; i--) { //使伺服馬達spin一度一度由 150 度旋轉到 60 度
    y.write(i);
    delay(30);
  }
  
  claw.write(claw_open); //開爪子
  delay(500);
} 
