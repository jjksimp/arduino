## PWM (Pulse width modulation)
Modulación por ancho de pulsos.

- Problema: tengo un arduino que suministra 5V a un LED

A mayor intensidad de corriente (A -amperios) el LED brilla más.

A menor intensidad de corriente el LED brilla menos (ver ley de OHM, pág 30)

⇨ I = V/R. 

Si subimos o bajamos el voltaje, haremos lo mismo con la intensidad.

Suponiendo que la resistencia del circuito es la misma.

Entonces si conecto un LED con su resistencia de 220 ohmnios.

¿ Brillará más a un voltaje de 5V o de 3,3V ? El LED brillará más con 5V y menos con 3,3V.

PULSO ⇨  Una señal

## ¿ Qué es un pulso ?

Un pulso eléctrico es una señal de voltaje medida en el tiempo

Los ojos humanos podemos detectar cambios hasta entorno a 12hz. A partir de 24hz - 30hz no somos capaces visualmente.

Los pulsos modulados crean la ilusión de voltaje intermedios entre 0 y 5V, para ello usan pulsos muy cortos.

Que usaremos a travéz de la función 

Los pines con PWm estás marcados con el símbolo ~ ( la tílde de la tecla Ñ)

La función nos pide 2 cosas; por un lado el número de PIN, por otro lado un número entre 0 y 255 

0 ⇨ 0% de voltaje

255 ⇨ 100% de voltaje (5V)

INT - integer. número entero

Significa que nuestra variable es un tipo de dato numérico no decimal.
Le asigna un espacio en memoria otros tipos

- String - cadena de carácteres.
- bool - boleano y es verdadero (true) o falso (false)
- char - un único caracter
- float - números decimales

 ⇨ Raw sensor value: valores del sensor sin tratar

MAPEAR:

1024= 4. 256 --- 256 = 1024/4

### Ejercicio:

- Este proyecto está hecho con Ángel. 
- Programación de la página 57.
- No hubo ningún error al hacer la programación, si hubo en el circuito que a la primera la luz no se encendía.

### 1. Variaciones ↴

⇨ HARDWARE: botones en vez de potenciómetros.

⇨ SOFTWARE: valores diferentes

➡ [Imagen de referencia para armar el circuito](https://raw.githubusercontent.com/miguelamgel1107/Arduino/main/IMG20211103140539.jpg) (github de Miguel Angel)

➡ [Archivo](https://github.com/jjksimp/arduino/blob/main/Lampara_varios_colores.ino)

![Captura de pantalla de 2021-11-09 10-41-21](https://user-images.githubusercontent.com/90753482/140900799-0196615f-31af-460e-b2ee-e48de998ff10.png)

