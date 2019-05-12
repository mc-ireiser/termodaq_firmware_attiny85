#include <avr/io.h>
#include <avr/interrupt.h>

int count = 0;
int t_min = 0;
int potValue = 0;
int intervalValue = 0;
const int transistor = 0;
const int analogIn = A1;
volatile int pcint_value=1;

#ifndef sbi
#define sbi(sfr, bit) (_SFR_BYTE(sfr) |= _BV(bit))
#endif

ISR(PCINT0_vect)
{
  if(digitalRead(1) == 1){
    pcint_value = 0;
  }

  if(digitalRead(1) == 0){
    pcint_value = 1;
  }
}

void setup()
{
  pinMode(1,INPUT);
  pinMode(analogIn, INPUT);
  pinMode(transistor, OUTPUT);
  sbi(GIMSK,PCIE); // Turn on Pin Change interrupt
  sbi(PCMSK,PCINT1); // Which pins are affected by the interrupt
}

void loop()
{
  count = count + 1;
  potValue = analogRead(analogIn);
  intervalValue = map(potValue, 0, 1023, 1, 30);

  if(intervalValue <= 2){
    intervalValue = 1;
  }

  if(intervalValue > 2 && intervalValue <= 5){
    intervalValue = 5;
  }

  if(intervalValue > 5 && intervalValue <= 10){
    intervalValue = 10;
  }

  if(intervalValue > 10 && intervalValue <= 15){
    intervalValue = 15;
  }

  if(intervalValue > 15 && intervalValue <= 20){
    intervalValue = 20;
  }

  if(intervalValue > 20 && intervalValue <= 25){
    intervalValue = 25;
  }

  if(intervalValue > 25 && intervalValue <= 30){
    intervalValue = 30;
  }

  if (t_min == intervalValue)
  {
    digitalWrite(transistor, HIGH);

    while(pcint_value){
      // espera
    }
    digitalWrite(transistor, LOW);
    pcint_value = 1;
    t_min = 0;
  }

  if (count == 59)
  {
    count = 0;
    t_min = t_min + 1;
  }

  delay(1000);
}
