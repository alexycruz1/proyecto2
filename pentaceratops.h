#pragma once
#include "dinosaurio.h"
#include <string>
using std::string;

class pentaceratops :public dinosaurio{
	
  public:
	pentaceratops(string nombre,char genero, int peso=350, int altura=2, int esperanza_vida=260, string era="cretacio", string territorio="Meridion",int hambre = 20, int edad=0);
	string toString()const;
	void addEdad(double, int);
	pentaceratops procrear(const pentaceratops&);
	void comer(int&);
        void hambrita();
        bool morir();
        void cumple();
        void paga(int&,int&);

};
