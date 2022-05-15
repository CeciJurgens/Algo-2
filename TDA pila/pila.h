#ifndef PILA_H_INCLUDED
#define PILA_H_INCLUDED

#include "nodo.h"

class Pila{

private:
    Nodo* ultimo;

public:
    //construye una pila vacia (cantidad = 0)
    Pila();

    //Agrega un elemento arriba de la pila
    void alta(Dato e);

    //Elimina el ultimo elemento agregado
    void baja();
    
    //Devuelve el elemento que esta arriba de la pila
    Dato consulta();

    bool vacia();

    //Destructor
    ~Pila();
};

#endif