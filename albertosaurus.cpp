#include "dinosaurio.h"
#include "albertosaurus.h"
#include <string>
#include <sstream>
using std::string;
using std::stringstream;

albertosaurus::albertosaurus(string nombre, char genero, int peso, int altura, int esperanza_vida, string era, string territorio, int hambre, int edad):dinosaurio(nombre,genero,peso,altura,esperanza_vida,era,territorio, hambre, edad){}

string albertosaurus::toString()const{
	stringstream ss;
	ss << dinosaurio::toString() << " Albertosaurus:" ;
	return ss.str();
}
