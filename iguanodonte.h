#pragma once
#include "dinosaurio.h"
#include <string>
using std::string;

class iguanodonte :public dinosaurio{
	
  public:
	iguanodonte(string nombre,char genero, int peso=150, int altura=1, int esperanza_vida=140, string era="triasico", string territorio="Oriente",int hambre = 10, int edad=0);
	string toString()const;
	void addEdad(double, int);
	iguanodonte procrear(const iguanodonte&);
	void comer(int&);
        void hambrita();
        bool morir();
        void cumple();
        void paga(int&,int&);

};
