#pragma once
#include "dinosaurio.h"
#include <string>
using std::string;

class ankylosaurus :public dinosaurio{
	
  public:
	ankylosaurus(string nombre,char genero, int peso=360, int altura=1, int esperanza_vida=310, string era="Jurasico", string territorio="Meridion",int hambre = 20, int edad=0);
	string toString()const;
	void addEdad(double, int);
	ankylosaurus procrear(const ankylosaurus&);
	void comer(int&);
        void hambrita();
        bool morir();
        void cumple();
        void paga(int&,int&);

};
