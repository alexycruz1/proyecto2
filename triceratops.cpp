#include "dinosaurio.h"
#include "triceratops.h"
#include <string>
#include <sstream>
using std::string;
using std::stringstream;

triceratops::triceratops(string nombre, char genero, int peso, int altura, int esperanza_vida, string era, string territorio, int hambre, int edad):dinosaurio(nombre,genero,peso,altura,esperanza_vida,era,territorio, hambre, edad){}

string triceratops::toString()const{
	stringstream ss;
	ss << dinosaurio::toString() << " Triceratops:" ;
	return ss.str();
}

void triceratops::comer(int&){
	
}