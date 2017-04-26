# Kitt
Se trata de un pequeño proyecto para Arduino en el que se simula el efecto de Kitt (del "Coche Fantástico") con 4 LEDs RGB de Ánodo común. El proyecto sería fiel al original con 6 LEDs. No es necesario que sean LEDs RGB, pero en mi caso son los que disponía.

Se usan los PWM del 2 al 13, controlando las patillas de los led RGB por separado. Los pines corresponderían a:
- 2, 5, 8, 11 R = Red = Rojo
- 3, 6, 9, 12 G = Green = Verde
- 4, 7, 10, 13 B = Blue = Azul

Se ha utilizado:
- Arduino IDE 1.8.2 descargado desde https://www.arduino.cc/en/Main/Software
- 1 Placa Arduino MEGA 2560 (china).
- 12 resistencias de 220 ohmios.
- 4 LEDs RGB de 5mm de ánodo común.
- 1 Protoboard.
- 13 cables para unir la placa arduino con la protoboard
