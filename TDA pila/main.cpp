#include <iostream>
#include "pila.h"

using namespace std;

int main(){
    Pila p;

    p.alta('P');
    p.alta('A');
    p.alta('T');

    cout << p.consulta() << endl;

    p.baja();
    p.alta('N');

    while(!p.vacia()){
        cout << p.consulta() << endl;
        p.baja();
    }

    return 0;
}