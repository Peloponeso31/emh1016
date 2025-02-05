# Instalar compilador de C en Windows (GCC).
## Requisitos de instalación.
- Tener un programa para descomprimir archivos, como [Winrar](https://www.win-rar.com/predownload.html?&L=0) o [7Zip](https://www.7-zip.org/).
- El compilador MinGW de [Winlibs descargado](https://winlibs.com/) en su ultima versión.

## Pasos de instalación.
- Descomprimir el archivo de MinGW.
- Una vez descomprimido, nos debera quedar una carpeta que se llama `mingw64`, esta puede estar dentro de la carpeta descomprimida.
- Deberemos mover la carpeta `mingw64` esta carpeta a Disco Local `C:\`.

![image](https://github.com/user-attachments/assets/e84541d6-b0e1-4320-8ff2-0793a8a36a57)

- Presionar la tecla de windows.
- Escribir "path" sin las comillas.
- Dar clck en "Editar las variables de entorno del sistema", si no aparece esto al escribir "path", buscarlo directamente.

![image](https://github.com/user-attachments/assets/fb13e532-69fe-4c62-83c2-ab426c8aa014)

- Dar click en el boton Variables de entorno.

![image](https://github.com/user-attachments/assets/ca5f4117-e929-42ed-b54b-d5462a88233f)

- En la seccion de "Sistema", dar click en "PATH".

![image](https://github.com/user-attachments/assets/7ec03fe7-7327-42cf-acc7-59770c43e4e4)

- Dar click en el boton de "Editar".
- Dar en el boton "Nuevo".

![image](https://github.com/user-attachments/assets/1652de67-da0b-4c52-9590-b0e3f69acade)

- Pegar la ruta `C:\mingw64\bin` en la nueva casilla.
- Dar "Aceptar" en todas las ventanas.
- Abrir una nueva terminal/cmd/powershell.
- Escribir en la terminal "gcc" sin las comillas.

```
# Si muestra esto, gcc esta correctamente instalado.
gcc.exe: fatal error: no input files
compillation terminated.
```
