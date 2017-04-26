// * Copyright 2017 Francisco Javier Merchán Macías.
// *
// * This program is free software: you can redistribute it and/or modify
// * it under the terms of the GNU Affero General Public License as published
// * by the Free Software Foundation, either version 3 of the License, or
// * (at your option) any later version.
// *
// * This program is distributed in the hope that it will be useful,
// * but WITHOUT ANY WARRANTY; without even the implied warranty of
// * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// * GNU Affero General Public License for more details.
// *
// * You should have received a copy of the GNU Affero General Public License
// * along with this program.  If not, see <http://www.gnu.org/licenses/>.

//Constantes
const int ledCount = 12;    // Número de LEDs que hay. Distribuidos en 4 LEDs RGB de ánodo común.
const int APAGADO = HIGH;
const int ENCENDIDO = LOW;
//Posiciones del ARRAY donde comienzan los pines de los leds RGB.
const int posicionLED1=0;
const int posicionLED2=3;
const int posicionLED3=6;
const int posicionLED4=9;

int ledPins[] = {
  2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13
};   // Se trata de un ARRAY con los números de pin. Hay que tener en cuenta que se trata de 4 LEDs RGB
// Por lo que los pines son:
// 2, 5, 8, 11 R = Red = Rojo
// 3, 6, 9, 12 G = Green = Verde
// 4, 7, 10, 13 B = Blue = Azul


void setup() {
  //Configuramos los pines de los led como OUTPUT y los apagamos.
  for (int thisLed = 0; thisLed < ledCount; thisLed++) {
    pinMode(ledPins[thisLed], OUTPUT);
    digitalWrite(ledPins[thisLed],APAGADO);
  }
}

void loop() {
  CocheFantastico();
}

void Rojo(int Pin){
  digitalWrite(ledPins[Pin], ENCENDIDO);
  digitalWrite(ledPins[Pin+1], APAGADO);
  digitalWrite(ledPins[Pin+2], APAGADO);
}
void Verde(int Pin){
  digitalWrite(ledPins[Pin], APAGADO);
  digitalWrite(ledPins[Pin+1], ENCENDIDO);
  digitalWrite(ledPins[Pin+2], APAGADO);
}
void Azul(int Pin){
  digitalWrite(ledPins[Pin], APAGADO);
  digitalWrite(ledPins[Pin+1], APAGADO);
  digitalWrite(ledPins[Pin+2], ENCENDIDO);
}
void Blanco(int Pin){
  digitalWrite(ledPins[Pin], ENCENDIDO);
  digitalWrite(ledPins[Pin+1], ENCENDIDO);
  digitalWrite(ledPins[Pin+2], ENCENDIDO);
}
void Negro(int Pin){
  digitalWrite(ledPins[Pin], APAGADO);
  digitalWrite(ledPins[Pin+1], APAGADO);
  digitalWrite(ledPins[Pin+2], APAGADO);
}
void CocheFantastico(){
  Rojo(posicionLED1);
  delay(300);
  Negro(posicionLED1);
  Rojo(posicionLED2);
  delay(50);
  Negro(posicionLED2);
  Rojo(posicionLED3);
  delay(50);
  Negro(posicionLED3);
  Rojo(posicionLED4);
  delay(300);
  Negro(posicionLED4);
  Rojo(posicionLED3);
  delay(50);
  Negro(posicionLED3);
  Rojo(posicionLED2);
  delay(50);
  Negro(posicionLED2);
}
