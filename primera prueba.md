

ARDUINO IDE  ( Entorno de desarrollo )

Enviar: Abrir puerto, enviar el compilado, reusarla, cerrar el puerto.

El programa ARDUINO IDE dió error: " can't open " " permission denied ".

## Componentes eléctricos

Trabajamos con un circuito eléctrico, conectando el cable a 5V y GND logramos hacer que funcionara y la luz se prendiera.
Luego probamos añadiendo otra luz, una vez hicimos que esa también encendiera agregamos un botón . La idea era hacer que ambas luces se encendieran cuando tocabas el botón. 


# Circuitos Eléctricos

## Error de programación.

Windows: Usuario (usuario) y Administrador(super usuarios)

Esto pese a funcionar y dar luz, genera dos problemas. El primero: se calienta y es incómodo de tocar, y el segundo es que puede fundir el LED.

## Apuntes sobre electricidad

Voltaje - altura (diferencia de potencial)

Intensidado amperaje  - cantidad de agua o rotuladores

Resistencia - resistencia al paso del agua o rotuladores

Intensidad= voltaje / resistencia - Ley de Ohm

Voltaje= intensidad . resistencia ó Resistencia= voltaje / intensidad

### ¿ Por qué necesitamos resistencias con los LEDs ?

Para que no se frían

Tenemos dos azulitos / el voltaje de los azulitos es de 5v

5v -- GND ov 

5v -- GND ov

5v / 441 = 0,011334 A= 11,33 mA

5v / 1 = 1

### Lenguaje:

Archivo- ejemplos- o1. basics- blink

Tareas de hoy:

- Blink 

- Mensaje en morse

- Documentar lo anterior

## Archivo
Como subir un programa
- Errores y soluciones

## Morse y las funciones

Primero abrimos el arduino, probamos si el programa se ejecutaba correctamente y luego editamos el contenido más de una vez, primero en loop yluego escribimos nuestros nombres en morse.

### Errores y excepciones

Operaciones no permitidas por el lenguaje de programación 

BUG, GLITCH, ERROR, EXCEPCIÓN,LAG.

## Como programar Arduino

- Primero tenemos arduino.IDE instalado.
- Tenemos un usuario con permisos
- Conectamos el arduino por USB 
- Cargamos el programa BLINK.INO / archivo / ejemplos / 1.basics / blink
- Pulsamos el botón subir ( flechita )


- Herramientas / puerto
- Un minuto aprox y sin desenchufar arduino

Morse 1 - Hicimos modificaciones en el código para cambiar tanto el tiempo del brillo. Para eso hicimos cambios en las dos lineas delay ( ___ ); 
Nos pide un
número, ese número serán los milisegundos de espera: 1000 - 1s / 60.000 - 1 min / 500 - 1/2 milisegundo. 

Morse 2 -

# ¿ Qué hace BLINK.INO ?

vOID LOOG () L

Morse 3 -

 digitalWrite(LED_BUILTIN, HIGH);   
  delay(100);                     
  digitalWrite(LED_BUILTIN, LOW);  
  delay(500); 
