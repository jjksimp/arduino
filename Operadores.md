

IF (varaible y valor) Si(True)No(True)

Temperatura (15ºC - 80ºC)

Sensor Value 0 - 1024

- Leer pinao- analog read - o -1023 (8 bytes)
- Transforma los valores y, de regalo, las pinta en pantalla.

------

- DigitalWrite: 
DigitalWrite(2;LOW) es una función que nos pide un número de pin y el valor HIGH (1) o LOW(0)

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

} else if
