#include <robo_hardware2.h> 
#include <Servo.h>

//********PINOS PARA SENSORES DE COR ANALÓGICO***********//
//********SENSOR DIREITO***********************//
//  S0	5V  nivel logico baixo
//  S1  0V  nivel logico alto
//  S2  uno-2;	mega-28
//  S3  uno-3;	mega-30  
//  OUT uno-8;	mega-32
//********SENSOR ESQUERDO**********************//
//  S0	5V  nivel logico baixo
//  S1  0V  nivel logico alto
//  S2  uno-11;	mega-38
//  S3  uno-12;	mega-40
//  OUT uno-13;	mega-42
//*********PINOS PARA SENSORES DE COR ANALÓGICO*********//

//********PINOS PARA SENSORES DE COR I2C***********//
//********SENSOR DIREITO***********************//
//  SCL	uno-A4;	mega-21
//  SDA	uno-A5;	mega-20  
//  VIN	uno-3;	mega-38
//********SENSOR ESQUERDO**********************//
//  SCL	uno-A4;	mega-21
//  SDA	uno-A5;	mega-20
//  VIN	uno-2;	mega-50
//*********PINOS PARA SENSORES DE COR I2C*********//


//  O tipo RGB e formado por tres inteiros: vermelho, verde, azul
RGB leituraSensorCor; //Declaração de uma variável do tipo RGB

void setup(){
  Serial.begin(9600);
  robo.configurar(false);
}

void loop(){
  leituraSensorCor = robo.getRGBEsquerdo(); //FUNCAO PARA LER VALOR DO SENSOR LATERAL


  //imprime os 3 valores retornardos pelo sensor cor
  Serial.print("Valor do sensor de cor: ");
  Serial.print(leituraSensorCor.vermelho);
  Serial.print(", ");
  Serial.print(leituraSensorCor.verde);
  Serial.print(", ");
  Serial.print(leituraSensorCor.azul);
  
  Serial.println();
  
  delay(500);
}
