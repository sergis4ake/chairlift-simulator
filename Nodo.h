#ifndef NODO_H
#define NODO_H

#include <iostream>
using namespace std;

class Nodo
{
    private:
            string valor;
            Nodo *siguiente;
            friend class Cola;
    public:
            Nodo(string v, Nodo *sig = NULL)
            {
                valor = v;
                siguiente = sig;
            }


};
typedef Nodo *pNodo;
#endif // NODO_H
