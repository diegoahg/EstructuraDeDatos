#include "ingrediente.h"

using namespace std;
//Constructores
Ingrediente::Ingrediente(){
        this->fechavenc = "";
        this->fechaelab = "";
        this->nombre = "";
}

//Parametrizado
Ingrediente::Ingrediente(string fechavenc, string fechaelab, string nombre){
        this->fechaelab = fechaelab;
        this->fechavenc = fechavenc;
        this->nombre = nombre;
}

//Desctructor
Ingrediente::~Ingrediente(){
    
}

void Ingrediente::setFechavenc(string newFechavenc){
    this->fechavenc = newFechavenc;
}

void Ingrediente::setFechaelab(string newFechaelab){
    this->fechaelab = newFechaelab;
}

void Ingrediente::setNombre(string newNombre){
    this->nombre = newNombre;
}

string Ingrediente::getFechavenc(){
    return this->fechavenc;
}

string Ingrediente::getFechaelab(){
   return this->fechaelab;
}

string Ingrediente::getNombre(){
   return this->nombre;
}