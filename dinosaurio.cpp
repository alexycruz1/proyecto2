#include "dinosaurio.h"
#include <string>
#include <sstream>

using std::string;
using std::stringstream;

dinosaurio::dinosaurio(){
}

dinosaurio::dinosaurio(string nombre, char genero, int peso, int altura, int esperanza_vida, string era, string territorio, int hambre, int edad){
	this -> nombre = nombre;
	this -> genero = genero;
	this -> peso = peso;
	this -> altura = altura;
	this -> esperanza_vida = esperanza_vida;
	this -> era = era;
	this -> territorio = territorio;
	this -> edad = edad;
	this -> hambre = hambre;
}

dinosaurio::~dinosaurio(){}

dinosaurio* dinosaurio::procrear(dinosaurio* r){
	
}

/*string dinosaurio::toString()const{
	stringstream ss;
	ss << nombre<<"    "<<genero;
	return ss.str();
}*/
