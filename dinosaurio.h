#pragma once
#include <string>

using std::string;

class dinosaurio{
	string nombre;
	int peso;
	int altura;
	int esperanza_vida;
	string era;
	string territorio;
	int edad;
public:
	dinosaurio(string nombre, int peso, int altura, int esperanza_vida, string era, string territorio, int edad = 0);
	virtual ~dinosaurio();
	virtual string toString()const;	
};