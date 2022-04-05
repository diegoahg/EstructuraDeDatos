#include "Producto.h"

Producto::Producto()
{
        this->nombre = "";
        this->precio = 0;
        this->peso = 0;
        this->fecha_vencimiento = "";
        this->fecha_elaboracion = "";
        this->sku = 0;
        this->stock = 0;
        this->diseno = "";
        this->uso = "";
        this->descuento = 0;
        this->marca = "";
        this->estimado_venta = 0;
        this->costo_marketing = 0;
        this->obsolescencia = false;
}


int Producto::getEstimadoVenta(){
    return this->estimado_venta;
}

void Producto::setEstimadoVenta(int newDato){
    this->estimado_venta = newDato;
}

int Producto::getCostoMarketing(){
    return this->costo_marketing;
}

void Producto::setCostoMarketing(int newDato){
    this->costo_marketing = newDato;
}

int Producto::getObsolescencia(){
    return this->obsolescencia;
}

void Producto::setObsolescencia(bool newDato){
    this->obsolescencia = newDato;
}

Producto::~Producto()
{
    cout<<"Destructor Ejecutado"<<endl;
    
} 


