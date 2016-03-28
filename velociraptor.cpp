#include "dinosaurio.h"
#include "velociraptor.h"
#include <string>
#include <sstream>
using std::string;
using std::stringstream;

velociraptor::velociraptor(string nombre, char genero, int peso, int altura, int esperanza_vida, string era, string territorio, int hambre, int edad):dinosaurio(nombre,genero,peso,altura,esperanza_vida,era,territorio, hambre, edad){}

string velociraptor::toString()const{
	stringstream ss;
	ss << dinosaurio::toString() << " Velociraptor:" ;
	return ss.str();
}
