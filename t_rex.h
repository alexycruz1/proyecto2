#pragma once
#include "dinosaurio.h"
#include <string>
using std::string;

class t_rex :public dinosaurio{
	
  public:
	t_rex(string nombre,char genero, int peso=250, int altura=2, int esperanza_vida=240, string era="cretacio", string territorio="Occidente", int edad=0);
	string toString()const;
	void addEdad(double, int);
	t_rex procrear(const t_rex&);
};
