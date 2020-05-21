#ifndef VECTOR_H
#define VECTOR_H

#include<string>

using namespace std;

class Vector
{
    private: //Atributos

        char* pLetras;
        int longitud;

    public: //Metodos

        // Constructores

        //PRE
        //POST:
        Vector(int longitud);

        //PRE:Recibe una palabra y una longitud
        //POST:Crea un objeto de tipo Vector de manera dinamica
        Vector(string palabra,int longitud);

        //Operaciones

        //PRE:-
        //POST: Muestra los elementos del vector
        void mostrarElementos();

        //PRE : Recibe la posicion
        //POST: Retorna la letra en esa posicion del vector
        char getLetra(int posicion);

        //PRE : -
        //POST: Devuelve la longitud del vector
        int getLongitud();

        //PRE:Recibe una letra
        //POST:Comprueba que este en el vector
		bool letraEnVector(char letra);

        //PRE : Recibe una letra que no este en el vector
        //POST: Agranda el vector y agrega la letra
        void agregarLetra(char letra);


        //Destructor

        //PRE:
        //POST:Elimina el objeto y la memoria almacenada en el puntrero
        ~Vector();
};

#endif // VECTOR_H
