#include "pila.h"

Pila::Pila(){
    ultimo = 0;
}

void Pila::alta(Dato e){
    Nodo* nuevo = new Nodo(e);
    nuevo->cambiar_anterior(ultimo);
    ultimo = nuevo;
}

void Pila::baja(){
    Nodo* borrar = ultimo;
    ultimo = ultimo->obtener_anterior();
    delete borrar;
}

Dato Pila::consulta(){
    return ultimo->obtener_dato();
}

bool Pila::vacia(){
    return (ultimo == 0);
}

Pila::~Pila(){
    while (!vacia()){
        baja();
    }
}