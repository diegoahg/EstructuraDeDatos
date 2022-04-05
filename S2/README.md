# S2
POO: Introducción a Clases y Objetos

## Ejecutar en sistemas UNIX

Prerequisitos:
    - instalar g++ (https://linuxconfig.org/how-to-install-g-the-c-compiler-on-ubuntu-18-04-bionic-beaver-linux)
    
``
g++ -o ejecutable main.cpp 
`` // compilar programa

``
./ejecutable
``  // ejecutar programa

## Ejecutar con Docker

Prerequisitos:
    - instalar docker (https://docs.docker.com/compose/install/)
    
``
docker build -t imagencpp .
`` // construye la imagen Docker

``
docker run --rm -it  imagencpp:latest
`` // corre la imagen Docker
