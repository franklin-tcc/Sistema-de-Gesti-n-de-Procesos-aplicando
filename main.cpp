




































































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






























































