#include "dinosaurio.h"
#include "carnotaurus.h"
#include <string>
#include <sstream>
using std::string;
using std::stringstream;

carnotaurus::carnotaurus(string nombre, char genero, int peso, int altura, int esperanza_vida, string era, string territorio, int hambre, int edad):dinosaurio(nombre,genero,peso,altura,esperanza_vida,era,territorio, hambre, edad){}

string carnotaurus::toString()const{
	stringstream ss;
	ss << dinosaurio::toString() << " Carnotaurus:" ;
	return ss.str();
}
