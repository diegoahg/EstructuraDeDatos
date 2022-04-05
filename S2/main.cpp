/******************************************************************************
Autor: Profesor Diego Hernández Garía en colaboración con sus estudiantes
Fecha de creación: 30/03/2022
Fecha de modificación: 30/03/2022
Descripción: Semana 2, Programación Orientada a Objetos
*******************************************************************************/
#include <iostream>
#include "Producto.h"

using namespace std;

int main()
{
    cout << "Programa para Productos" << endl;
    cout << "====================" << endl;
    Producto bebida;
    bebida.nombre = "Fanta";
    bebida.precio = 100;
    cout << bebida.precio <<endl;
    cout << "Estimado de venta:" <<endl;
    cout << bebida.getEstimadoVenta() <<endl;
    bebida.setEstimadoVenta(1234);
    cout << bebida.getEstimadoVenta() <<endl;
    // bebida.estimadoVenta = 0; esto no se puede hacer!!!

    return 0;
}
