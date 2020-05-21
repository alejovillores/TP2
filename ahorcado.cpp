#include "ahorcado.h"
#include<iostream>

//Constructores
Ahorcado::Ahorcado(string _palabra,int _longitud,int _intentos):palabra(_palabra,_longitud){
	if(_intentos>=3){
        intentos = _intentos;
        estado = false;
	}
	else{
        intentos = 3;
        estado = false;
	}


}


//Operaciones

int Ahorcado::getIntentos(){
	return intentos;
}

bool Ahorcado::getEstado(){
	return estado;
}

void Ahorcado::cambiarEstado(){
	estado = true;
}
void Ahorcado::arriesgar(string _palabra){


	if(_palabra.size() == palabra.getLongitud()){

		bool esIgual = true ;

		for(int i = 0;i<palabra.getLongitud();i++){

			if(palabra.getLetra(i)!=_palabra[i]){
				esIgual = false;
			}
		}

		if(!esIgual ){
			quitarIntentos(2);
		}
		else{
			cambiarEstado();
		}
	}
	else{
		quitarIntentos(2);
	}
}

void Ahorcado::arriesgar(char letra, Vector &letras){
	bool siEsta = palabra.letraEnVector(letra);
	bool estaLetras = letras.letraEnVector(letra);

	if(siEsta){
		if(estaLetras!=true){
			letras.agregarLetra(letra);
		}
		completarPalabra(letras);
	}
	else{
		if(!estaLetras){
			letras.agregarLetra(letra);
			quitarIntentos(1);
		}
	}
}
void Ahorcado::mostrarPalabra(){
	palabra.mostrarElementos();
}
void Ahorcado::mostrarCoincidencias(Vector &vec){
    //Recorre el vector y se fija si posee alguna de las letras del otro vector.

    for(int i = 0;i<palabra.getLongitud();i++){
            bool siEsta = false;
            for(int j = 0;j<vec.getLongitud();j++){
                if(palabra.getLetra(i) == vec.getLetra(j)){
                    siEsta = true;
                }
            }
            if(siEsta){
				cout<<" "<<palabra.getLetra(i)<<" ";
			}
            else{
				cout<<" - ";
			}
    }
}


void Ahorcado::completarPalabra(Vector &letras){
	//Contador de coincidenciasa
	int contador = 0;

	for(int i =0;i<palabra.getLongitud();i++){
		for(int j = 0;j<letras.getLongitud();j++){

			if(palabra.getLetra(i)==letras.getLetra(j)){
				contador++;

			}
		}
	}
	if(contador == palabra.getLongitud()){
		cambiarEstado();
	}
}
void Ahorcado::quitarIntentos(int n){
	intentos = intentos -n ;
}

Ahorcado::~Ahorcado(){

}
