#include "teclado.h"

void teclado_pac(){
     if (realX % TAM_TILE == 0 && realY % TAM_TILE == 0 && pacTunel == 0 && pac_loose == NAO) {

     if(key[KEY_LEFT] && !bloqueado(realX-2, realY)) {
                      pacDir = esquerda;
                      pacEst = movimento;
                      pacAtual = 0;
                      }
     if(key[KEY_RIGHT] && !bloqueado(realX+TAM_TILE, realY)) {
                      pacDir = direita;
                      pacEst = movimento;
                      pacAtual = 3;
                      }

     if(key[KEY_UP] && pacY >= 0 && !bloqueado(realX, realY-2)) {
                      pacDir = cima;
                      pacEst = movimento;
                      pacAtual = 6;
                      }

     if(key[KEY_DOWN] && pacY <= SCREEN_H-TAM_TILE*2 && !bloqueado(realX, realY+TAM_TILE)) {
                      pacDir = baixo;
                      pacEst = movimento;
                      pacAtual = 9;
                      }
     
     }

}
