#ifndef PEKKA_H
#define PEKKA_H

#include <iostream>
#include <string>

#include "personaje.h"

using namespace std;

class Pekka: virtual public Personaje{ // Se aplica VIRTUAL para que no tenga ambiguedad en herencia multiple
    private:
        int armadura;
    public:
        Pekka();
        Pekka(int);
        Pekka(const Pekka&);
        ~Pekka();
        void setArmadura(int newArmadura);
        int getArmadura();
};
    
#endif    