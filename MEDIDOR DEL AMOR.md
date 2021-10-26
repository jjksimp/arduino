# PROYECTO MEDIDOR DE AMOR

## Resumen

Este es un programa que mide temperatura y enciende LEDS

- Comunicacion SERIAL
- Variable

int SwitchState = 0;

Switch State = digitalRead (2);

CONST INT SensorPin = Aø

↳ const loat baseline Temp = 20.o;

▶ número decimal temperatura base


### ➤ Setup

Setup () {

Serial.begin(9600);

↑ un objeto

9600 = baudios

Inicia la comunicación via USB

### ➤ For

for (int pinNumber = 2 ; pinNumber < 5 ; pinNumber ++) { variable pinNumber ++ 

PinMode (pinNumber, OUTPUT);

digitalWrite (pinMode,LOW);

PinMode (2,OUTPUT);

DigitalWrite(2,LOW);

PinMode (3,OUTPUT);

digitalWrite (3,Low);

PinMode(4,OUTPUt);

digitalWrite (4,LOW);

For = repetir

### ➤ LOOP

int sensorVal= analog Read(sensorpin)

Esta línea lee el voltaje que tiene el pin SensorPin ( en este caso Aø) y 
lo mapea a valores entre ø y 1023. ø significa øV o GND y 1023 significa SV.

int sensorVal= analog Read(sensorpin)

Serial.print  ( " sensor value: "); → STRING. Cadena de carácteres

Serial.print ( sensor val ); → variable ø - 1023

Loat Voltage =(sensorVal/10240 ) * 5.0; Serial.print (",Volts:"); 

Serial.print(voltage);

int sensorVal= analog Read(sensorpin)

if ( temperature < baselinetemp ) {

dw(2,LOW);

dw(3,LOW);

dw(4,LOW); 

} else } (temperature > = baselinetemp 2 temperature < = baselinetemp +4)

### Tarea:

1)
- Hacer y documentar medidor de amor

- Calibrar
- 
![imagen](https://user-images.githubusercontent.com/90753482/138873014-178c3dac-098d-40a1-9d41-f07c47e0acf6.png)
![imagen](https://user-images.githubusercontent.com/90753482/138873048-26271f05-640d-4901-97df-b884bab4a3a5.png)


2) Variantes

- 4 LEDS, 6 LEDS

- Potenciómetro




