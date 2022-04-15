//Autores: Camilo Cerda, Rodrigo Saez, Matías Martín, Francisco Jeria
//Sección: EDD 412
//Fecha: 13-04-2022
//Fecha Modificación: 15-04-2022 Diego Hernadez García. (Correcciones de Sintaxis)
//Tema: Ejercicio de herencia simple y múltiple

#include <iostream>
#include <string>

#include "personaje.h"
#include "pekka.h"
#include "mago.h"
#include "montapuercos.h"
#include "montacarneros.h"


using namespace std;

int main()
{
    // Inicializamos Montacarneros
    Montacarneros arturovidal;
    // Modificamos valores
    arturovidal.setNombre("Arturo Vidal");
    arturovidal.setVida(999);
    arturovidal.setArmadura(20);
    arturovidal.setSalto(500);
    arturovidal.setGiro("Intermedio");
    // Mostramos valores
    arturovidal.mostrarInfo();
    
    return 0;
}