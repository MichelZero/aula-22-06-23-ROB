/*
autores:
Michel
Leandro

data de criação: 22/06/2023
*/

//#include <Arduino.h>  // não usar no tinkercad
/*#####################parte 2 ###############################*/
//usando o PWM
// o PWM é um método de controle de frequência que permite ao Arduino 
//controlar o pino digital como um gerador de um sinal PWM.
// controlar a luminosidade do LED como um PWM na porta digital 9.

// variáveis globais
/*########  2.1  ########*/
// usando o PWM
int pinLedPWM = 9; // porta do pino digital PWM 9
int valorPWM = 0; // valor lido do pino PWM
int pinPotencia = 0; // configurando o valor inicial do PWM


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600); // inicializando a serial com 9600 bps
  pinMode(pinLedPWM, OUTPUT); // configurando o pino digital como saída

}

void loop() {
  // put your main code here, to run repeatedly:
  //*########  2.1  ########*/
  // usando o PWM
  valorPWM = analogRead(pinPotencia); 
  Serial.print("Valor lido no pino pontencia: "); // imprimindo na serial o valor lido no pino 9
  Serial.println(valorPWM); // imprimindo na serial o valor lido no pino 9
  analogWrite(pinLedPWM, valorPWM / 4); // dividindo o valor lido no pino 9 por 4 para controlar a intensidade do PWM
  
}