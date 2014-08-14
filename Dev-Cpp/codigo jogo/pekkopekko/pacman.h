#ifndef _pacman
#define _pacman

#include <allegro.h>
#include "jogo.h"
#include "tela.h"
#include "fundo.h"

extern int pacX, pacY;
extern int realX, realY;
extern estado pacEst;
extern direcao pacDir;
extern BITMAP *pacBit[12];
extern int    pacTunel;
extern int    pacAtual;

void inicia_pac();
void desenha_pac();
void atualiza_pac();

#endif
