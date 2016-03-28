#include "dinosaurio.h"
#include "apatosaurio.h"
#include <string>
#include <sstream>
using std::string;
using std::stringstream;

apatosaurio::apatosaurio(string nombre, char genero, int peso, int altura, int esperanza_vida, string era, string territorio, int hambre, int edad):dinosaurio(nombre,genero,peso,altura,esperanza_vida,era,territorio, hambre, edad){}

string apatosaurio::toString()const{
	stringstream ss;
	ss << dinosaurio::toString() << " Apatosaurio:" ;
	return ss.str();
}