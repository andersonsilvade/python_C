#ifndef _fantasma
#define _fantasma

#include <allegro.h>
#include "jogo.h"
#include "tela.h"
#include "fundo.h"
#include "pacman.h"

#define MAX_FANTASMA 4

typedef enum Acao {perseguir, vagar, fugir, tunel} acao;

typedef struct s_Caminho {
        
        int x,y;
        int vazio;
     
        } caminho;

typedef struct s_Fantasma {
        int x,y;
        int realX, realY;
        int velocidade;
        
        BITMAP *img;
        
        estado fantEstado;
        direcao fantDirecao;      
        acao    fantAcao;  
        int     movimentando;

        caminho listaCaminho[TAM_LISTA];
        int     atualCaminho; 
        
        int     regulariza;
        int     tunel_lado;
        int     fugir;

        } s_fantasma;

extern s_fantasma fantasma[MAX_FANTASMA];

extern volatile  int count[4];
extern BITMAP    *fant_fugindo[2];
extern BITMAP    *fant_olhos;
extern BITMAP    *fant_normal[4];

s_fantasma cria_fantasma(int x, int y, estado fantEstado, direcao fantDirecao, acao fantAcao, int reg); 
void desenha_fantasma();
int atualiza_fantasma();
void movimento_fantasma();
void regularizar(s_fantasma *fant_aux);
void mover_lado(s_fantasma *fant_aux, direcao dir);
int verifica_colisao();
void aumenta_fant0();
void aumenta_fant1();
void aumenta_fant2();
void aumenta_fant3();

//Operações com a lista de caminhar
void zera_caminho(s_fantasma *fant_aux);
int adiciona_xy(s_fantasma *fant_aux, int x, int y);

//Operações de IA
void andar_aleatorio(s_fantasma *fant_aux);
void atualiza_estados();

#endif
