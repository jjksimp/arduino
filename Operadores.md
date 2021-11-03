

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

2 botones. uno al pin, pin 3

PIN ----ww-----GND
    LED
Da igual si la resistencia va detrás o delante del LED.

Conectamos 2 LEDS, Uno al pin  4 y otro al 5.

Para poner un LED necesitamos una resistencia de 220Ω , las de un cuerpo azul. Hay que tener en cuenta la polaridad del LED.

La pata más corta va hacia el GND (0 v) y la larga hacia el voltaje.
    
