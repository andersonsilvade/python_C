#ifndef _jogo
#define _jogo

#include <allegro.h>

#define SIM 1
#define NAO 0

typedef enum Estado {movimento, parado} estado;
typedef enum Direcao {cima, direita, baixo, esquerda} direcao;

extern volatile int  fps, ultimo_fps, frame;
extern int           nivel;
extern int           vidas;
extern int           pac_loose;
extern int           indice[4];
extern BITMAP        *bmpvida;
extern int           pontuacao;

void inicia_grafico();
void inicia_variaveis();
int  colisao(int x_ini, int y_ini, int x_fin, int y_fin);
void perdeu();
void input();
void processamento();
void output();
void controla_fps();
void controla_frame();
void deinit();

#endif
