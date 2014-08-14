#include <allegro.h>
#include "jogo.h"

int main() {

	inicia_grafico(); //Inicia o gráfico da Allegro
    inicia_variaveis(); //Inicia variaveis do jogo
    srand(time(NULL)); //Inicia o random

	while (!key[KEY_ESC]) {

          input();
          processamento();
          output();
	      fps++;

          while (frame <= 11) {
          }
          frame = 0;


	}

	deinit();
	return 0;
}
END_OF_MAIN()
