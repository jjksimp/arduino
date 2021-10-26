# PROYECTO MEDIDOR DE AMOR

## Resumen

Este es un programa que mide temperatura y enciende LEDs

## Introducción teórica

### - Variable:

Int SwitchState =0;

SwitchState= digitalRead (2);

CONST INT SensorPin = Aø

↳ const loat baseline Temp = 20.o;

▶ número decimal temperatura base



### - Setup() {

Serial.begin(9600);

↑ un objeto

Inicia la comunicación via USB

for (int pinNumber= 2; pinNumber< 5 ; pinNumber++ ) {

  variable 
Escribir Número (pinNumber)
}

### For

for (int pinNumber = 2 ; pinNumber < 5 ; pinNumber ++){ variable pinNumber ++ = Suma 1 a pinNumber

PinMode (pinNumber, OUTPUT);

digitalWrite (pinMode,LOW);

PinMode (2,OUTPUT);

DigitalWrite(2,LOW);

PinMode (3,OUTPUT);

digitalWrite (3,Low);

PinMode(4,OUTPUt);

digitalWrite (4,LOW);

For = repetir

### - LOOP

int sensorVal= analog Read(sensorpin)

Esta línea lee el voltaje que tiene el pin SensorPin ( en este caso Aø) y 
lo mapea a valores entre ø y 1023. ø significa øV o GND y 1023 significa SV.


int sensorVal= analog Read(sensorpin)
Serial.print  ( " sensor value: "); → STRING. Cadena de carácteres

Serial.print ( sensor val ); → variable ø - 1023

loat Voltage = (Sensor Val/10240)*5.0;
Serial.print(voltage);

int sensorVal= analog Read(sensorpin)

if ( temperature<baselinetemp ) {

dw(2,LOW);
dw(3,LOW);
dw(4,LOW);

## Proceso de montaje

-Materiales necesarios

-Circuito

-Foto circuito

### Código

-Explicar ""explicar codigo""

-Enlace al código utilizado
Foto - Video - Funciona o no -

### Variaciones
