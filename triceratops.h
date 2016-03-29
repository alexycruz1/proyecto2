#pragma once
#include "dinosaurio.h"
#include <string>
using std::string;

class triceratops :public dinosaurio{
	
  public:
	triceratops(string nombre,char genero, int peso=250, int altura=2, int esperanza_vida=240, string era="cretacio", string territorio="Occidente",int hambre = 15, int edad=0);
	string toString()const;
	void addEdad(double, int);
	triceratops procrear(const triceratops&);
	void comer(int&);
};