#include "montapuercos.h"

#include <iostream>
#include <string>

using namespace std;

//constructores

Montapuercos::Montapuercos()
{
  this->salto = 0;
}

Montapuercos::Montapuercos(int salto)
{
  this->salto = salto;
}

Montapuercos::Montapuercos(const Montapuercos & m)
{
  this->salto = m.salto;
}

Montapuercos::~Montapuercos(){
    
}

//getters y setters

void Montapuercos::setSalto(int newSalto){
    this->salto = newSalto;
}

int Montapuercos::getSalto(){
    return this->salto;
}