#pragma once
#include "dinosaurio.h"
#include <string>
using std::string;

class ankylosaurus :public dinosaurio{
	
  public:
	ankylosaurus(string nombre,char genero, int peso=250, int altura=2, int esperanza_vida=240, string era="cretacio", string territorio="Occidente",int hambre = 0, int edad=0);
	string toString()const;
	void addEdad(double, int);
	ankylosaurus procrear(const ankylosaurus&);
	void comer(int&);
};