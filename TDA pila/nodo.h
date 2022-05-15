#ifndef NODO_H_INCLUDED
#define NODO_H_INCLUDED

typedef char Dato;

class Nodo{

private:
    Dato dato;
    Nodo* anterior;

public:
/*
Constructor
Construye un nodo con d como dato anterior en nullptr
*/
    Nodo(Dato d);

    void cambiar_anterior(Nodo* n);
    Dato obtener_dato();
    Nodo* obtener_anterior();
};

#endif