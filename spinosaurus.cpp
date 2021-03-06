#include "dinosaurio.h"
#include "spinosaurus.h"
#include <string>
#include <sstream>
using std::string;
using std::stringstream;

spinosaurus::spinosaurus(string nombre, char genero, int peso, int altura, int esperanza_vida, string era, string territorio, int hambre, int edad):dinosaurio(nombre,genero,peso,altura,esperanza_vida,era,territorio, hambre, edad){}

string spinosaurus::toString()const{
	stringstream temp;
	temp<<genero;
	temp<<"         ";
	temp<<peso;
        temp<<"     ";
	temp<<altura;
        temp<<"         ";
	temp<<esperanza_vida;
        temp<<"                     ";
	temp<<era;
        temp<<"    ";
	temp<<territorio;
        temp<<"     ";
	temp<<hambre;
        temp<<"         ";
	temp<<edad;
        temp<<"       ";
	temp<<nombre;
	temp;
	return temp.str();
}

void spinosaurus::comer(int& comidon){
	if(hambre<25){
                comidon-=6;
                hambre+=6;
        }

}
void spinosaurus::hambrita(){
        hambre-=9;
}

bool spinosaurus::morir(){
        if(esperanza_vida==edad || hambre<=0){
                return true;
        }else{
                return false;
        }

}
void spinosaurus::cumple(){
        edad+=1;
}
void spinosaurus::paga(int& dinero ,int& semana){
        if(semana%4==0){
                dinero+= 4000;
        }
}
