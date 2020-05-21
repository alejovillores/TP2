#include <iostream>
#include"utils.h"


int main()
{
    //Se instancia un objeto utils
	Utils utils = Utils();
	utils.mostrarBienvenida();

    //Vector estatico con palabras para adivinar
    string palabras[10] ={" Paralelepípedos","Metilendioximetanfetamina","Herencia ","Javascript","Otorringolaringologia","Psicologo","Grafos","Derterminate","Coordenadas","Imposible"};
    int opcion,n;
    string p;

    cout<<" 1 - Desafio de palabras dificiles!"<<endl;
    cout<<" 0 - Adivinar tu palabra"<<endl;
    cout<<"Ingrese una opcion: ";cin>>opcion;

    //Se pide  al usuario la configuracin del juego
	if(opcion!=0){
        int numero = utils.generarNumeroRandom();
        n = 3;
        p = utils.aMayusculas(palabras[numero]);
	}
	else{
        p = utils.validarPalaba();
        n = utils.validarNumero();
	}
    //Se crea un objeto vector para las letras
	Vector letras = Vector(0);

    //Se crea un objeto Ahorcado para la palabra
    Ahorcado palabra= Ahorcado(p,p.length(),n);

    //Ciclo de juego
	while(palabra.getIntentos()>0 and !palabra.getEstado()){
		string intentar;
		utils.mostrarPantalla(letras,palabra);

		cout<<"\nArriesgue: ";cin>>intentar;
		intentar = utils.aMayusculas(intentar);

		if(intentar.length()>1){
			palabra.arriesgar(intentar);
		}
		else{
			char letra = intentar[0];
			palabra.arriesgar(letra,letras);
		}
	}
	//Termina el ciclo

	if(palabra.getEstado()){
		utils.mostrarGanador(palabra);
	}
	else{
		utils.mostrarFallido(palabra);
	}
	return 0;
}
