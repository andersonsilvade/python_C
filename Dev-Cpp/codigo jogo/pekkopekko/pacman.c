#include "pacman.h"

int pacX, pacY;
int realX, realY;
estado pacEst;
direcao pacDir;
BITMAP *pacBit[12];
int    pacTunel = 0;
int    pacAtual = 0;

const int pacVelocidade = 2;

void inicia_pac() {
     pacX = 106;
     pacY = 205;

     realX = 112;
     realY = 208;

     pacTunel = 0;

     pacEst = movimento;
     pacDir = esquerda;
     
     pacBit[0] = load_bitmap("bmp/pac_e_1.bmp", 0);
     pacBit[1] = load_bitmap("bmp/pac_e_2.bmp", 0);
     pacBit[2] = load_bitmap("bmp/pac_e_3.bmp", 0);
     pacBit[3] = load_bitmap("bmp/pac_d_1.bmp", 0);
     pacBit[4] = load_bitmap("bmp/pac_d_2.bmp", 0);
     pacBit[5] = load_bitmap("bmp/pac_d_3.bmp", 0);
     pacBit[6] = load_bitmap("bmp/pac_c_1.bmp", 0);
     pacBit[7] = load_bitmap("bmp/pac_c_2.bmp", 0);
     pacBit[8] = load_bitmap("bmp/pac_c_3.bmp", 0);
     pacBit[9] = load_bitmap("bmp/pac_b_1.bmp", 0);
     pacBit[10] = load_bitmap("bmp/pac_b_2.bmp", 0);
     pacBit[11] = load_bitmap("bmp/pac_b_3.bmp", 0);
     }
     
void desenha_pac() {
     draw_sprite(buffer, pacBit[pacAtual], pacX, pacY);
     }

void atualiza_pac() {

     if (pacTunel == 0) {

     if (realX == 216 && realY == 136) pacTunel = 1;
     else if (realX == 8 && realY == 136) pacTunel = 2;
     
     if (pacDir == esquerda) {
         if (!bloqueado(realX-2, realY)) {
            pacX -= pacVelocidade;
            realX -= pacVelocidade;
            if (fps % 4 == 0) {
            pacAtual++;
            if (pacAtual == 3) pacAtual = 0; }
            }
         else pacEst = parado;
        }

     else if (pacDir == direita) {
         if (!bloqueado(realX+TAM_TILE, realY)) {
            pacX += pacVelocidade;
            realX += pacVelocidade;
            if (fps % 4 == 0) {
            pacAtual++;
            if (pacAtual == 6) pacAtual = 3; }
            }
         else pacEst = parado;
        }
     
     else if (pacDir == cima) {
         if (!bloqueado(realX, realY-2)) {
            pacY -= pacVelocidade;
            realY -= pacVelocidade;
            if (fps % 4 == 0) {
            pacAtual++;
            if (pacAtual == 9) pacAtual = 6; }
            }
         else pacEst = parado;
        }
     
     else if (pacDir == baixo) {
         if (!bloqueado(realX, realY+TAM_TILE)) {
            pacY += pacVelocidade;
            realY += pacVelocidade;
            if (fps % 4 == 0) {
            pacAtual++;
            if (pacAtual == 12) pacAtual = 9; }
            }
          else pacEst = parado;
        }

     }
     else 
     {

         if (pacTunel == 1) {
             pacX += pacVelocidade;
             realX += pacVelocidade;

             if (realX > 230) {
                 realX = -16;
                 pacX = -19;
             }

             if (realX == 16) {
                 realX = 16;
                 pacX = 13;
                 pacTunel = 0;
             }

         }

         if (pacTunel == 2) {
             pacX -= pacVelocidade;
             realX -= pacVelocidade;

             if (realX < -7) {
                 realX = 250;
                 pacX = 247;
             }

             if (realX == 208) {
                 realX = 208;
                 pacX = 205;
                 pacTunel = 0;
             }

         }

     }
}
