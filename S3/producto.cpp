#include "producto.h"

//Constructores
// Por defecto
Producto::Producto(){
        this->nombre = "";
        this->stock = 0;
        this->vendidos = 0;
        this->costo = 0;
}

// Parametrizado
Producto::Producto(string nombre, int stock, int vendidos, float costo){
        this->nombre = nombre;
        this->stock = stock;
        this->vendidos = vendidos;
        this->costo = costo;
}

// Por Copia
Producto::Producto(const Producto& p){
        this->nombre = p.nombre;
        this->stock = p.stock;
        this->vendidos = p.vendidos;
        this->costo = p.costo;
}

//Setter
void Producto::setNombre(string new_nombre){
    this->nombre = new_nombre;
}

void Producto::setStock(int new_stock){
    this->stock = new_stock;

}

void Producto::setVendidos(int new_vendidos){
    this->vendidos = new_vendidos;
}

void Producto::setCosto(float new_costo){
    this->costo = new_costo;
}

void Producto::setIngredientes(vector<Ingrediente> new_ingredientes){
    this->ingredientes = new_ingredientes;
}

//Getter
string Producto::getNombre(){
    return this->nombre;
}

int Producto::getStock(){
    return this->stock;
}

int Producto::getVendidos(){
    return this->vendidos;
}

float Producto::getCosto(){
    return this->costo;
}

vector<Ingrediente> Producto::getIngredientes(){
    return this->ingredientes;
}


// Destructor
Producto::~Producto(){
    cout<<"Destructor Ejecutado"<<endl;
}

// Funciones Miembro
int Producto::stockInicial(){
    return (this->stock + this->vendidos);
}

float Producto::utilidad(float precio){
    return (precio - this->costo);
}