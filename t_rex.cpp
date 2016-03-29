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

void t_rex::comer(int&){
	
}
