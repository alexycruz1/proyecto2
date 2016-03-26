#pragma once
#include <string>

using std::string;

class dinosaurio{
	string nombre;
	char genero;
	int peso;
	int altura;
	int esperanza_vida;
	string era;
	string territorio;
	int edad;
public:
	dinosaurio();
	dinosaurio(string nombre,char genero, int peso, int altura, int esperanza_vida, string era, string territorio, int edad = 0);
	~dinosaurio();
	virtual string toString()const;	
};
