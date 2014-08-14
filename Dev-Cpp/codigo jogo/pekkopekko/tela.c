#include "tela.h"

BITMAP *buffer;

void inicia_buffer() {
     buffer = create_bitmap(SCREEN_W, SCREEN_H);
     clear(buffer);
     }

void desenha_tela() {
     blit(buffer, screen, 0, 0, 0, 0, SCREEN_W, SCREEN_H);
     clear(buffer);
     }
