#include "pekka.h"

#include <iostream>
#include <string>

using namespace std;

//constructores

Pekka::Pekka()
{
  this->armadura = 0;
}

Pekka::Pekka(int armadura)
{
  this->armadura = armadura;
}

Pekka::Pekka(const Pekka & a)
{
  this->armadura = a.armadura;
}

Pekka::~Pekka(){
    
}

//getters y setters

void Pekka::setArmadura(int newArmadura){
    this->armadura = newArmadura;
}

int Pekka::getArmadura(){
    return this->armadura;
}