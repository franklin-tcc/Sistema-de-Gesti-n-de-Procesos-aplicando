#include <iostream>
#include <string>
 using namespace std;

struct NodoProceso { 
    int id; 
    string nombre;
    int prioridad;
    int memoria;
    string estado;
    NodoProceso* siguente;
};
