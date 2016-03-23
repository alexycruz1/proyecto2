#include "dinosaurio.h"
#include <string>
#include <sstream>
using std::string;
using std::stringstream;

dinosaurio::dinosaurio(){}

dinosaurio::~dinosaurio(){}

string dinosaurio::toString()const{
	stringstream ss;
	ss << "Dinosaurio ";
	return ss.str();
}
