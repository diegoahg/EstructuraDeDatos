#include "montacarneros.h"

#include <iostream>
#include <string>

using namespace std;

//constructores

Montacarneros::Montacarneros()
{
  this->giro = "";
}

Montacarneros::Montacarneros(string giro)
{
  this->giro = giro;
}

Montacarneros::Montacarneros (const Montacarneros & g)
{
  this->giro = g.giro;
}

Montacarneros::~Montacarneros(){
    
}

//getters y setters

void Montacarneros::setGiro(string newGiro){
    this->giro = newGiro;
}

string Montacarneros::getGiro(){
    return this->giro;
}

//Función propia o miembro
void Montacarneros::mostrarInfo(){
    cout << "Nombre: " << this->getNombre() << endl;
    cout << "Vida: " <<  this->getVida()<< endl;
    cout << "Armadura: " <<  this->getArmadura() << endl;
    cout << "Salto: " <<  this->getSalto()<< endl;
    cout << "Giro: " <<  this->getGiro()<< endl;
}