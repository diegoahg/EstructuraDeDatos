/******************************************************************************
Autor: Profesor Diego Hernández Garía en colaboración con sus estudiantes
Fecha de creación: 06/04/2022
Fecha de modificación: 06/04/2022
Descripción: Clase Producto con setter y getter, funcion miembro.
*******************************************************************************/

#ifndef PRODUCTO_H
#define PRODUCTO_H
#include <iostream>
#include <string>
#include <vector>
#include "ingrediente.h"


using namespace std;

// Clase de Producto
class Producto{
    // atributos
    public:
        Producto(); // Constructor por defecto
        Producto(string, int, int, float);// Constructor por Parametrización
        Producto(const Producto&); // Constructor por Copia
        ~Producto(); // Destructor
        //Setter
        void setNombre(string new_nombre);
        void setStock(int new_stock);
        void setVendidos(int new_vendidos);
        void setCosto(float new_costo);
        void setIngredientes(vector<Ingrediente> new_ingredientes);
        
        //Getter
        string getNombre();
        int getStock();
        int getVendidos();
        float getCosto();
        vector<Ingrediente> getIngredientes();

        //funcion miembro
        //void mostrarProducto();
        int stockInicial();
        //void ordenVendidos();
        float utilidad(float precio);

    private:
        string nombre;
        int stock;
        int vendidos;
        float costo;
        vector<Ingrediente> ingredientes;
};

#endif // PRODUCTO_H