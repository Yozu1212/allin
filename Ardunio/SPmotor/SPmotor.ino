
#include <Unistep2.h>
 

Unistep2 stepper(8, 9, 10, 11, 4096, 1000);// IN1, IN2, IN3, IN4, 總step數, 每步的延遲(in micros)

void setup()
{
}

void loop()
{
  stepper.run();  //步進機啟動

  if ( stepper.stepsToGo() == 0 ){ // 如果stepsToGo=0，表示步進馬達已轉完應走的step了
    delay(500);
    stepper.move(4096);    //正轉一圈
    //stepper.move(-4096);  //負數就是反轉，反轉一圈
  }

}//28BYJ48的步進角度是5.625度，馬達減速比是1:64，
//意思就是給28BYJ48發送一個脈衝訊號，電機旋轉(5.625/64)度，
//而馬達旋轉一圈是360度，需要360/(5.635/64)=4096個脈衝信號，
//也就是說轉一圈總共是4096個step。
