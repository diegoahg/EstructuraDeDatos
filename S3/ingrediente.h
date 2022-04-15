#ifndef INGREDIENTE_H
#define INGREDIENTE_H
#include <iostream>
#include <string>

using namespace std;

// Clase de Producto
class Ingrediente{
    private:
        string fechavenc;
        string fechaelab;
        string nombre;
        
    public:
        //constructores
        Ingrediente();
        Ingrediente(string, string, string);
        ~Ingrediente();
        //setters
        void setFechavenc(string newFechaelab);
        void setFechaelab(string newFechavenc);
        void setNombre(string newNombre);
        //getters
        string getFechavenc();
        string getFechaelab();
        string getNombre();
};

#endif