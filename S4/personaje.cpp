#include "personaje.h"

#include <iostream>
#include <string>

using namespace std;

//constructores

Personaje::Personaje(){
    this->nombre = "";
    this->vida = 0;
}

Personaje::Personaje(string nombre, int vida){
    this->nombre = nombre;
    this->vida = vida;
}

Personaje::Personaje(const Personaje& p){
    this->nombre = p.nombre;
    this->vida = p.vida;
}

//getters y setters

void Personaje::setNombre(string newNombre){
    this->nombre = newNombre;
}

string Personaje::getNombre(){
    return this->nombre;
}

void Personaje::setVida(int newVida){
    this->vida = newVida;
}

int Personaje::getVida(){
    return this->vida;
}

//destructor

Personaje::~Personaje(){

}