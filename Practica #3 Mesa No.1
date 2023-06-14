#include <Stepper.h>
#include <LedControl.h>


#define in1 4 // creamos las varibales donde van conectados las entradas del stepper
#define in2 5
#define in3 6
#define in4 7
const int pasos = 2048; // una variable que no va a cambiar para nada que son la cantidad de pasos
Stepper motor(pasos, in1, in3, in2, in4);// creamos el motor por decirlo asi indicamos su cantidad de pasos


LedControl MATLED = LedControl(11,13,10,3);	// crea objeto

#define demora 500	//creamos una demora para el tiempo en milisegundos

byte caracter[8] = {		//Arreglo para mostrar el numero 1		
 0x18, 0x38, 0x18, 0x18, 0x18, 0x18, 0x18, 0x3c 
};

byte caracter_2[8] = { //Arreglo para mostrar el numero 2
 0x3c, 0x42, 0x42, 0x4, 0x8, 0x10, 0x22, 0x7e
};

byte caracter_3[8] = { //Arreglo para mostrar el numero 3
 0x3c, 0x7e, 0x46, 0x1c, 0x1c, 0x46, 0x7e, 0x3c
};


int bot1 = 2;  //variables para los botones
int bot2 = 20;
int bot3 = 21;

bool M = 0; // una variable pra la interrupcion 

#define tiempo() delay(1000); //definimos un comando para le delay

void setup() {
  // put your setup code here, to run once:
  motor.setSpeed(15); //lamamos al motor stepper

  matled(); //llamamos a las 3 matrices de leds

  botones(); //llamamos a los botones 

  attachInterrupt(digitalPinToInterrupt(2), reset, FALLING); //Se configuraciones las interrupciones

}

void loop() {
  // put your main code here, to run repeatedly:
  if(M == 1){ //creamos un if para la interrupcion
    niv1(); //llamam,os la funcuion niv1
    M = 0;//que deje la variable de la interrupcion en 0 otra vez
  }

  if(digitalRead(bot2)== 1){ //un if para le nivel 2
    niv2();//llamam,os la funcuion niv2
  }

  if(digitalRead(bot3)== 1){ //un if para le nivel 2
    niv3();//llamam,os la funcuion niv3
  }
digitalWrite(4, LOW); //apagamos las entradas del motor stepper para que no se caliente
digitalWrite(5, LOW);
digitalWrite(6, LOW);
digitalWrite(7, LOW);
}
void reset() { //funcion para la interrupcion
  M = 1;
}

void niv1() { //funcion para el nivel 1 del elevador
  motor.step(-8184);//que el motor avance '8184°
  delay(50);//delay
  mostrar_1();//llamamos al numero uno en las matrices
  tiempo();// llamamos al tiempo
  
}

void niv2() { //esto es lo mismo que el nivel 1
  motor.step(8184);
  delay(50);
  mostrar_2();
  tiempo();

}

void niv3() { //esto es lo mismo que el nivel 1 y 2
  motor.step(8184);
  mostrar_3();
  tiempo();
  delay(50);


}

void mostrar_1() { //configuracion de la matriz led para que muestre 1
  for (int i = 0; i < 8; i++)  		// bucle itera 8 veces por el array
  {
    MATLED.setRow(0,i,caracter[i]);		// establece fila con valor de array cero en misma posicion
    MATLED.setRow(1,i,caracter[i]);		// establece fila con valor de array cero en misma posicion
    MATLED.setRow(2,i,caracter[i]);		// establece fila con valor de array cero en misma posicion
  }
}

void mostrar_2() { //configuracion de la matriz led para que muestre 2
  for (int i = 0; i < 8; i++)  		// bucle itera 8 veces por el array
  {
    MATLED.setRow(0,i,caracter_2[i]);		// establece fila con valor de array cero en misma posicion
    MATLED.setRow(1,i,caracter_2[i]);		// establece fila con valor de array cero en misma posicion
    MATLED.setRow(2,i,caracter_2[i]);		// establece fila con valor de array cero en misma posicion
  }
}

void mostrar_3() { //configuracion de la matriz led para que muestre 3
  for (int i = 0; i < 8; i++)  		// bucle itera 8 veces por el array
  {
    MATLED.setRow(0,i,caracter_3[i]);		// establece fila con valor de array cero en misma posicion
    MATLED.setRow(1,i,caracter_3[i]);		// establece fila con valor de array cero en misma posicion
    MATLED.setRow(2,i,caracter_3[i]);		// establece fila con valor de array cero en misma posicion
  }
}

void matled() { //toda la configuracion de la matriz led
  MATLED.shutdown(0,false);			// enciende la matriz
  MATLED.setIntensity(0,10);			// establece brillo
  MATLED.clearDisplay(0);			// blanquea matriz
  MATLED.shutdown(1,false);			// enciende la matriz
  MATLED.setIntensity(1,10);			// establece brillo
  MATLED.clearDisplay(1);			// blanquea matriz
  MATLED.shutdown(2,false);			// enciende la matriz
  MATLED.setIntensity(2,10);			// establece brillo
  MATLED.clearDisplay(2);			// blanquea matriz
}

void botones() { //void de salidas de los botones
  pinMode(bot1, INPUT);
  pinMode(bot2, INPUT);
  pinMode(bot3, INPUT);
}
