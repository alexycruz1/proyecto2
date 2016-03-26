#include "dinosaurio.h"
#include "t_rex.h"
#include <string>
#include <sstream>
using std::string;
using std::stringstream;

t_rex::t_rex(string nombre, char genero, int peso, int altura, int esperanza_vida, string era, string territorio, int edad):dinosaurio(nombre,genero,peso,altura,esperanza_vida,era,territorio,edad){}
string t_rex::toString()const{
	stringstream ss;
	ss << dinosaurio::toString() << " tyrannosaurus:" ;
	return ss.str();
}
