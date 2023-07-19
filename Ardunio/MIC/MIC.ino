void setup() {
  Serial.begin(9600);
  pinMode(13,OUTPUT);
}

void loop() {
  int sensorValue = analogRead(A0);
  Serial.println(sensorValue);
  if(sensorValue > 35){   //當音量超過一定數值，這個數值依個別情況修改
    digitalWrite(13,HIGH);  //燈亮
  }else{
    digitalWrite(13,LOW);   //燈滅
  }
  delay(10);
}
