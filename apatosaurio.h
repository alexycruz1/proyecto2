#pragma once
#include "dinosaurio.h"
#include <string>
using std::string;

class apatosaurio :public dinosaurio{
	
  public:
	apatosaurio(string nombre,char genero, int peso=250, int altura=2, int esperanza_vida=240, string era="cretacio", string territorio="Occidente",int hambre = 0, int edad=0);
	string toString()const;
	void addEdad(double, int);
	apatosaurio procrear(const apatosaurio&);
	void comer(int&);
};