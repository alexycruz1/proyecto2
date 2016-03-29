#include "dinosaurio.h"
#include "triceratops.h"
#include <string>
#include <sstream>
using std::string;
using std::stringstream;

triceratops::triceratops(string nombre, char genero, int peso, int altura, int esperanza_vida, string era, string territorio, int hambre, int edad):dinosaurio(nombre,genero,peso,altura,esperanza_vida,era,territorio, hambre, edad){}

string triceratops::toString()const{
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

void triceratops::comer(int& comidon){
	if(hambre<15){
                comidon-=3;
                hambre+=3;
        }

}
void triceratops::hambrita(){
        hambre-=7;
}

bool triceratops::morir(){
        if(esperanza_vida==edad){
                return true;
        }else{
                return false;
        }

}
void triceratops::cumple(){
        edad+=1;
}
void triceratops::paga(int& dinero ,int& semana){
        if(semana%4==0){
                dinero+= 2000;
        }
}
