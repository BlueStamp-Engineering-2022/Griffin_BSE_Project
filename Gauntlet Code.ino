#include <HampelFilter.h>
#include <Servo.h>
Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;
Servo servo5;
int servoPin1 = 10;
int servoPin2 = 9;
int servoPin3 = 6;
int servoPin4 = 5;
int servoPin5 = 3;
int analogPin1 = A1;
int analogPin2 = A2;
int analogPin3 = A3;
int analogPin4 = A4;
int analogPin5 = A5;
int val1 = 0;
int val2 = 0;
int val3 = 0;
int val4 = 0;
int val5 = 0;
HampelFilter dataBuffer = HampelFilter(0.00, 3, 5.00);

void setup() {
  servo1.attach(servoPin1);
  servo2.attach(servoPin2);
  servo3.attach(servoPin3);
  servo4.attach(servoPin4);
  servo5.attach(servoPin5);
  Serial.begin(9600);
}

void loop() {
  val1 = analogRead(analogPin1);
  val2 = analogRead(analogPin2);
  val3 = analogRead(analogPin3);
  val4 = analogRead(analogPin4);
  val5 = analogRead(analogPin5);
  dataBuffer.write(val1);
  dataBuffer.write(val2);
  dataBuffer.write(val3);
  dataBuffer.write(val4);
  dataBuffer.write(val5);
  val1 = map(val1, 555, 760, 0, 180);
  val2 = map(val2, 555, 760, 0, 180);
  val3 = map(val3, 555, 760, 0, 180);
  val4 = map(val4, 555, 760, 0, 180);
  val5 = map(val5, 555, 760, 0, 180);
  Serial.print("1 ");
  Serial.print(val1);
  Serial.print("\t2 ");
  Serial.print(val2);
  Serial.print("\t3 ");
  Serial.print(val3);
  Serial.print("\t4 ");
  Serial.print(val4);
  Serial.print("\t5 ");
  Serial.print(val5);
  Serial.println();
  delay(10);
  servo1.write(180-val1);
  servo2.write(val2);
  servo3.write(val3);
  servo4.write(180-val4);
  servo5.write(val5);
}
