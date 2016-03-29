#include "dinosaurio.h"
#include "albertosaurus.h"
#include <string>
#include <sstream>
using std::string;
using std::stringstream;

albertosaurus::albertosaurus(string nombre, char genero, int peso, int altura, int esperanza_vida, string era, string territorio, int hambre, int edad):dinosaurio(nombre,genero,peso,altura,esperanza_vida,era,territorio, hambre, edad){}

string albertosaurus::toString()const{
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

void albertosaurus::comer(int& comidon){
	if(hambre < 15){
    		comidon -= 2;
        	hambre += 2;
    	}

}
void albertosaurus::hambrita(){
        hambre-=5;
}

bool albertosaurus::morir(){
        if(esperanza_vida==edad){
                return true;
        }else{
                return false;
        }

}
void albertosaurus::cumple(){
        edad+=1;
}
void albertosaurus::paga(int& dinero ,int& semana){
        if(semana%4==0){
                dinero+= 1000;
        }
}

