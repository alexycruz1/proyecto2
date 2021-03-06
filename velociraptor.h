#pragma once
#include "dinosaurio.h"
#include <string>
using std::string;

class velociraptor :public dinosaurio{
	
  public:
	velociraptor(string nombre,char genero, int peso=120, int altura=1, int esperanza_vida=240, string era="cretacio", string territorio="Oriente",int hambre = 10, int edad=0);
	string toString()const;
	void addEdad(double, int);
	velociraptor procrear(const velociraptor&);
	void comer(int&);
        void hambrita();
        bool morir();
        void cumple();
        void paga(int&,int&);

};
