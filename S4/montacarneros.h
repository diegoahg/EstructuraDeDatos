#ifndef MONTACARNEROS_H
#define MONTACARNEROS_H

#include <iostream>
#include <string>

#include "personaje.h"
#include "pekka.h"
#include "montapuercos.h"

using namespace std;

class Montacarneros : public Pekka , public Montapuercos {
    private:
        string giro;
    public:
        Montacarneros();
        Montacarneros(string);
        Montacarneros(const Montacarneros&);
        ~Montacarneros();
        void setGiro(string newGiro);
        string getGiro();
        void mostrarInfo();
};
    
#endif    