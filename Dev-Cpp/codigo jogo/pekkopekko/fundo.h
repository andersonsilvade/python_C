#ifndef _fundo
#define _fundo

#include <allegro.h>
#include "tela.h"
#include "pacman.h"

#define TAM_TILE 8
#define MAX_TILE 35

#define TAM_LISTA 288 / TAM_TILE * 224 / TAM_TILE

extern char       mapaFundo[288 / TAM_TILE][224 / TAM_TILE];
extern char       mapaAux[288 / TAM_TILE][224 / TAM_TILE];
extern BITMAP     *tiles[MAX_TILE];

void inicia_fundo();
void inicia_tiles();
void le_fundo();
void desenha_fundo();
int  bloqueado(int x, int y);
void come_pilula();

#endif
