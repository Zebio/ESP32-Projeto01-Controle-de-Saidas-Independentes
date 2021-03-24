#include <Arduino.h>

/*-----------Constantes----------------------*/
const int tempo_do_led1_ms=389, //tempo para piscar o led1
          tempo_do_led2_ms=488, //tempo para piscar o led2
          tempo_do_led3_ms=246; //tempo para piscar o led3

/*-------------Mapeamento de Hardware--------*/
#define led1 15
#define led2 4
#define led3 5

/*-------------Variávei Globais-------------*/
int tempo_atual_led1=0,
    tempo_atual_led2=0,
    tempo_atual_led3=0;

/*------------Configurações iniciais--------*/
void setup() {
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);

  digitalWrite(led1,LOW);
  digitalWrite(led2,LOW);
  digitalWrite(led3,LOW);
}


/*--------------Loop Infinito--------------*/
void loop() {
  if ((millis()-tempo_atual_led1)>=tempo_do_led1_ms)
  {
  digitalWrite(led1,!digitalRead(led1));
  tempo_atual_led1=millis();
  }
  if ((millis()-tempo_atual_led2)>=tempo_do_led2_ms)
  {
  digitalWrite(led2,!digitalRead(led2));
  tempo_atual_led2=millis();
  }
  if ((millis()-tempo_atual_led3)>=tempo_do_led3_ms)
  {
  digitalWrite(led3,!digitalRead(led3));
  tempo_atual_led3=millis();
  }
}