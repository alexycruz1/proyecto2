#include "dinosaurio.h"
#include "ankylosaurus.h"
#include <string>
#include <sstream>
using std::string;
using std::stringstream;

ankylosaurus::ankylosaurus(string nombre, char genero, int peso, int altura, int esperanza_vida, string era, string territorio, int hambre, int edad):dinosaurio(nombre,genero,peso,altura,esperanza_vida,era,territorio, hambre, edad){}

string ankylosaurus::toString()const{
	stringstream ss;
	ss << dinosaurio::toString() << " Ankylosaurus:" ;
	return ss.str();
}

void ankylosaurus::comer(int&){
	
}