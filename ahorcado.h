#ifndef AHORCADO_H
#define AHORCADO_H

#include"vectores.h"

class Ahorcado
{
    private: //Atributos

        Vector palabra;
        int intentos;
        bool estado ;

    public://Metodos
        //Constructor

        //PRE:Recibe una palabra , la longitud de la palabra y una cantidad de intentos >= 3
        //POST:Crea un objeto de tipo Ahorcado
        Ahorcado(string _palabra, int _longitud , int _intentos );

        //Operaciones

		//PRE:Recibe un entero que puede ser o 1 o 2 , dependiendo que arriesgue el jugador
		//POST:Resta n intentos al objeto
		void quitarIntentos(int n);

        //PRE: -
        //POST: Retorna el numero de intentos
        int getIntentos();

		//PRE:-
		//POST: Cambia el estado a true
		void cambiarEstado();

        //PRE: -
        //POST: Retorna el estado de la palabra
        bool getEstado();

        //PRE: Requiere una letra y el vector de letras
        //POST: Cambia el estado si este gana o reduce intentos , añade a su vez la nueva letra si esta no se encuentra
        void arriesgar(char letra , Vector &letras);

        //PRE: Requiere un string
        //POST: Cambia el estado
        void arriesgar(string _palabra);

	    //PRE: Recibe un objeto de tipo Vector
        //POST: Muestra las letras en comun
        void mostrarCoincidencias(Vector &vec);

        //PRE:-
		//POST: Muestra la palabra completa
		void mostrarPalabra();

		//PRE: Recibe un vector con las letras ya usadas
        //POST:Si letras del vector estan , cambia el estado a true
		void completarPalabra(Vector &letras);

		//Destructor
		~Ahorcado();
};

#endif // AHORCADO_H
