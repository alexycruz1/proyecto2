#pragma once
#include "dinosaurio.h"
#include <string>
using std::string;

class spinosaurus :public dinosaurio{
	
  public:
	spinosaurus(string nombre,char genero, int peso=410, int altura=4, int esperanza_vida=270, string era="Cretacio", string territorio="Meridion",int hambre = 25, int edad=0);
	string toString()const;
	void addEdad(double, int);
	spinosaurus procrear(const spinosaurus&);
	void comer(int&);
        void hambrita();
        bool morir();
        void cumple();
        void paga(int&,int&);

};
