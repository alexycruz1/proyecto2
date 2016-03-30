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
#include <ctime>

using std::vector;

int main(int argc, char* argv[]){
  srand(time(NULL));
	vector <dinosaurio*> dinosaurios;
	int semana;
 	semana = 0;
	int dinero;
  dinero = 100000;
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
      init_pair(2, COLOR_RED, COLOR_BLACK);
    	attron(COLOR_PAIR(1));
  		mvprintw(1,width-20,"Dinero: ", "%i", dinero);
		  mvprintw(1,width-12,"%i", dinero);
		  mvprintw(1,width-40,"Semana: ", "%i", semana);
		  mvprintw(1,width-32,"%i", semana);
		  mvprintw(1,width-60,"Comida: ", "%i", comida);
		  mvprintw(1,width-52,"%i", comida);
		  mvprintw(14,width-130,"Genero    Peso    Altura    Esperanza de vida       Era         Territorio    Hambre    Edad    Nombre");
		  for(int i=0; i<dinosaurios.size();i++){
        attron(COLOR_PAIR(2));
			 const char* impresion = (dinosaurios[i]->toString()).c_str();
			 mvprintw(15+i,width-132, "%i", i+1);
			 mvprintw(15+i,width-130, impresion);
		  }
  		refresh();
		  
      attron(COLOR_PAIR(1));
      mvprintw(2,width-130,"***TU MUNDO JURASICO***");
  		mvprintw(4,width-130,"1.-Comprar un dinosaurio");
  		mvprintw(5,width-130,"2.-Dar de comer");
  		mvprintw(6,width-130,"3.-Comprar huevo (30,000)");
  		mvprintw(7,width-130,"4.-Comprar comida (100/unidad)");
  		mvprintw(8,width-130,"5.-Avanzar semana");
  		mvprintw(10,width-130,"Ingrese una opcion: ");
  		refresh();
  		char opcion = getch();
		
		
		
  		if (opcion == '1'){//comprar dinosaurios
  			clear();
  			char opcion2;

  			mvprintw(4,width-100,"CARNIVOROS");
  			mvprintw(5,width-100,"0.- Tyrannosaurus (70,000)");
  			mvprintw(6,width-100,"1.- Spinosaurus (85,000)");
  			mvprintw(7,width-100,"2.- Albertosaurus (50,000)");
  			mvprintw(8,width-100,"3.- Velociraptor (20,000)");
  			mvprintw(9,width-100,"4.- Carnotaurus (35,000)");

  			mvprintw(11,width-100,"HERBIVOROS");
  			mvprintw(12,width-100,"5.- Apatosaurio (75,000)");
  			mvprintw(13,width-100,"6.- Triceratops (50,000)");
  			mvprintw(14,width-100,"7.- Iguanodonte (20,000)");
  			mvprintw(15,width-100,"8.- Pentaceratops (70,000)");
  			mvprintw(16,width-100,"9.- Ankylosaurus (35,000)");
  			mvprintw(18,width-100,"Seleccione un dinosaurio: ");
  			opcion2 = getch();
  			refresh();


  			if (opcion2 == '0' && dinero >= 70000){//inicio de dinosaurios y su compra
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

          if (dinero >= 70000){
            dinero = dinero - 70000;
            dinosaurios.push_back(new t_rex(nombre, genero));
          }

  			}else if (opcion2 == '1' && dinero >= 85000){
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

          if (dinero >= 85000){
            dinero = dinero - 85000;
            dinosaurios.push_back(new spinosaurus(nombre, genero));
          }
  				
  			}else if (opcion2 == '2' && dinero >= 50000){
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

          if (dinero >= 50000){
            dinero = dinero - 50000;
            dinosaurios.push_back(new albertosaurus(nombre, genero));   
          }

  			}else if (opcion2 == '3' && dinero >= 20000){
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

          if (dinero >= 20000){
            dinero = dinero - 20000;
            dinosaurios.push_back(new velociraptor(nombre, genero));          
          }

  			}else if (opcion2 == '4' && dinero >= 35000){
  				clear();

  				string nombre = "";
  				char nombre_temp[15];
  				char genero;
          if (dinero >= 35000){
            dinero = dinero - 35000;
          }

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

          if (dinero >= 35000){
            dinero = dinero - 35000;
            dinosaurios.push_back(new carnotaurus(nombre, genero));
          }

  			}else if (opcion2 == '5' && dinero >= 75000){
  				clear();

  				string nombre = "";
  				char nombre_temp[15];
  				char genero;
          if (dinero >= 75000){
            dinero = dinero - 75000;
          }

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

          if (dinero >= 75000){
            dinero = dinero - 75000;
            dinosaurios.push_back(new apatosaurio(nombre, genero));          
          }

  			}else if (opcion2 == '6' && dinero >= 50000){
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

          if (dinero >= 50000){
            dinero = dinero - 50000;
            dinosaurios.push_back(new triceratops(nombre, genero));
          }

  			}else if (opcion2 == '7' && dinero >= 20000){
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

          if (dinero >= 20000){
            dinero = dinero - 20000;
            dinosaurios.push_back(new iguanodonte(nombre, genero));
          }

  			}else if (opcion2 == '8' && dinero >= 70000){
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

          if (dinero >= 70000){
            dinero = dinero - 70000;
            dinosaurios.push_back(new pentaceratops(nombre, genero));
          }
  				
  		}else if (opcion2 == '9' && dinero >= 35000){
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

          if (dinero >= 35000){
            dinero = dinero - 35000;
            dinosaurios.push_back(new ankylosaurus(nombre, genero));
          }
  				
  	}else{
		clear();
         	mvprintw(10,width-130,"NO TIENES SUFICIENTE DINERO!");
	 	getch();
	 	clear();
        }//fin de compras

  		}else if (opcion == '2'){//dar de comida
  			if (comida > 0){
          mvprintw(11,width-130,"Ingrese el dinosaurio a alimentar: ");
          refresh();
          string elegir_dino = " ";
          char elegir_dino_temp[100];
          int dino;
          getnstr(elegir_dino_temp, sizeof(elegir_dino_temp) - 1);

          for (int i = 0; i < 101; ++i){
            elegir_dino += elegir_dino_temp[i];
          }

          dino = atoi(elegir_dino.c_str()); 

          for (int i = 0; i < dinosaurios.size(); i++){
            if (i == dino-1){
              dinosaurios[i]->comer(comida);
            }
          }
          clear();
        }else{
          mvprintw(11,width-130,"NO TIENES MAS COMIDA");
          clear();
        }
  			
  		}else if (opcion == '3'){//comprar huevo
  		  if (dinero >= 30000){
          int random = rand()%9;
          if (random == 0){
            mvprintw(11,width-130,"FELICIDADES!!! ES UN TYRANNOSAURUS");
            getch();
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
          }else if (random == 1){
            mvprintw(11,width-130,"FELICIDADES!!! ES UN SPINOSAURUS");
            getch();
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
          }else if (random == 2){
            mvprintw(11,width-130,"FELICIDADES!!! ES UN ALBERTOSAURUS");
            getch();
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
          }else if (random == 3){
            mvprintw(11,width-130,"FELICIDADES!!! ES UN VELOCIRAPTOR");
            getch();
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
          }else if (random == 4){
            mvprintw(11,width-130,"FELICIDADES!!! ES UN CARNOTAURUS");
            getch();
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
          }else if (random == 5){
            mvprintw(11,width-130,"FELICIDADES!!! ES UN APATOSAURIO");
            getch();
            clear();

            string nombre = "";
            char nombre_temp[15];
            char genero;
            if (dinero >= 75000){
              dinero = dinero - 75000;
            }

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
          }else if (random == 6){
            mvprintw(11,width-130,"FELICIDADES!!! ES UN TRICERATOPS");
            getch();
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
          }else if (random == 7){
            mvprintw(11,width-130,"FELICIDADES!!! ES UN IGUANODONTE");
            getch();
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
          }else if (random == 8){
            mvprintw(11,width-130,"FELICIDADES!!! ES UN PENTACERATOPS");
            getch();
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
          }else if (random == 9){
            mvprintw(11,width-130,"FELICIDADES!!! ES UN ANKYLOSAURUS");
            getch();
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
          }          
        }else{
          mvprintw(11,width-130,"NO TIENES SUFICIENTE DINERO PARA UN HUEVO");
          clear();
        }//fin de compra de huevos
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
        mvprintw(10,width-130,"Seguro que quieres cambiar de semana[S/N]: ");
        char seguir = getch();

        if (seguir == 's' || seguir == 'S'){
          semana++;
          clear();
          mvprintw(10,width-130,"Haz avanzado de semana");

          for (int i = 0; i < dinosaurios.size(); i++){//hambriento
            dinosaurios[i]->hambrita();
          }

          for (int i = 0; i < dinosaurios.size(); i++){//ver si muere
            if((dinosaurios[i] -> morir()) == true){
              dinosaurios.erase(dinosaurios.begin() + i);
            }
          }

          for (int i = 0; i < dinosaurios.size(); i++){//cumple anos
            dinosaurios[i] -> cumple();
          }

          for (int i = 0; i < dinosaurios.size(); i++){//pagar
            dinosaurios[i] -> paga(dinero, semana);
          }
        }//fin de cambio de semana
  		}
  		clear();
  	}
  		
  		getch();
  		endwin();
		return 0;
}





