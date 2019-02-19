void motorInit(){
  pinMode(LED2 , OUTPUT);
  pinMode(rightMoto1, OUTPUT);
  pinMode(rightMoto2, OUTPUT);
  pinMode(rightMotoPW, OUTPUT);
  pinMode(leftMoto1, OUTPUT);
  pinMode(leftMoto2, OUTPUT);
  pinMode(leftMotoPW, OUTPUT);
  pinMode(motorPowe, OUTPUT);
}
void forward(int pwm,int right)
{
  digitalWrite(motorPowe, 1); 
  digitalWrite(rightMoto1, 1);
  digitalWrite(rightMoto2, 0);
  analogWrite(rightMotoPW, right);
  digitalWrite(leftMoto1, 1);
  digitalWrite(leftMoto2, 0);
  analogWrite(leftMotoPW, pwm);
}
//void right(int pwm)
//{
//  digitalWrite(motorPower, 1); 
//  digitalWrite(rightMotor1, 0);
//  digitalWrite(rightMotor2, 1);
//  analogWrite(rightMotorPWM, pwm);
//  digitalWrite(leftMotor1, 1);
//  digitalWrite(leftMotor2, 0);
//  analogWrite(leftMotorPWM, pwm);
//}
//void left(int pwm)
//{
//  digitalWrite(motorPower, 1); 
//  digitalWrite(rightMotor1, 1);
//  digitalWrite(rightMotor2, 0);
//  analogWrite(rightMotorPWM, pwm);
//  digitalWrite(leftMotor1, 0);
//  digitalWrite(leftMotor2, 1);
//  analogWrite(leftMotorPWM, pwm);
//}
//void stp()
//{
//  digitalWrite(motorPower, 1);
//  digitalWrite(rightMotor1, 0);
//  digitalWrite(rightMotor2, 1);
//  analogWrite(rightMotorPWM, 0);
//  digitalWrite(leftMotor1, 0);
//  digitalWrite(leftMotor2, 1);
//  analogWrite(leftMotorPWM, 0);
//  for(int i=100;i>=0;i=i-2)
//  {
//     analogWrite(leftMotorPWM, i);
//     analogWrite(rightMotorPWM, i);
//  }
//}
