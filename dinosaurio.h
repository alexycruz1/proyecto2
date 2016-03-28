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
	int hambre;
public:
	dinosaurio();
	dinosaurio(string nombre,char genero, int peso, int altura, int esperanza_vida, string era, string territorio, int hambre, int edad = 0);
	~dinosaurio();
	virtual string toString()const;	
};
