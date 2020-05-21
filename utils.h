#ifndef UTILS_H
#define UTILS_H
#include"ahorcado.h"

//Clase creada para corregir errores y mostrar datos en consola

class Utils
{
	private://Atributos
		string jugador;
	public://Metodos

        //Constructor

	    //PRE:-
	    //POST: Instancia un objeto de tipo utils
		Utils();

        //Operaciones

        //PRE: -
        //POST:Devuelve un numero >=3 o sino un 0
		int validarNumero();

		//PRE: -
		//POST: Valida que su longitud > 3
		string validarPalaba();

		//PRE: Recibe un string
		//POST:Devuelve el mismo string pero todo mayuscula
		string aMayusculas(string p);

		//PRE :Recibe dos objetos para usar sus atributos
		//POST: Muestra el tablero de juego.
		void mostrarPantalla(Vector &letras,Ahorcado &palabra);

		//PRE:-
		//POST :Muestra por consola ingrese una palabra
		void ingresePalabra();

		//PRE:-
		//POST : Muestra bienvenida al juego.
		void mostrarBienvenida();

		//PRE:-
		//POST : Muestra fallo y cantidad de vidas restantes.
		void mostrarFallido(Ahorcado &palabra);

		//PRE:-
		//POST : Muestra has ganado.
		void mostrarGanador(Ahorcado &palabra);

		//PRE:-
		//POST : Muestra perdedor y despedida al jugador.
		void mostrarPerdedor();

		//PRE:-
		//POST : Muestra las letras debloqueadas del juego.
		void mostrarProgreso(Ahorcado &palabra);

		//PRE:-
		//POST : Muestra las letras ya usadas al jugador.
		void mostrarLetrasUsadas(Vector &letras);

        //PRE:-
        //POST:Devuelve un numero del 0-9
        int generarNumeroRandom();

};

#endif/*UTILS_H*/
