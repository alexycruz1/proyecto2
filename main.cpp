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

int main(int argc, char* argv[]){
	int semana = 0;
	long long int dinero = 100000;
	int comida = 50;
	int width, height;

	initscr();
  	(void)echo();
  	getmaxyx(curscr, height, width);

  	move(0, 10);
  	start_color();
    init_pair(1, COLOR_BLUE, COLOR_BLACK);
    attron(COLOR_PAIR(1));
  	printw("Dinero: ", "%i", dinero);
  	refresh();
  	char var = getch();

  	while(var != 's'){
  		var = getch();
  	}
  	getch();
  	endwin();
	return 0;
}
