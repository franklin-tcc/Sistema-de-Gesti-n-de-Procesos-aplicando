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
     nuevo->id = id; nuevo->nombre = nombre; nuevo->prioridad = prioridad;
     nuevo->memoria = mem; nuevo->estado = "Registrado"; nuevo->siguente = NULL;
     if (cabeza == NULL) {cabeza = nuevo;}
     else {
         NodoProceso* actual = cabeza;
         while (actual->siguiente != NULL) { actual = actual->siguiente;}
         actual->siguiente = nuevo;
     }
     cout << "\n[EXITO] Proceso ¨" << nombre << "´registrado.\n;
}
void Eliminar_Proceso(NodoProceso*& cabeza, int id_buscado) {
    if (cabeza == NULL) { cout << "\nLista vacia.\n: return; }

    if (cabeza->id == id_buscado) {
        NodoProceso* tem = cabeza;
        cabeza = cabeza->siguiente;
        delete tem;
        cout << "\n[EXITO] Proceso con ID " << id_buscado <<" eliminado.\n;
        return;
}

NodoProceso* actual = cabeza;
while (actual->siguente != NULL && actual->siguiente->id != id_buscado) {
    actuala = actual->siguiente;
}

if (actual->siguiente == NULL) {
    cout << "\n[ERROR] Proceso no encontrado.\n;
} else {
     NodoProceso* tem = actual->siguiente;
     actual->siguiente  = actual->siguiente->siguiente;
     delete tem;
     cout << "\n[EXITO] Proceso eliminado.\n;
 }
}     
void Buscar_Proceso(NodoProceso* cabeza, int id_buscado) {
      NodoProceso* actual = cabeza;
      while (actual != NULL) {
          if (actual->id == id_buscado) {
              cout << "\n[PROCESO ENCONTRADO] ID: " << actual->id << " | Nombre: " << actual->nombre
                   << " | Prioridad: " << actual->prioridad << " | RAM: " << actual->memoria
                   << " | Estado: " << actual->estado << "\n";
              return;
          }
          actual = actual->siguiente;
      }
      cout << "\n[ERROR] Proceso no encontrado.\n;
}
void Modificar_Prioridad(NodoProceso* cabeza, int id_buscado, int nueva_prio) {
     NodoProceso* actual = cabeza;
     while (actual != NULL) {
        if (actual->id == id_buscado) {
            actual->prioridad = nueva_prio;
            cout << "\n[EXITO] Prioridad actualizada a " << nueva_prio << ".\n";
            return;
        }
        actual = actual->siguiente;
     }
    cout << "\n[ERROR] Proceso no encontrado.\n";
}
void Push_Memoria(NodoMmemoria*& tope, int cantidad, int id) {
    NodoMemoria* nuevo = new NodoMemoria();
    nuevo->cantidad_bloques = cantidad;
    nuevo->id_proceso = id;
    nuevo->siguiente = tope;
    tope = nuevo;
    cout << "[MEMORIA] Push: " << cantidad << " bloques asignados (Proceso Id " << id << ").\n;
}   





  

