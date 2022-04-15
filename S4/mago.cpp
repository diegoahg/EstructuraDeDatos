#include "mago.h"

#include <iostream>
#include <string>

using namespace std;

//constructores

Mago::Mago()
{
  this->magia = "";
}

Mago::Mago(string magia)
{
  this->magia = magia;
}

Mago::Mago(const Mago & z)
{
  this->magia = z.magia;
}

Mago::~Mago(){
    
}

//getters y setters

void Mago::setMagia(string newMagia){
    this->magia = newMagia;
}

string Mago::getMagia(){
    return this->magia;
}