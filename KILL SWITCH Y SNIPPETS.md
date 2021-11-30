### [Theremin](https://github.com/reverte04/arduino/blob/main/SNIPPET_KILL_SWITCH.CPP)

Snippet (fuente)

1. Montar proyecto escogido +  añadir botón que anule todo

Vamos a añadir una funcionalidad a un proyecto anterior.
En el grupo estoy yo. Y voy a hacer el proyecto de la interfaz de nave espacial.

A [este proyecto](https://github.com/jjksimp/arduino/blob/main/interfaz.md) voy a añadir un botón que lo apague y lo encienda.

📷 Capturas del proceso de programación: 📷
------

![Captura de pantalla de 2021-11-30 13-03-08](https://user-images.githubusercontent.com/90753482/144044038-f8540f6e-d289-4a05-801b-06f302c58cea.png)
![Captura de pantalla de 2021-11-30 13-03-52](https://user-images.githubusercontent.com/90753482/144044081-1df3ea8a-01c4-42e3-a968-86a874f8bf21.png)
------

### Parte 1: agregar un botón a un pin libre.
🔖 A la programación del proyecto de la nave espacial (página 35) se le tuvo que hacer algunas modificaciones al código poque ciertas variables ya habían sido escritas en el programa cuando el proyecto se hizo originalmente. Al agregar las nuevas variables tuve que cambiar, por ejemplo tuve que cambiar el nombre del SwitchState a SwitchStateKill, y el "pinMode(ledPin, OUTPUT)" a "pinMode(buttonPin, INPUT)" porque estaba mal escrito en el Snippet.

🔖 En cuanto al circuito se le agregó un botón(2) nuevo al pin 6~ que ahora controla sólo la luz roja mientras que el otro botón(1) controla la azul y verde.

### Parte 2: editar la programación para que el nuevo botón encienda y apague las luces.

🔖 Ahora alteramos la programación para que sea necesario apretar el botón(2) para encender o apagar las luces.
Cuando lo presionas se enciende la luz roja, y para encender las otras dos presionas el otro botón(1), pero si vuelves a presionar el botón(2) las luces se apagarán.

📷 Capturas del proceso de programación: 📷
------
![Captura de pantalla de 2021-11-30 13-21-50](https://user-images.githubusercontent.com/90753482/144047399-d78f0117-783c-4a86-937b-948a90aef6d0.png)
![Captura de pantalla de 2021-11-30 13-21-54](https://user-images.githubusercontent.com/90753482/144047402-bf64e59d-4fa1-468a-a4d6-d0fa9e7741c8.png)
------

