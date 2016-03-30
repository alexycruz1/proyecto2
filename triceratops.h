#pragma once
#include "dinosaurio.h"
#include <string>
using std::string;

class triceratops :public dinosaurio{
	
  public:
	triceratops(string nombre,char genero, int peso=300, int altura=1, int esperanza_vida=310, string era="cretacio", string territorio="Septentrion",int hambre = 15, int edad=0);
	string toString()const;
	void addEdad(double, int);
	triceratops procrear(const triceratops&);
	void comer(int&);
        void hambrita();
        bool morir();
        void cumple();
        void paga(int&,int&);

};
