/******************************************************************************
EDD-UTEM - Profesor Diego Hernández García en conjunto con sus estudiantes
Tema: S1 repaso cin, cout, ciclos, arreglos, funciones, struct, archivos
*******************************************************************************/
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

#define MAX_X 30
#define MAX_Y 5

using namespace std;

// Desafio:
// Agregar 5 personas a la lista

// Estructuras
struct Persona {
  string rut;
  string nombre;
  float altura;
  int edad;
};


/*****PROTOTIPOS*****/
int numeroLineas(string nombreArchivo);
void crearArchivoConDatosDePrueba (string nombreArchivo);
void leerArchivo(string nombreArchivo);
void procesarMatrizDesdeArchivo(string miDatos[MAX_X][MAX_Y], string nombreArchivo, int hastaX, int hastaY); 
void procesarMatrizPersonas(string miDatos[MAX_X][MAX_Y], Persona personas[MAX_X], int hastaX);
void mostrarPersona(Persona persona);

//Desafios
Persona personaMasAlta(Persona personas[MAX_X], int hastaX);
Persona personaMasBaja(Persona personas[MAX_X], int hastaX);
Persona personaMasVieja(Persona personas[MAX_X], int hastaX);
Persona personaMasJoven(Persona personas[MAX_X], int hastaX);
float promedioEdad(Persona personas[MAX_X], int hastaX);
float promedioAltura(Persona personas[MAX_X], int hastaX);
void agregar5personas(string nombreArchivo);


int main()
{
    cout << "----- Bienvenido al programa del Profe Diego y sus estudiantes --------" << endl<< endl;
    setlocale(LC_CTYPE,"Spanish");  // Indica la localidad de idioma que utilizaremos
    string nombreArchivo = "personas.txt";
    string miDatos[MAX_X][MAX_Y];
    Persona personas[MAX_X];

    crearArchivoConDatosDePrueba(nombreArchivo);
    leerArchivo(nombreArchivo);
    int numLineas = numeroLineas(nombreArchivo);
    procesarMatrizDesdeArchivo(miDatos, nombreArchivo, numLineas, MAX_Y);
    procesarMatrizPersonas(miDatos, personas, numLineas);
    
    cout << endl << "RESULTADOS:" << endl;
    
    // Ocupar mostrar Persona forma variables
    Persona persona = personaMasAlta(personas, numLineas);
    cout << "Persona más alta:" << endl;
    mostrarPersona(persona);
    // Tambien se puede ocupar evitando incializar variables
    cout << "Persona más baja:" << endl;
    mostrarPersona(personaMasBaja(personas, numLineas));
    cout << "Persona más joven:" << endl;
    mostrarPersona(personaMasJoven(personas, numLineas));
    cout << "Persona más vieja:" << endl;
    mostrarPersona(personaMasVieja(personas, numLineas));
    
    // Puedo ocupar tambien una funcion dentro de un cout
    cout << "Promedio de edad es:" << promedioEdad(personas, numLineas) << endl;
    cout << "Promedio de altura es:" << promedioAltura(personas, numLineas) << endl;
    
    //Revisar al final el archivo, se puede comentar la función si no quiere agregar
    agregar5personas(nombreArchivo);
    
    
    return 0;
}

/******IMPLEMENTACION DE LAS FUNCIONES*****/

// numeroLineas cuenta la cantidad de lineas que tiene un archivo.
int numeroLineas(string nombreArchivo){
    cout << " --*Funcion para contar lineas*-- " << endl;
    ifstream archivo; // Se inicializa un archivo de tipo ifstream (para LEER)
    int i=0;
    archivo.open(nombreArchivo, ios::in);
    
    if(archivo.is_open()){
        //leeremos el archivo y lo separaremos por salto de línea
        string linea;
        while (getline(archivo, linea, '\n')){
            i++; // cuenta la cantidad de lineas hasta que termine de leer las lineas
        }
    }
    cout <<"Numero de lineass es: " << i <<endl<<endl;
    archivo.close(); // Siempre se debe cerrar el archivo
    return i;
}


/******IMPLEMENTACION DE LOS PROCEDIMIENTOS*****/

// crearArchivoConDatosDePrueba crea un archivo con datos de prueba para ser utilizado.
// https://www2.eii.uva.es/fund_inf/cpp/temas/10_ficheros/ficheros_cpp.html#modos-de-apertura
void crearArchivoConDatosDePrueba (string nombreArchivo) {
    cout << " --* Procedimiento para crear archvios *--" << endl;
    ofstream archivo; // Tipo de variable para escribir en un archivo
    archivo.open (nombreArchivo, ios::out); // Se inicializa un archivo de tipo ofstream (para ESCRIBIR)
    
    // string lineaUltima;
    //cout << " Ingrese la última linea:" << endl;
    //getline(cin, lineaUltima);

    if (archivo.is_open ()) {
        archivo << "1;20.48.96-K;NUNEZ GUAJARDO, MIGUEL ANGEL;155.5;14"<<endl;
        archivo << "2;19.63.92-3;ABARCA SAN MARTIN, SERGIO IGNACIO;144.6;68"<<endl;
        archivo << "3;20.19.58-1;DIAZ DÍAZ, RODRIGO ALEJANDRO;175;55"<<endl;
        archivo << "5;20.63.19-7;BEAS URRUTIA, MARCELO ALFONSO;145.2;22"<<endl;
        archivo << "7;20.69.42-3;CASTILLO DONOSO, NICOLAS ALBERTO;123.4;26"<<endl;
        archivo << "8;20.10.48-0;CISTERNA AHUMADA, JONATHAN ANDRES;240.4;28"<<endl;
        archivo << "10;20.78.80-2;CORTES VERA, MATIAS ANDRES;170.4;30"<<endl;
        archivo << "11;20.65.92-1;DIAZ MANRIQUEZ, NICOLAS;180.7;34"<<endl;
        archivo << "12;20.19.65-9;ONATE PIEDRAS, ROBERTO IGNACIO;160.3;35"<<endl;
        archivo << "13;20.58.13-8;ESPINOZA PACHECO, CAROLINA ANTONIA;140.6;38"<<endl;
        archivo << "14;20.28.42-8;FUENTES CORTES, BENJAMIN ISRAEL;155.4;405"<<endl;
        archivo << "16;20.45.66-7;GARCIA FUENTES, RICARDO JOSE;166.3;50"<<endl;
        //archivo <<  lineaUltima <<endl;
        archivo.close (); // Siempre se debe cerrar el archivo
        
        cout << "archivo creado con éxito" << endl<<endl;
    }  else {
      cout << "error";
    }
}

// leerArchivo lee un archivo con datos de prueba para ser utilizado.
void leerArchivo(string nombreArchivo){
    cout << " --* Procedimiento para leer archvios *--" << endl;
    ifstream archivo; 
    
    archivo.open(nombreArchivo.c_str(),ios::in);
    
    if(archivo.is_open()){
        //leeremos el archivo y lo separaremos por salto de línea
        string linea;
        int i=1;
        while (getline(archivo, linea, '\n')){
            cout <<i++ <<" >" << linea <<endl;
        }
        cout<<endl;
    }
    archivo.close(); // Siempre se debe cerrar el archivo
}

// procesarMatrizDesdeArchivo trae todos los datos que esta en archivo y los deja en una matriz.
void procesarMatrizDesdeArchivo(string miDatos[MAX_X][MAX_Y], string nombreArchivo, int hastaX, int hastaY){
    cout << " --* Procedimiento para procesar Matriz desde archvios *--" << endl;
    int fila =0;
    int columna=0;

    //limpieza
    for(int x=0; x < hastaX; x++)
        for(int y=0; y < hastaY; y++)
            miDatos[x][y] = "";

    //procesar
    ifstream archivoLecturaProcesar;  // Tipo de variable para leer en un archivo
    archivoLecturaProcesar.open(nombreArchivo , ios::in);

    if(archivoLecturaProcesar.is_open()){
        string lineaLeida;
        while(getline(archivoLecturaProcesar, lineaLeida, '\n')){
            //tenemos que pasar los datos leidos al vector
            stringstream ss(lineaLeida);
            //separar y dejar en el vector
            string palabra;
            columna = 0; //por cada línea volvemos a cero
            while(getline(ss, palabra, ';')){
                miDatos[fila][columna]= palabra;
                columna++;
            }
            fila++;
        }

        archivoLecturaProcesar.close();
        cout <<"apertura y Matriz con éxito"<<endl<<endl;
    } else {
        cout <<"error de apertura"<<endl<<endl;
    }
}

// procesarMatrizPersonas transforma todos los datos que esta en una matriz en un arrglo de Personas.
void procesarMatrizPersonas(string miDatos[MAX_X][MAX_Y], Persona personas[MAX_X], int hastaX){
    cout << " --* Procedimiento para procesar Matriz a personas *--" << endl;
    int fila =0;
    int columna=0;

    //llenado de perosonas
    for(int x=0; x < hastaX; x++){
        personas[x].rut = miDatos[x][1]; // posicion 1 rut
        personas[x].nombre = miDatos[x][2]; // posicion 2 nombre
        personas[x].altura = atof(miDatos[x][3].c_str()); // posicion 3 altura
        personas[x].edad = atof(miDatos[x][4].c_str()); // posicion 4 edad
    }
        
    //mostrar personas
    for(int x=0; x < hastaX; x++)
        cout << "Rut: " << personas[x].rut << " - Nombre: " << personas[x].nombre  << " - Altura: " << personas[x].altura  << " - Edad: " << personas[x].edad  << endl;
}

// Desafios:
// personaMasAlta devuelve una variable de tipo Persona con todos los datos de la pesona mas alta.
Persona personaMasAlta(Persona personas[MAX_X], int hastaX){
    Persona persona_max; // se inicializa una variable Persona auxiliar para guardar la persona mas alta
    float altura_max = -1; // se inicializa en un valor bajo, este valor va cambiando si encuentra una altura mas alta
    for(int x=0; x < hastaX; x++){
        if( personas[x].altura > altura_max){
            persona_max = personas[x];
            altura_max = personas[x].altura;
        }
    }
    return persona_max;
}

// personaMasBaja devuelve una variable de tipo Persona con todos los datos de la pesona mas baja.
Persona personaMasBaja(Persona personas[MAX_X], int hastaX){
    Persona persona_min; // se inicializa una variable Persona auxiliar para guardar la persona mas baja
    float altura_min = 9999; // se inicializa en un valor alto, este valor va cambiando si encuentra una altura mas baja
    for(int x=0; x < hastaX; x++){
        if( personas[x].altura < altura_min){
            persona_min = personas[x];
            altura_min = personas[x].altura;
        }
    }
    return persona_min;
}


// personaMasVieja devuelve una variable de tipo Persona con todos los datos de la pesona mas vieja.
Persona personaMasVieja(Persona personas[MAX_X], int hastaX){
    Persona persona_max; // se inicializa una variable Persona auxiliar para guardar la persona mas vieja
    int edad_max = -1; // se inicializa en un valor bajo, este valor va cambiando si encuentra una altura mas vieja
    for(int x=0; x < hastaX; x++){
        if( personas[x].altura > edad_max){
            persona_max = personas[x];
            edad_max = personas[x].edad;
        }
    }
    return persona_max;
}

// personaMasJoven devuelve una variable de tipo Persona con todos los datos de la pesona mas joven.
Persona personaMasJoven(Persona personas[MAX_X], int hastaX){
    Persona persona_min; // se inicializa una variable Persona auxiliar para guardar la persona mas joven
    int edad_min = 9999; // se inicializa en un valor alto, este valor va cambiando si encuentra una altura mas joven
    for(int x=0; x < hastaX; x++){
        if( personas[x].altura < edad_min){
            persona_min = personas[x];
            edad_min = personas[x].altura;
        }
    }
    return persona_min;
}

// promedioEdad devuelve el promedio de edades de todas las personas.
float promedioEdad(Persona personas[MAX_X], int hastaX){
    int suma_edad = 0; // se inicializa la suma de la edades en 0
    for(int x=0; x < hastaX; x++){
        suma_edad = suma_edad +  personas[x].edad;
    }
    float promedio_edad = suma_edad/hastaX; // hastaX se entiende que es la cantidad de personas
    return promedio_edad;
}

// promedioAltura devuelve el promedio de altura de todas las personas.
float promedioAltura(Persona personas[MAX_X], int hastaX){
    int suma_altura = 0; // se inicializa la suma de la edades en 0
    for(int x=0; x < hastaX; x++){
        suma_altura = suma_altura +  personas[x].altura;
    }
    float promedio_altura = suma_altura/hastaX; // hastaX se entiende que es la cantidad de personas
    return promedio_altura;
}
// mostrarPersona muestra los datos de la persona
void mostrarPersona(Persona persona){
    cout << "Rut: " << persona.rut << " - Nombre: " << persona.nombre  << " - Altura: " << persona.altura  << " - Edad: " << persona.edad  << endl;
}

// crearArchivoConDatosDePrueba crea un archivo con datos de prueba para ser utilizado.
// https://www2.eii.uva.es/fund_inf/cpp/temas/10_ficheros/ficheros_cpp.html#modos-de-apertura
void agregar5personas(string nombreArchivo) {
    cout << " --* Procedimiento para crear archvios *--" << endl;
    ofstream archivo; // Tipo de variable para escribir en un archivo
    archivo.open (nombreArchivo, ios::app); // Se inicializa un archivo de tipo ofstream (para ESCRIBIR)
    
    // string lineaUltima;
    //cout << " Ingrese la última linea:" << endl;
    //getline(cin, lineaUltima);

    if (archivo.is_open ()) {
        archivo << "21;33.23.96-K;YAVAR JOHA, OLIVER SERGIO;155.5;14"<<endl;
        archivo << "22;44.74.32-3;DÍAZ DONOSO, NICOLAS ALBERTO;144.6;68"<<endl;
        archivo << "23;20.19.22-1;BAEZ JEREZ, IGNACIO ALEJANDRO;175;55"<<endl;
        archivo << "24;20.23.19-7;MOYA GARRIDO, ALONSO ALEJANDRO;145.2;22"<<endl;
        archivo << "25;20.33.56-3;VEAS LOPEZ, GERARDO LEONARDO;123.4;26"<<endl;
        //archivo <<  lineaUltima <<endl;
        archivo.close (); // Siempre se debe cerrar el archivo
        
        cout << "archivo creado con éxito" << endl<<endl;
    }  else {
      cout << "error";
    }
}
