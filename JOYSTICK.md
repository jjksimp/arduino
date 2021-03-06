  ## JOYSTICK:
 
 
 - [PÁGINA WEB DE LA CLASE](https://github.com/d-prieto/arduinoCourse/blob/main/Clase_de_Joystick.md)
 
 
 ![Esquema JK-023](https://user-images.githubusercontent.com/90753482/152119489-864fad23-de13-49a4-929a-76bdb82104bb.jpg)

 - [CÓDIGO DE PRUEBA](https://github.com/d-prieto/arduinoCourse/blob/main/joysticktest.ino)
 
 

1) Agregarle al arduino un joystick y utilizar el código que está en la página de arriba.
2) Usar la herramienta de Monitor serie para asegurarse de que el joystick esté
correctamente conectado y andando.




------

![Captura de pantalla de 2022-01-26 13-35-05](https://user-images.githubusercontent.com/90753482/151164035-80fe0508-cb73-4640-a5c8-75af690ea7c6.png)

------


## Variaciones del joystick:
- Variación 1 - Encender una luz led: [Aquí](https://github.com/d-prieto/arduinoCourse/blob/main/Variaciones%20de%20Joystick.md)
- Variación 2 - Radar: [Aquí](https://github.com/d-prieto/arduinoCourse/blob/main/Radar%20y%20variaciones.md#proyecto-de-r%C3%A1dar-y-variaciones)

### VARIACIÓN 1:

 Esta variación consiste en hacer que una luz se encienda al apretar el botón del joystick.
 
Hay otras variables similares; por ejemplo que la luz se encienda cuando llega a un punto determinado en el eje x, o que cuando llega a un punto
determinado suene una pequeña nota en un altavoz.

- Proceso de programación y armado:

Al hacer la variación 1 tuve un par de problemas con el arduino porque la luz LED que yo había usado estaba fundida, y además no me dí 
cuenta de que faltaba un cable. Luego de haber arreglado estos pequeños errores el Led encendió.

- [Código](https://github.com/jjksimp/arduino/blob/main/joystickvariacion1.ino)

------

![Captura de pantalla de 2021-11-30 13-21-50](https://user-images.githubusercontent.com/90753482/152125033-22cc511d-546f-4975-a0db-ea31dd9572ff.png)

-----


### VARIACIÓN 2:

Consiste en hacer un "radar", en el cual al mover el joystick hasta cierto punto te encuentras con un punto/objeto en el eje Y o X. No
solo utiliza el joystick, también se necesita un altavoz.

------

### KY-015:

 [Fantasy studio](https://www.fantasystudios.es/arduino/pages/Componentes/placas/sensores/sensor_ky-015.html)
 
 Este proyecto consiste en medir la humedad y temperatura con un sensor KY-015 con ayuda de la página Fantasy studio que está arriba.
 Los pasos que la página indicaba también incluían indicaciones para añadir el sensor DHT22 que al no usarlo nosotros para el proyecto
 fueron omitidos, también los códigos de programación que pertenecían al sensor fueron quitados, lo cual redujo el código entero a mucho menos de lo que era   
 originalmente. 
 
Para el proyecto fue necesario instalar en el arduino la librería DHT12 sensor library 1.01 de Renzo Mischianti 


PINES:

- Pin 1: a la salida del sensor
- Pin 2: alimentación positiva (5v)
- Pin 3: alimentación negativa (ground)

[Código](https://github.com/jjksimp/arduino/blob/main/PRUEBASENSORK015.ino)

------ 

![Captura de pantalla de 2022-02-02 12-28-27](https://user-images.githubusercontent.com/90753482/152145547-2eec0b0a-bc20-4467-b786-e33358fcf23a.png)

------ 
