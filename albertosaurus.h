#pragma once
#include "dinosaurio.h"
#include <string>
using std::string;

class albertosaurus :public dinosaurio{
	
  public:
	albertosaurus(string nombre,char genero, int peso=320, int altura=2, int esperanza_vida=160, string era="cretacio", string territorio="Oriente",int hambre = 15, int edad=0);
	string toString()const;
	void addEdad(double, int);
	albertosaurus procrear(const albertosaurus&);
	void comer(int&);
        void hambrita();
        bool morir();
        void cumple();
        void paga(int&,int&);

};
