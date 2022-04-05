/******************************************************************************
Autor: Profesor Diego Hernández Garía en colaboración con sus estudiantes
Fecha de creación: 30/03/2022
Fecha de modificación: 30/03/2022
Descripción: Clase Producto como ejemplo en clases.
*******************************************************************************/

#ifndef PRODUCTO_H
#define PRODUCTO_H
#include <iostream>
#include <string>

using namespace std;

// Clase de Producto
class Producto{
    // atributos
    public:
        Producto(); // Constructor
        ~Producto(); // Destructor
        string nombre;
        int precio;
        float peso;
        string fecha_vencimiento;
        string fecha_elaboracion;
        long sku;
        int stock;
        string diseno;
        string uso;
        float descuento;
        string marca;
        
        // METODOS
        // getter y setter
        int getEstimadoVenta();
        void setEstimadoVenta(int);
        
        int getCostoMarketing();
        void setCostoMarketing(int);
        
        int getObsolescencia();
        void setObsolescencia(bool);
        
        
        
    private:
        int estimado_venta;
        int costo_marketing;
        bool obsolescencia;
    
};

#endif // PRODUCTO_H