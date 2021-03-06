# Interfaz de nave espacial

## Resumen

 El LED verde permanecerá encendido hasta que pulses un botón. Cuando el Arduino reciba una señal de botón, la luz verde
se apagará y las otras dos luces empezarán a parpadear.
## Introducción teórica

- construir circuito
- programar circuito
- variaciones


➙ ordenador: 

 ### input:  

- ratón
- teclado
- micro
- webcam

### output:

- altavoces
- monitor

➙ teléfono:

- entradas: micrófono, cámaras, pantallas táctil, giroscópio, acelerómetro.

- salidas: pantalla, altavoces, linterna, motor vibración

ARDUINO - 18 pines

## Proceso de montaje

Programación - pág 34-35
Resistencias - página 41. 220 - azules

SwitchState = 0;
SwitchState es una variable es de tipo "INT" que signifíca que es un número entero.

![imagen](https://user-images.githubusercontent.com/90753482/137898334-132197f3-919d-458d-987a-c5313d63964a.png)


## [Código](https://github.com/jjksimp/arduino/blob/main/interfaz_de_nave_espacial2.ino)

## Errores:

La mayor parte de los errores de programación fueron por escribir de manera erronea una o dos palabras en el arduino.
Los errores del circuito fueron por colocar cables de manera incorrecta.


## Variaciones

### Añadir botón por hardware
Vamos a añadir un botón al pin 3 de tal forma que solo cuando se pulse el led 3 se encienda. El resto del proyecto
( hardware y software ) es el mismo.

   Antes    LED   220 

Pin 3-----LED/-----ww ---- GND

   Después

PIN 3-----LED/-----  WW---- GND


### Tareas:
1) Documentar y hacer interfaz de nave.md
2) Hacer una variación del botón por hardware.



### 1)

- Volvimos a armar el circuíto de la misma manera que antes, (referencia: página 34) y programamos el Arduino también
de igual forma. 

Tuvimos un pequeño error a la hora de armar el circuíto; las luces no reaccionaban al botón poque ambos estaban en GND. Se resolvió conectando el cable correspondiente al 5V. Una vez el arreglamos el cable, el circuito funcionó correctamente.


![imagen](https://mail.google.com/mail/u/0?ui=2&ik=6ed6f8c2b4&attid=0.1&permmsgid=msg-f:1714670485054215748&th=17cbbbb8b080d644&view=att&disp=safe&realattid=f_kv7tzvpn0)
