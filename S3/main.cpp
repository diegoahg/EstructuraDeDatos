/******************************************************************************
EDD-UTEM - Profesor Diego Hernández García en conjunto con sus estudiantes
Tema: S3 Clases encapsuladas, VECTOR y funcion miembro.
*******************************************************************************/
#include <iostream>
#include <string>
#include "producto.h"

using namespace std;

int main()
{
    cout << "Programa Clase Producto con Getter y Setter" <<endl;
    
    /*
    //Constructor por Defecto
    Producto p;
    p.setNombre("Chocolate");
    p.setStock(10);
    p.setCosto(1500);
    p.setVendidos(3);
    */
    
    // Constructor Parametrizado
    Producto p("Chocolate", 20, 4, 1500);
    
    cout << "Nombre: " << p.getNombre() <<endl;
    cout << "Stock: " << p.getStock() <<endl;
    cout << "Costo: " << p.getCosto() <<endl;
    cout << "Vendidos: "<< p.getVendidos() <<endl;
    
    p.setCosto(3500); // Seteamos el valor de costo
    
    // Setteamos los ingredientes
    string ing[3] = {"Azucar","Cacao","Leche"}; //inicializamos 3 ingredientes
    vector<Ingrediente> ingredientes; //inicializamos vector ingredientes
    
    for (int i = 0; i < 3; i++){  
        Ingrediente ingrediente("","",ing[i]); // Se inicializa Clase Ingrediente y se guardan en un vector
        ingredientes.push_back(ingrediente);  // Se guardan todos los ingredientes en un VECTOR
    }
        
    p.setIngredientes(ingredientes);  // Modificamos los ingredientes
    
    // Mostramos los Ingredientes
    vector<Ingrediente> ingredientesGet = p.getIngredientes(); // Obtenemos los ingredientes
    cout<<"Los ingredientes del Producto "<< p.getNombre() <<" son: " << endl;
    for (int i = 0; i < ingredientesGet.size(); i++) {   // utilizar funciones propias de VECTOR
        cout<<"Ingrediente: "<<ingredientesGet[i].getNombre()<<endl;  //  ingredientesGet es un Vector de Ingrediente
    }
    
    // Copiamos la Clase y la imprimimos
    Producto pcopia(p);
    
    cout << "Nombre: " << pcopia.getNombre() <<endl;
    cout << "Stock: " << pcopia.getStock() <<endl;
    cout << "Costo: " << pcopia.getCosto() <<endl;
    cout << "Vendidos: "<< pcopia.getVendidos() <<endl;

    return 0;
}

