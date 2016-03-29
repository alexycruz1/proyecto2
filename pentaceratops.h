#pragma once
#include "dinosaurio.h"
#include <string>
using std::string;

class pentaceratops :public dinosaurio{
	
  public:
	pentaceratops(string nombre,char genero, int peso=250, int altura=2, int esperanza_vida=240, string era="cretacio", string territorio="Occidente",int hambre = 20, int edad=0);
	string toString()const;
	void addEdad(double, int);
	pentaceratops procrear(const pentaceratops&);
	void comer(int&);
};