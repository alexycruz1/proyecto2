#pragma once
#include <string>

using std::string;

class dinosaurio{
protected:
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
	virtual string toString()const=0;	
	virtual void comer(int&)=0;
	virtual void hambrita()=0;
    virtual bool morir()=0;
    virtual void cumple()=0;
    virtual void paga(int&,int&)=0;
   	dinosaurio* procrear(dinosaurio*, string, char);
};
