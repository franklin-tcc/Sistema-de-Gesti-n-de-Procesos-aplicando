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
struct NodoMemoria {
 int cantidad_bloques;
 int id_procesos;
 NodoMemoria* siguiente;
};
void Insertar_Proceso(Nodoproceso*& cabeza, int id; string nombre, int prioridad, int mem){
 NodoProceso* nuevo = new NodoProceso();
 nuevo-

  

