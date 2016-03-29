#include "dinosaurio.h"
#include "t_rex.h"
#include "spinosaurus.h"
#include "albertosaurus.h"
#include "velociraptor.h"
#include "carnotaurus.h"
#include "apatosaurio.h"
#include "triceratops.h"
#include "iguanodonte.h"
#include "pentaceratops.h"
#include "ankylosaurus.h"
#include <ncurses.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <vector>

using std::vector;

int main(int argc, char* argv[]){
	vector <dinosaurio*> dinosaurios;
	int semana = 0;
	long long int dinero = 100000;
	int comida = 50;
	int width, height;
	bool acabar = false;

	initscr();
  	(void)echo();
  	getmaxyx(curscr, height, width);

  	while(acabar == false){

  		move(0, 10);
  		start_color();
    	init_pair(1, COLOR_BLUE, COLOR_BLACK);
    	attron(COLOR_PAIR(1));
  		mvprintw(1,width-20,"Dinero: ", "%i", dinero);
		mvprintw(1,width-12,"%i", dinero);
		mvprintw(1,width-40,"Semana: ", "%i", semana);
		mvprintw(1,width-32,"%i", semana);
		mvprintw(1,width-60,"Comida: ", "%i", comida);
		mvprintw(1,width-52,"%i", comida);
		mvprintw(14,width-130,"Genero    Peso    Altura    Esperanza de vida       Era         Territorio    Hambre    Edad    Nombre");
		for(int i=0; i<dinosaurios.size();i++){
			const char* impresion = (dinosaurios[i]->toString()).c_str();
			mvprintw(15+i,width-132, "%i", i+1);
			mvprintw(15+i,width-130, impresion);
		}
  		refresh();
		

  		mvprintw(4,width-130,"1.-Comprar un dinosaurio");
  		mvprintw(5,width-130,"2.-Dar de comer");
  		mvprintw(6,width-130,"3.-Aparear dinosaurios");
  		mvprintw(7,width-130,"4.-Comprar comida");
  		mvprintw(8,width-130,"5.-Avanzar semana");
  		mvprintw(10,width-130,"Ingrese una opcion: ");
  		refresh();
  		char opcion = getch();
		
		
		
  		if (opcion == '1'){//comprar dinosaurios
  			clear();
  			char opcion2;

  			mvprintw(4,width-100,"Carnivoros");
  			mvprintw(5,width-100,"0.- Tyrannosaurus");
  			mvprintw(6,width-100,"1.- Spinosaurus");
  			mvprintw(7,width-100,"2.- Albertosaurus");
  			mvprintw(8,width-100,"3.- Velociraptor");
  			mvprintw(9,width-100,"4.- Carnotaurus");

  			mvprintw(11,width-100,"Herbivoros");
  			mvprintw(12,width-100,"5.- Apatosaurio");
  			mvprintw(13,width-100,"6.- Triceratops");
  			mvprintw(14,width-100,"7.- Iguanodonte");
  			mvprintw(15,width-100,"8.- Pentaceratops");
  			mvprintw(16,width-100,"9.- Ankylosaurus");
  			mvprintw(18,width-100,"Seleccione un dinosaurio: ");
  			opcion2 = getch();
  			refresh();


  			if (opcion2 == '0'){//inicio de dinosaurios y su compra
  				clear();

  				string nombre = "";
  				char nombre_temp[15];
  				char genero;

  				move(4, width-100);
  				addstr("Ingrese el nombre del Tyrannosaurus: ");
  				getnstr(nombre_temp, sizeof(nombre_temp) - 1);
  				clear();

  				move(4, width-100);
  				printw("Ingrese el genero del Tyrannosaurus(M/F): ");
  				genero = getch();
  				clear();

  				for (int i = 0; i < 16; ++i){
  					nombre += nombre_temp[i];
  				}

  				dinosaurios.push_back(new t_rex(nombre, genero));
  			}else if (opcion2 == '1'){
  				clear();

  				string nombre = "";
  				char nombre_temp[15];
  				char genero;

  				move(4, width-100);
  				addstr("Ingrese el nombre del Spinosaurus: ");
  				getnstr(nombre_temp, sizeof(nombre_temp) - 1);
  				clear();

  				move(4, width-100);
  				printw("Ingrese el genero del Spinosaurus(M/F): ");
  				genero = getch();
  				clear();

  				for (int i = 0; i < 16; ++i){
  					nombre += nombre_temp[i];
  				}

  				dinosaurios.push_back(new spinosaurus(nombre, genero));
  			}else if (opcion2 == '2'){
  				clear();

  				string nombre = "";
  				char nombre_temp[15];
  				char genero;

  				move(4, width-100);
  				addstr("Ingrese el nombre del Albertosaurus: ");
  				getnstr(nombre_temp, sizeof(nombre_temp) - 1);
  				clear();

  				move(4, width-100);
  				printw("Ingrese el genero del Albertosaurus(M/F): ");
  				genero = getch();
  				clear();

  				for (int i = 0; i < 16; ++i){
  					nombre += nombre_temp[i];
  				}

  				dinosaurios.push_back(new albertosaurus(nombre, genero));
  			}else if (opcion2 == '3'){
  				clear();

  				string nombre = "";
  				char nombre_temp[15];
  				char genero;

  				move(4, width-100);
  				addstr("Ingrese el nombre del Velociraptor: ");
  				getnstr(nombre_temp, sizeof(nombre_temp) - 1);
  				clear();

  				move(4, width-100);
  				printw("Ingrese el genero del Velociraptor(M/F): ");
  				genero = getch();
  				clear();

  				for (int i = 0; i < 16; ++i){
  					nombre += nombre_temp[i];
  				}

  				dinosaurios.push_back(new velociraptor(nombre, genero));
  			}else if (opcion2 == '4'){
  				clear();

  				string nombre = "";
  				char nombre_temp[15];
  				char genero;

  				move(4, width-100);
  				addstr("Ingrese el nombre del Carnotaurus: ");
  				getnstr(nombre_temp, sizeof(nombre_temp) - 1);
  				clear();

  				move(4, width-100);
  				printw("Ingrese el genero del Carnotaurus(M/F): ");
  				genero = getch();
  				clear();

  				for (int i = 0; i < 16; ++i){
  					nombre += nombre_temp[i];
  				}

  				dinosaurios.push_back(new carnotaurus(nombre, genero));
  			}else if (opcion2 == '5'){
  				clear();

  				string nombre = "";
  				char nombre_temp[15];
  				char genero;

  				move(4, width-100);
  				addstr("Ingrese el nombre del Apatosaurio: ");
  				getnstr(nombre_temp, sizeof(nombre_temp) - 1);
  				clear();

  				move(4, width-100);
  				printw("Ingrese el genero del Apatosaurio(M/F): ");
  				genero = getch();
  				clear();

  				for (int i = 0; i < 16; ++i){
  					nombre += nombre_temp[i];
  				}

  				dinosaurios.push_back(new apatosaurio(nombre, genero));
  			}else if (opcion2 == '6'){
  				clear();

  				string nombre = "";
  				char nombre_temp[15];
  				char genero;

  				move(4, width-100);
  				addstr("Ingrese el nombre del Triceratops: ");
  				getnstr(nombre_temp, sizeof(nombre_temp) - 1);
  				clear();

  				move(4, width-100);
  				printw("Ingrese el genero del Triceratops(M/F): ");
  				genero = getch();
  				clear();

  				for (int i = 0; i < 16; ++i){
  					nombre += nombre_temp[i];
  				}

  				dinosaurios.push_back(new triceratops(nombre, genero));
  			}else if (opcion2 == '7'){
  				clear();

  				string nombre = "";
  				char nombre_temp[15];
  				char genero;

  				move(4, width-100);
  				addstr("Ingrese el nombre del Iguanodonte: ");
  				getnstr(nombre_temp, sizeof(nombre_temp) - 1);
  				clear();

  				move(4, width-100);
  				printw("Ingrese el genero del Iguanodonte(M/F): ");
  				genero = getch();
  				clear();

  				for (int i = 0; i < 16; ++i){
  					nombre += nombre_temp[i];
  				}

  				dinosaurios.push_back(new iguanodonte(nombre, genero));
  			}else if (opcion2 == '8'){
  				clear();

  				string nombre = "";
  				char nombre_temp[15];
  				char genero;

  				move(4, width-100);
  				addstr("Ingrese el nombre del Pentaceratops: ");
  				getnstr(nombre_temp, sizeof(nombre_temp) - 1);
  				clear();

  				move(4, width-100);
  				printw("Ingrese el genero del Pentaceratops(M/F): ");
  				genero = getch();
  				clear();

  				for (int i = 0; i < 16; ++i){
  					nombre += nombre_temp[i];
  				}

  				dinosaurios.push_back(new pentaceratops(nombre, genero));
  			}else if (opcion2 == '9'){
  				clear();

  				string nombre = "";
  				char nombre_temp[15];
  				char genero;

  				move(4, width-100);
  				addstr("Ingrese el nombre del Ankylosaurus: ");
  				getnstr(nombre_temp, sizeof(nombre_temp) - 1);
  				clear();

  				move(4, width-100);
  				printw("Ingrese el genero del Ankylosaurus(M/F): ");
  				genero = getch();
  				clear();

  				for (int i = 0; i < 16; ++i){
  					nombre += nombre_temp[i];
  				}

  				dinosaurios.push_back(new ankylosaurus(nombre, genero));
  			}//fin de compras

  		}else if (opcion == '2'){//dar de comida
  			
  		}else if (opcion == '3'){
  		
  		}else if (opcion == '4'){//comprar comida
  			clear();
  			int nueva_comida;
  			int dinero_gastado;

  			mvprintw(4,width-130,"Cuantas unidades de comida desea comprar (maximo de 9 unidades): ");
  			nueva_comida = getch();
  			nueva_comida = nueva_comida - 48;

  			dinero_gastado = nueva_comida*100;
  			dinero = dinero - dinero_gastado;
  			comida = comida + nueva_comida;

  			clear();
  		}else if (opcion == '5'){//avanzar semana
  			semana++;
  		}
  		clear();
  	}
  		
  		getch();
  		endwin();
		return 0;
}





