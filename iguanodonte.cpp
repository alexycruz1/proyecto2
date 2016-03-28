#include "dinosaurio.h"
#include "iguanodonte.h"
#include <string>
#include <sstream>
using std::string;
using std::stringstream;

iguanodonte::iguanodonte(string nombre, char genero, int peso, int altura, int esperanza_vida, string era, string territorio, int hambre, int edad):dinosaurio(nombre,genero,peso,altura,esperanza_vida,era,territorio, hambre, edad){}

string iguanodonte::toString()const{
	stringstream ss;
	ss << dinosaurio::toString() << " Iguanodonte:" ;
	return ss.str();
}

void iguanodonte::comer(int&){
	
}