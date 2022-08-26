#include <Arduino.h>
int F,B,A;

void setup(){
  pinMode(2,INPUT);
  pinMode(3,INPUT);
  pinMode(13,OUTPUT);
}
void loop(){
  A=digitalRead(2);
  B=digitalRead(3);
  F =A||(A&&B);
 digitalWrite(13,F);

}
or
#include <Arduino.h>
int F,B,A;

void setup(){
  pinMode(2,INPUT);
  pinMode(3,INPUT);
  pinMode(13,OUTPUT);
}
void loop(){
  A=digitalRead(2);
  B=digitalRead(3);
  F =A||(A&&B);
  //F =A&&(A||B);
  digitalWrite(13,F);

}

