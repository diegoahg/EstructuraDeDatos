#ifndef PERSONAJE_H
#define PERSONAJE_H

#include <iostream>
#include <string>

using namespace std;

class Personaje{
    private:
        string nombre;
        int vida;
    public:
        //constructores, destructor
        Personaje();
        Personaje(string, int);
        Personaje(const Personaje&);
        ~Personaje();
        //getters y setters
        void setNombre(string newNombre);
        string getNombre();
        void setVida(int newVida);
        int getVida();
};

#endif