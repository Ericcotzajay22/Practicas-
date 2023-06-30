#include "LedControl.h"     // incluye libreria LedControl
int DIN_PIN = 11;   // Pin de datos
int CLK_PIN = 13;   // Pin de reloj
int CS_PIN = 10; 
int GasSensor = A1; // Pin analógico para la lectura del sensor de gas
int BuzzerPin = 6; // Pin digital para el buzzer

LedControl lc = LedControl(DIN_PIN, CLK_PIN, CS_PIN, 1);  // Inicializar el controlador
byte Patron[8] = { //Patron que se mostrara en la matriz led
  B00011000,
  B00011000,
  B00011000,
  B00011000,
  B00000000,
  B00011000,
  B00111100,
  B00011000
};


void setup() {
  Serial.begin(9600);
  pinMode(BuzzerPin, OUTPUT); // Configura el pin del buzzer como salida
  lc.shutdown(0, false);      // Desactivar el modo de apagado (shutdown) para mostrar los cambios
  lc.setIntensity(0, 8);      // Establecer la intensidad del brillo (0-15)
  lc.clearDisplay(0);         // Limpiar la matriz LED

  attachInterrupt(digitalPinToInterrupt(2), DetectarGas, CHANGE); // Configura la interrupción para el sensor de gas
}

void loop() {
int lectura = analogRead(A1);
  Serial.println(lectura);
  delay(100);
 DetectarGas();
  }

void DetectarGas() {
  int NivelDeGas = analogRead(GasSensor); // Lee el nivel de gas del sensor
  if (NivelDeGas >= 550) { // Si se detecta un nivel alto de gas, activa la alarma y muestra la alerta en la matriz LED
    ActivarAlarma();
     Alerta();
  }else{
    noTone(BuzzerPin);
lc.clearDisplay(0);

  }
}

void ActivarAlarma() {
  tone(BuzzerPin, 1000); // Emite un tono de alarma en el buzzer
}

void Alerta() {
  // Mostrar el patrón de la flama en la matriz LED
  for (int row = 0; row < 8; row++) {
    lc.setRow(0, row, Patron[row]);
  }
}
