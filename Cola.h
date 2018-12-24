#include "Nodo.h"
#ifndef COLA_H
#define COLA_H
#include <stdio.h>


class Cola
{
    private:
            pNodo frente, finall;
    public:
            Cola(): finall(NULL),frente(NULL)
            {}
            ~Cola();
            void encolar(string v);
            string desencolar();

};

#endif // COLA_H

