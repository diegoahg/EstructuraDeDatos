#ifndef MAGO_H
#define MAGO_H

#include "personaje.h"

#include <iostream>
#include <string>

using namespace std;

class Mago: virtual public Personaje{ // Se aplica VIRTUAL para que no tenga ambiguedad en herencia multiple
    private:
        string magia;
    public:
        Mago();
        Mago(string);
        Mago(const Mago&);
        ~Mago();
        void setMagia(string newMagia);
        string getMagia();
};

#endif    