#ifndef _astar
#define _astar

#include "fundo.h"
#include "jogo.h"
#include "fantasma.h"

typedef struct Elemento {
      
        int             x, y;
        int             viz, heu, man;
        int             pai_x, pai_y;

        int             vazio;

        } elemento;
        
extern elemento listaAberta[TAM_LISTA];
extern elemento listaFechada[TAM_LISTA];

int manhattan(int x_ini, int y_ini, int x_fin, int y_fin);
void zera_listas();
void adiciona_aberta(elemento elemAux);
void adiciona_fechada(elemento elemAux);
int menor_heu();
int esta_fechada(int x, int y);
int esta_aberta(int x, int y);
void a_star(int x_ini, int y_ini, int x_fin, int y_fin, s_fantasma *fant_aux);


#endif
