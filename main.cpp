#include <iostream>
#include <ctime>
#include <stdlib.h>
#include <string>
#include "Cola.h"
using namespace std;

int main()
{
    int n_colas = 5;
    int n_pers = 10;
	int i, j = 0;

    Cola obj_cola[n_colas];
    Cola obj_gondola[n_pers];
    string aux;
    string gondola;

    //Variables para crear un caracter aleatorio.
    int n=0;
    char tipo_pers[2]={'A','N'};
    string pers_obtenida;

    //Funcion para crear numeros aleatorios.
    srand(time(NULL));

    //Encolar 10 variables de caracter A ó N aleatorias en 5 colas distintas.
	for (i=0;i<n_colas;i++)
    {
        cout << "Personas de la cola numero " << i+1 << endl;
          for (j=0;j<n_pers;j++)
        {
            n = rand()%2;
            pers_obtenida = tipo_pers[n];

            obj_cola[i].encolar(pers_obtenida);
            cout << "Llenando la cola: " << pers_obtenida << endl;
        }
        cout << endl;
    }
    cout << endl;


    //Desencolar la primera variable de cada cola y añadirla a un array de chars llamado GONDOLA.
    //Cada elemento del array encolarlo a la cola GONDOLA (añadirlo al telesilla).
	for (i=0;i<n_pers;i++)
    {
        gondola = "";
        cout << "Desencolando la " << i+1 <<" persona" << endl;
        for (j=0;j<n_colas;j++)
        {
            aux = obj_cola[j].desencolar();
            gondola = gondola + aux;
            cout << " de la cola numero " << j+1 << ": " << aux << endl;
        }
        //Controlar que no se cree un string con 5 variables N.
        if (gondola=="NNNNN"){
            obj_cola[j].encolar(aux);
            aux = obj_cola[j].desencolar();
            while (aux=="N"){
                obj_cola[j].encolar(aux);
                aux = obj_cola[j].desencolar();
            }
            gondola = "NNNNA";
        }
        //Encolo la gondola con la primera posicion de cada cola que ya hemos almacenado en un string GONDOLA.
        cout << "TELESILLA: Llenando la gondola " << i+1 << ": " << gondola << endl;
        obj_gondola[i].encolar(gondola);
        cout << endl;
    }
    //Desencolo las gondolas del telesilla.
    cout << "VACIANDO TELESILLA" << endl;
    for (i=0;i<n_pers;i++)
    {
        aux = obj_gondola[i].desencolar();
        cout << "Vaciando gondola " << i+1 << ": " << aux << endl;
    }
    cout << "Telesilla vacia" << endl;
    return 0;
}
