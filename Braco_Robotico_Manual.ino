// C++ code
//
#include <Servo.h>

int motor1 = 0;

int motor2 = 0;

int motor3 = 0;

int vel = 20;

Servo servo_2;

Servo servo_3;

Servo servo_4;

Servo servo_5;

void setup()
{
  servo_2.attach(2, 500, 2500);
  servo_3.attach(3, 500, 2500);
  servo_4.attach(4, 500, 2500);
  servo_5.attach(5, 500, 2500);
}

void loop()
{
  servo_5.write(8);
  delay(1000);
  
  for (motor1 = 6; motor1 <= 74; motor1 += vel){
  servo_2.write(motor1);
  delay(1000);
  }
  for (motor2 = 22; motor2 >= 15; motor2 += vel){
  servo_3.write(motor2);
  delay(1000);
  }
  for (motor3 = 36; motor3 >= 5; motor3 += vel){
  servo_4.write(motor3);
  delay(1000);
  }
 
  /////////////////////////////////////////////////////

  servo_5.write(8);
  delay(1000);
  
  for (motor1 = 74; motor1 <= 74; motor1 += vel){
  servo_2.write(motor1);
  delay(1000);
  }
  for (motor2 = 10; motor2 <= 55; motor2 += vel){
  servo_3.write(motor2);
  delay(1000);
  }
  for (motor3 = 0; motor3 <= 66; motor3 += vel){
  servo_4.write(motor3);
  delay(1000);
  }
  
  /////////////////////////////////////////////////////
  servo_5.write(40);
  delay(1000);
  
  for (motor1 = 74; motor1 <= 74; motor1 += vel){
  servo_2.write(motor1);
  delay(1000);
  }
  for (motor2 = 55; motor2 <= 55; motor2 += vel){
  servo_3.write(motor2);
  delay(1000);
  }
  for (motor3 = 66; motor3 <= 66; motor3 += vel){
  servo_4.write(motor3);
  delay(1000);
  }

  /////////////////////////////////////////////////////
  servo_5.write(40);
  delay(1000);
  
  for (motor1 = 74; motor1 >= 6; motor1 += vel){
  servo_2.write(motor1);
  delay(1000);
  }
  for (motor2 = 55; motor2 >= 22; motor2 += vel){
  servo_3.write(motor2);
  delay(1000);
  }
  for (motor3 = 66; motor3 >= 36; motor3 += vel){
  servo_4.write(motor3);
  delay(1000);
  }
  
  /////////////////////////////////////////////////////
  servo_5.write(8);
  delay(1000);
  
  for (motor1 = 6; motor1 <= 6; motor1 += vel){
  servo_2.write(motor1);
  delay(1000);
  }
  for (motor2 = 22; motor2 <= 22; motor2 += vel){
  servo_3.write(motor2);
  delay(1000);
  }
  for(motor3 = 36; motor3 <= 36; motor3 += vel){
  servo_4.write(motor3);
  delay(1000);
  }
 
 
  delay(1000); // Delay a little bit to improve simulation performance
}
