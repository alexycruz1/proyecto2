#pragma once
#include "dinosaurio.h"
#include <string>
using std::string;

class apatosaurio :public dinosaurio{
	
  public:
	apatosaurio(string nombre,char genero, int peso=500, int altura=5, int esperanza_vida=240, string era="Triasico", string territorio="Occidente",int hambre = 20, int edad=0);
	string toString()const;
	void addEdad(double, int);
	apatosaurio procrear(const apatosaurio&);
	void comer(int&);
        void hambrita();
        bool morir();
        void cumple();
        void paga(int&,int&);
};
