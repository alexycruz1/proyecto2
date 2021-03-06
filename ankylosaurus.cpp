#include "dinosaurio.h"
#include "ankylosaurus.h"
#include <string>
#include <sstream>
using std::string;
using std::stringstream;

ankylosaurus::ankylosaurus(string nombre, char genero, int peso, int altura, int esperanza_vida, string era, string territorio, int hambre, int edad):dinosaurio(nombre,genero,peso,altura,esperanza_vida,era,territorio, hambre, edad){}

string ankylosaurus::toString()const{
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

void ankylosaurus::comer(int& comidon){
	if(hambre<20){
                comidon-=4;
                hambre+=4;
        }
	
}
void ankylosaurus::hambrita(){
        hambre-=6;
}

bool ankylosaurus::morir(){
        if(esperanza_vida==edad || hambre<=0){
                return true;
        }else{
                return false;
        }

}
void ankylosaurus::cumple(){
        edad+=1;
}
void ankylosaurus::paga(int& dinero ,int& semana){
        if(semana%4==0){
                dinero+= 2000;
        }
}

