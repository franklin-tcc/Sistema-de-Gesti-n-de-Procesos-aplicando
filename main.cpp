#include <iostream>
#include <string>
#include <cstdlib> 
#define MAX 30
using namespace std;
struct Proceso { 
    int id; 
    string nombre; 
    int prioridad; 
    int memoria; 
    string estado; 
struct Memoria { 
    int cantidad_bloques; 
    int id_proceso; 
};
int main() {
    Proceso lista[MAX];     int cont_p = 0;
    Proceso cola_cpu[MAX];  int cont_c = 0;
    Memoria v_mem[MAX];     int cont_m = 0;
    
    int opcion_principal;
    do {
        cout << "\n==============================================";
        cout << "\n    SIMULADOR DE SISTEMA OPERATIVO V2.0";
        cout << "\n==============================================";
        cout << "\n1. Gestor de Procesos (Lista Enlazada)";
        cout << "\n2. Planificador de CPU (Cola de Prioridad)";
        cout << "\n3. Gestor de Memoria (Pila)";
        cout << "\n4. Salir";
        cout << "\n----------------------------------------------";
        do {
            cout << "\nSeleccione una opcion: ";
            cin >> opcion_principal;
            if(opcion_principal < 1 || opcion_principal > 4) {
                cout << "ERROR, opcion invalida intente de nuevo";
            }
        } while (opcion_principal < 1 || opcion_principal > 4);
        switch(Opcion_principal) {
            case 1: {
                int op_principal;
                do{
                    cout << "\n--- 1. GESTOR DE PROCESOS ---";
                    cout << "\n1. Insercion de nuevos procesos";
                    cout << "\n2. Eliminacion de procesos";
                    cout << "\n3. Busqueda de procesos por ID";
                    cout << "\n4. Modificacion de la prioridad";
                    cout << "\n5. Volver al menu principal";
                    do[
                       cout << "\nOpcion: "; cin >> op_proceso;
                       if (op_proceso < 1 || op_proceso > 5) {
                           cout << "ERROR, Opcion invalida. ";
                       }
                    } while (op_proceso < 1 || op_proceso > 5);
                    if(op_proceso == 1) {
                        if(cont_p < MAX) {
                            Proceso *ptrP = &lista[cont_p]; // Puntero directo estilo profa
                            cout << "\nID: "; cin >> ptrP->id; 
                            cout << "Nombre: "; cin >> ptrP->nombre;
                            cout << "Prioridad (1-5): "; cin >> ptrP->prioridad; 
                            cout << "RAM: "; cin >> ptrP->memoria;
                            ptrP->estado = "Registrado"; 
                            cont_p++;
                            cout << "\n[EXITO] Proceso registrado.\n";
                        } else cout << "\n[ERROR] Limite de procesos alcanzado.\n";
                    }
                    else if(op_proceso == 2) { // ELIMINACION
                        int id; cout << "\nID a eliminar: "; cin >> id; bool enc = false;
                        for(int i = 0; i < cont_p; i++) {
                            if(lista[i].id == id) {
                                for(int j = i; j < cont_p - 1; j++) lista[j] = lista[j + 1];
                                cont_p--; enc = true; cout << "\n[EXITO] Proceso eliminado.\n"; break;
                            }
                        }
                        if(!enc) cout << "\n[ERROR] Proceso no encontrado.\n"; 
                    }
                    else if(op_proceso == 3) { // BUSQUEDA
                        int id; cout << "\nID a buscar: "; cin >> id; bool enc = false;
                        for(int i = 0; i < cont_p; i++) {
                            if(lista[i].id == id) {
                                Proceso *ptrP = &lista[i]; 
                                cout << "\n[ENCONTRADO] ID: " << ptrP->id << " | Nombre: " << ptrP->nombre << " | Prio: " << ptrP->prioridad << " | RAM: " << ptrP->memoria << " | Estado: " << ptrP->estado << "\n";
                                enc = true; break;
                            }
                        }
                        if(!enc) cout << "\n[ERROR] Proceso no encontrado.\n"; 
                    }
                    else if(op_proceso == 4) { // MODIFICACION
                        int id, prio; cout << "\nID a modificar: "; cin >> id; bool enc = false;
                        for(int i = 0; i < cont_p; i++) { 
                            if(lista[i].id == id) { 
                                cout << "Nueva prioridad: "; cin >> prio; 
                                lista[i].prioridad = prio; 
                                cout << "\n[EXITO] Prioridad actualizada.\n"; enc = true; break; 
                            } 
                        }
                        if(!enc) cout << "\n[ERROR] Proceso no encontrado.\n"; 
                    }
                } while (op_proceso != 5); break;






























































