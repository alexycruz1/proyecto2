#include "dinosaurio.h"
#include "t_rex.h"
#include <string>
#include <sstream>
using std::string;
using std::stringstream;

t_rex::t_rex(string nombre, char genero, int peso, int altura, int esperanza_vida, string era, string territorio, int hambre, int edad):dinosaurio(nombre,genero,peso,altura,esperanza_vida,era,territorio, hambre, edad){}

string t_rex::toString()const{
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

void t_rex::comer(int& comidon){
	if(hambre<20){
		comidon-=3;
		hambre+=3;
	}		
}

void t_rex::hambrita(){
	hambre-=7;
}

bool t_rex::morir(){
	if(esperanza_vida==edad || hambre<=0){
		return true;
	}else{
		return false;
	}
	
}
void t_rex::cumple(){
	edad+=1;
}

void t_rex::paga(int& dinero,int& semana){
	if(semana % 4 == 0){
		dinero += 3000;
	}
}


