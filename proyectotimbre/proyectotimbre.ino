/*#include <iarduino.h>
#include <Timer.h>
*/

int buzzPin = 11;
//int number;
//String msg1 = "Por favor introduce tu número: ";
//int dt = 200;

const int potPin = A5;
int valorPot;

//iarduino reloj (DS13026,75);
//Timer timer;

void setup() {
  // put your setup code here, to run once:
  //reloj.settime (00,00,15,5,2025,11);
  Serial.begin(9600);
  pinMode(buzzPin, OUTPUT);
  pinMode(potPin, INPUT);
  //timer.start();
  //delay(1000);
}

void loop() {
  // put your main code here, to run repeatedly:
  //h = reloj.hours;
  //m = reloj.minutes;
  /*if (h == 15 and m == 7){
    tone(BUZZER,85);
    delay(2000);
    tono(BUZZER,0);
  }
  */

  //Serial.println();
  //Serial.println(msg1);
  while (Serial.available() == 0) {
  }
  //number = Serial.parseInt();
  //number = 0;
  valorPot = analogRead(potPin);
  Serial.println(valorPot);
  delay(dt);
  digitalWrite(buzzPin, LOW);
  if (valorPot > 1000) {
    digitalWrite(buzzPin, HIGH);
    //delay(dt);
  //  digitalWrite(buzzPin, LOW);
  }
  
}
