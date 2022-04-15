#ifndef MONTAPUERCOS_H
#define MONTAPUERCOS_H

#include "personaje.h"

#include <iostream>
#include <string>

using namespace std;

class Montapuercos : virtual public Personaje{  // Se aplica VIRTUAL para que no tenga ambiguedad en herencia multiple
    private:
        int salto;
    public:
        Montapuercos();
        Montapuercos(int);
        Montapuercos(const Montapuercos&);
        ~Montapuercos();
        void setSalto(int newSalto);
        int getSalto();
};
    
#endif    