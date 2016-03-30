#pragma once
#include "dinosaurio.h"
#include <string>
using std::string;

class carnotaurus :public dinosaurio{
	
  public:
	carnotaurus(string nombre,char genero, int peso=220, int altura=2, int esperanza_vida=240, string era="Jurasico", string territorio="Seteptrion",int hambre = 20, int edad=0);
	string toString()const;
	void addEdad(double, int);
	carnotaurus procrear(const carnotaurus&);
	void comer(int&);
        void hambrita();
        bool morir();
        void cumple();
        void paga(int&,int&);

};
