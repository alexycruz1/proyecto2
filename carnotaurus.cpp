#include "dinosaurio.h"
#include "carnotaurus.h"
#include <string>
#include <sstream>
using std::string;
using std::stringstream;

carnotaurus::carnotaurus(string nombre, char genero, int peso, int altura, int esperanza_vida, string era, string territorio, int hambre, int edad):dinosaurio(nombre,genero,peso,altura,esperanza_vida,era,territorio, hambre, edad){}

string carnotaurus::toString()const{
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

void carnotaurus::comer(int& comidon){
	if(hambre<20){
                comidon-=4;
                hambre+=4;
        }

}
void carnotaurus::hambrita(){
        hambre-=7;
}

bool carnotaurus::morir(){
        if(esperanza_vida==edad){
                return true;
        }else{
                return false;
        }

}
void carnotaurus::cumple(){
        edad+=1;
}
void carnotaurus::paga(int& dinero ,int& semana){
        if(semana%4==0){
                dinero+= 2000;
        }
}
