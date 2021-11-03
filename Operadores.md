

IF (varaible y valor) Si(True)No(True)

Temperatura (15ºC - 80ºC)

Sensor Value 0 - 1024

- Leer pinao- analog read - o -1023 (8 bytes)
- Transforma los valores y, de regalo, las pinta en pantalla.

------

### - DigitalWrite:
 
DigitalWrite es una función que nos pide un número de pin y el valor HIGH (1) o LOW(0)

Si el valor es HIGH, la placa suministrará 5V en ese pin

Si el valor es LOW, la placa suministrará 0V en ese pin.

Si hay 5V, se activarám los circuitos, si es 0V no se activarán.

- Ejemplo:

DigitalWrite ( 4 ; LOW ); o DigitalWrite (4,0); se desactivaran los numeros de los pines

Si es high se activaran 5V a los numeros de los pines.


} ELSE IF ( temperature >= baselinetemp + 2 &&

temperature < baselinetemp + 4 ) }

DW(2, HIGH)

DW(3, LOW)

DW(4, LOW)

### - EJERCICIO:
Vamos a conectar 2 botones y 2 LEDS

Haremos diferentes programas con diferentes comportamientos.

Para poner un botón necesitamos una resistencia de 10.000Ω (ohmnios). Estas son las que tienen cuerpo beige y una línea naranja.

PIN ---- PULSADOR ---- GND

5V --|10K H.

Esquema del botón "por defecto arriba" o "PULLED - HIGH"

2 botones. uno al pin 2 , pin 3

PIN ----ww-----GND

       LED
    
Da igual si la resistencia va detrás o delante del LED.

Conectamos 2 LEDS, Uno al pin  4 y otro al 5.

Para poner un LED necesitamos una resistencia de 220Ω , las de un cuerpo azul. Hay que tener en cuenta la polaridad del LED.

La pata más corta va hacia el GND (0 v) y la larga hacia el voltaje.


Botón 1 -- PIN2

Botón 2 -- PIN3

LED 1 -- PIN4

LED 2 -- PIN5

### - [Arduino](https://github.com/jjksimp/arduino/blob/main/sketch_nov03a.ino)

![Captura de pantalla de 2021-11-03 10-45-20](https://user-images.githubusercontent.com/90753482/140038866-a842d13e-41c7-4e14-b3e0-65e5c97c79b4.png)


### Añadir digitalWrite:

1. La primera vez dió error porque el "if" no estaba dentro de la llave del loop.  

3. El resto es el proceso de cómo fui editando.
![Captura de pantalla de 2021-11-03 12-01-37](https://user-images.githubusercontent.com/90753482/140050349-2636282a-bcf1-440d-82de-619560939749.png)
![Captura de pantalla de 2021-11-03 12-31-46](https://user-images.githubusercontent.com/90753482/140052906-59183257-819f-4dcb-acfb-9c2892c56a3f.png)


### [EJERCICIO 1](https://github.com/jjksimp/arduino/blob/main/operadores_ejercicio1.ino)

