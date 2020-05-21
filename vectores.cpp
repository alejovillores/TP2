#include "vectores.h"
#include<iostream>

Vector::Vector(int _longitud){
    longitud = _longitud;
    pLetras = new char[_longitud];
}

Vector::Vector(string palabra,int _longitud){
        longitud= _longitud;
        pLetras = new char[_longitud];
    	for(int i = 0;i<longitud;i++ ){
            pLetras[i] = palabra[i];
        }
        //cout<<"-AVISO-La direccion del puntero es: "<<pLetras<<endl;;
}

char Vector::getLetra(int posicion){
    return pLetras[posicion];
}

int Vector::getLongitud(){
    return longitud;
}

void Vector::mostrarElementos(){
    if(longitud==0){
		cout<<"No hay elementos"<<endl;
	}
	else{
		for(int i = 0; i<longitud;i++){
        	cout<<" "<<pLetras[i];
    	}
	}
}

bool Vector::letraEnVector(char letra){
	bool siEsta = false;

	for(int i = 0 ; i< longitud ; i++){
		if(letra == pLetras[i]){
			siEsta = true;
		}
	}

	return siEsta;
}
void Vector::agregarLetra(char letra){


	int nueva_l = longitud+1;
    char* pAux = new char[nueva_l];
    pAux[longitud]= letra;

	if(longitud>0){

    	for(int i =0; i < longitud;i++){
        	pAux[i]= pLetras[i];

    	}
	}

    delete[] pLetras;
    pLetras = pAux;
    longitud = nueva_l;
}


Vector::~Vector(){
	if(longitud >0){
		cout<<"\n-AVISO- Se ha eliminado memoria del haep: "<<pLetras;
		delete []pLetras;
	}
}
