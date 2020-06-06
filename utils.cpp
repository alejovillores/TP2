#include "utils.h"
#include<iostream>
#include<random>
#include<time.h>

//Constructor

Utils::Utils(){
	//Predefino el atributo para evitar error
	jugador ="jugador1";
}

//Operaciones
int Utils::validarNumero(){
	int n = 0;
	cout<<"Ingrese numero de intentos mayor a 3: ";cin>>n;

	if(n>=3){
		return n;
	}
	else{
		return n;
	}
}

int Utils::generarNumeroRandom(){
    srand(time(NULL));
    int num;
    num=rand()%(10);
    return num;
}

string Utils::validarPalaba(){
	string p;
	ingresePalabra();cin>>p;

	while(p.length()<3){
		cout<<"REINTENTE: ";cin>>p;
	}
	p =aMayusculas(p);

	return p;
}

string Utils::aMayusculas(string p){

	for(int i = 0; i < p.length() ; i++){
		p[i]= toupper(p[i]);
	}

	return p;
}

void Utils::mostrarBienvenida(){
	cout<<"================================="<<endl;
	cout<<"                                 "<<endl;
	cout<<"BIENVENIDOS AL AHORCADO DINAMICO "<<endl;
	cout<<"                                 "<<endl;
    cout<<"    |-----------|                "<<endl;
	cout<<"    |           |                "<<endl;
	cout<<"    |        ( 0 0 )             "<<endl;
	cout<<"    |                            "<<endl;
	cout<<"    |         --|--              "<<endl;
	cout<<"    |           |                "<<endl;
	cout<<"    |          / \\               "<<endl;
	cout<<"  ============================== "<<endl;
	cout<<"                                 "<<endl;
	cout<<"================================="<<endl;
	cout<<"                                 "<<endl;
}

void Utils::ingresePalabra(){
	cout<<"INGRESE UNA PALABRA: ";
}

void Utils::mostrarPantalla(Vector &letras,Ahorcado &palabra){
	if(palabra.getIntentos()==1){
		cout<<"\nULTIMA VIDA! : "<<palabra.getIntentos()<<endl;
	}
	else{
		cout<<"\nVidas restantes: "<<palabra.getIntentos()<<endl;
	}
	cout<<"================================="<<endl;
	cout<<"USADAS:";letras.mostrarElementos();cout<<""<<endl;
	cout<<"================================="<<endl;
	cout<<" "<<endl;
	cout<<"        ";
	palabra.mostrarCoincidencias(letras);
	cout<<"    "<<endl;
	cout<<"================================="<<endl;
	cout<<"                                 "<<endl;

}

void Utils::mostrarGanador(Ahorcado &palabra){
	cout<<"================================="<<endl;
	cout<<"                                 "<<endl;
	cout<<"!!!!!!!!!!HAS GANADO !!!!!!!!!!! "<<endl;
	cout<<"                                 "<<endl;
	cout<<"La palabra era : ";palabra.mostrarPalabra();cout<<" "<<endl;
	cout<<"                                 "<<endl;

}


void Utils::mostrarPerdedor(Ahorcado &palabra){
    cout<<"================================="<<endl;
	cout<<"                                 "<<endl;
	cout<<"           GAME OVER             "<<endl;
	cout<<"    |-----------|                "<<endl;
	cout<<"    |           |                "<<endl;
	cout<<"    |        ( x x )             "<<endl;
	cout<<"    |         --|--              "<<endl;
	cout<<"    |           |                "<<endl;
	cout<<"    |          / \\              "<<endl;
	cout<<"  ============================== "<<endl;
	cout<<"                                 "<<endl;
	cout<<"La palabra era : ";palabra.mostrarPalabra();cout<<" "<<endl;
	cout<<"Vuelve a iniciar el programa para jugar otra vez :)"<<endl;
}
