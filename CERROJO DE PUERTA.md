### Cerrojo de puerta:

- PÁGINA:126-133

El proyecto funciona de la siguiente manera: detecta las vibraciones de los golpes que a la mesa, 
según la intensidad de estos uno de los led(rojo, verde o amarillo) se encenderá.

Las luces funcionan así: si la verde está encendida significa que "la caja" está abierta, si la roja está encendida es porque está cerrada y para volver a abrirla se necesitan 3 golpes que serán detectados por el arduino. Una vez reciban las vibraciones la caja volverá a abrirse y por lo tanto la luz verde se volverá a encender también. Para "cerrar" la caja imaginaria presionamos el botón, y al cerrarse se enciende la roja.

### Código: [Aquí](https://github.com/jjksimp/arduino/blob/main/cerrojo_de_puerta.ino)
![Captura de pantalla de 2022-01-26 12-09-14](https://user-images.githubusercontent.com/90753482/151152879-e8f0d089-3dbb-4d94-95ca-e89ad27706b1.png)

-------
![Captura de pantalla de 2022-01-26 10-00-38](https://user-images.githubusercontent.com/90753482/151136850-07ecfa90-30ba-4c3a-ba8b-1b709590cfdc.png)

-------

### Errores:
En un principio hubo unos pequeños errores con el arduino; que faltaba un cable o que se tenía que cambiar una resistencia por otra.
Cuando estos pequeños errores fueron arreglados, el arduino seguía sin funcionar correctamente por un bug de la programación que no dejaba que se ejecutara como debería. Esto al final fue arreglado y ahora si el arduino funcionaba.
