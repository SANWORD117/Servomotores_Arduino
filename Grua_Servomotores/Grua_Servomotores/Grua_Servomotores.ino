//PROYECTO: Grua con Servomotores y Joystick

//NOTA: La dependencia Servo se debe instalar en el propio entorno de Arduino
//de lo contrario, no funcionara y dara error
#include <Servo.h>

//Declarar servos con la dependencia Servo
Servo servo1;
Servo servo2;

//Rotación
int eje1=90;
int eje2=90;

void setup(){
  //Ubicación
  servo1.attach(7);
  servo2.attach(6);

  //Angulo
  servo1.write(90);
  servo2.write(90);
}

void loop() {
  //Servo 1
  if (analogRead(0)<200 && eje1<180){
  eje++;
  servo1.write(eje1);
  }

  if (analogRead(0)>700 && eje1>0){
  eje--;
  servo1.write(eje1);
  }

  //Servo 2
  if (analogRead(0)<200 && eje2<180){
  eje++;
  servo2.write(eje2);
  }

  if (analogRead(0)>700 && eje2>0){
  eje--;
  servo2.write(eje2);
  }

  /Tiempo de retardo en la respuesta
  delay(15);
}
