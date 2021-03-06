#pragma once
#include "dinosaurio.h"
#include <string>
#include <vector>

using std::vector;
using std::string;

class t_rex :public dinosaurio{
	
  public:
	t_rex(string nombre,char genero, int peso=250, int altura=2, int esperanza_vida=240, string era="cretacio", string territorio="Occidente",int hambre = 25, int edad=0);
	string toString()const;
	void addEdad(double, int);
	void comer(int&);
	void hambrita();
	bool morir();
	void cumple();
	void paga(int&, int&);
};
