#include "jogo.h"
#include "tela.h"
#include "fundo.h"
#include "pacman.h"
#include "fantasma.h"
#include "teclado.h"
#include "astar.h"

volatile int      fps, ultimo_fps, frame;
int               nivel = 1;
int               vidas = 3;
int               pac_loose;
int               indice[4];
BITMAP            *bmpvida;
int               pontuacao = 0;

void inicia_grafico()
{
	int depth, res;
	allegro_init();

    depth = desktop_color_depth();
	if (depth == 0) depth = 32;
	set_color_depth(depth);
	
    res = set_gfx_mode(GFX_AUTODETECT_WINDOWED, 224, 288, 0, 0);
    if (res != 0) {
		allegro_message(allegro_error);
		exit(-1);
	}

	install_timer();
	install_keyboard();
	install_mouse();
}

void inicia_variaveis()
{
    int i,j;

    inicia_buffer();
    
    for (i = 0; i < SCREEN_H / TAM_TILE; i++)
        for ( j = 0; j < SCREEN_W / TAM_TILE; j++) {
            mapaAux[i][j] = mapaFundo[i][j];             
        }
    
    inicia_fundo();
    inicia_tiles();
    inicia_pac();

    //Iniciando os fantasmas ********************************************
    fantasma[0] = cria_fantasma(104, 109, parado, esquerda, vagar, 1);
    fant_normal[0] = load_bitmap("bmp/fant1.bmp", 0);
    fantasma[0].img = fant_normal[0];
    
    zera_caminho(&fantasma[0]);

    fantasma[1] = cria_fantasma(105, 133, parado, esquerda, vagar, 2);
    fant_normal[1] = load_bitmap("bmp/fant2.bmp", 0);
    fantasma[1].img = fant_normal[1];
    zera_caminho(&fantasma[1]);

    fantasma[2] = cria_fantasma(89, 133, parado, esquerda, vagar, 3);
    fant_normal[2] = load_bitmap("bmp/fant3.bmp", 0);
    fantasma[2].img = fant_normal[2];
    zera_caminho(&fantasma[2]);

    fantasma[3] = cria_fantasma(121, 133, parado, esquerda, vagar, 4);
    fant_normal[3] = load_bitmap("bmp/fant4.bmp", 0);
    fantasma[3].img = fant_normal[3];
    zera_caminho(&fantasma[3]);
    
    count[0] = 0;
    count[1] = 0;
    count[2] = 0;
    count[3] = 0;

    LOCK_FUNCTION(aumenta_fant0);
    LOCK_VARIABLE(count[0]);
    
    LOCK_FUNCTION(aumenta_fant1);
    LOCK_VARIABLE(count[1]);
     
    LOCK_FUNCTION(aumenta_fant2);
    LOCK_VARIABLE(count[2]);

    LOCK_FUNCTION(aumenta_fant3);
    LOCK_VARIABLE(count[3]);
     
    install_int (aumenta_fant0, 100);
    install_int (aumenta_fant1, 100);
    install_int (aumenta_fant2, 100);
    install_int (aumenta_fant3, 100);

    fant_fugindo[0] = load_bitmap("bmp/fant_f_1.bmp", 0);
    fant_fugindo[1] = load_bitmap("bmp/fant_f_2.bmp", 0);
    fant_olhos = load_bitmap("bmp/fant_e_1.bmp", 0);

    //*******************************************************************

    bmpvida = load_bitmap("bmp/vida.bmp", 0);
    fps = 0;
    frame = 0;

    LOCK_FUNCTION(controla_fps);
    LOCK_FUNCTION(controla_frame);
    LOCK_VARIABLE(frame);
    LOCK_VARIABLE(fps);
    LOCK_VARIABLE(ultimo_fps);
    install_int (controla_fps, 1000);
    install_int (controla_frame, 1);

    indice[0] = 0;
    indice[1] = 0;
    indice[2] = 0;
    indice[3] = 0;
    
    pac_loose = NAO;

}

int colisao(int x_ini, int y_ini, int x_fin, int y_fin)
{
    int char1_cima, char1_baixo, char1_direita, char1_esquerda;
    int char2_cima, char2_baixo, char2_direita, char2_esquerda;
    
    char1_cima =       y_ini;
    char1_baixo =      y_ini + 10;
    char1_esquerda =   x_ini;
    char1_direita =    x_ini + 10;
    
    char2_cima =       y_fin;
    char2_baixo =      y_fin + 10;
    char2_esquerda =   x_fin;
    char2_direita =    x_fin + 10;
    
    if (char1_esquerda > char2_direita) return NAO;
    if (char1_direita < char2_esquerda) return NAO;
    if (char1_cima > char2_baixo)       return NAO;
    if (char1_baixo < char2_cima)       return NAO;
    
    return SIM;
}

void perdeu()
{
    inicia_fundo();

    fantasma[0] = cria_fantasma(104, 109, parado, esquerda, vagar, 1);
    fantasma[0].img = load_bitmap("bmp/fant1.bmp", 0);
    zera_caminho(&fantasma[0]);
    fantasma[1] = cria_fantasma(105, 133, parado, esquerda, vagar, 2);
    fantasma[1].img = load_bitmap("bmp/fant2.bmp", 0);
    zera_caminho(&fantasma[1]);
    fantasma[2] = cria_fantasma(89, 133, parado, esquerda, vagar, 3);
    fantasma[2].img = load_bitmap("bmp/fant3.bmp", 0);
    zera_caminho(&fantasma[2]);
    fantasma[3] = cria_fantasma(121, 133, parado, esquerda, vagar, 4);
    fantasma[3].img = load_bitmap("bmp/fant4.bmp", 0);
    zera_caminho(&fantasma[3]);

    pacX = 106;
    pacY = 205;

    realX = 112;
    realY = 208;

    pacTunel = 0;

    pacEst = movimento;
    pacDir = esquerda;
                
    pacAtual = 0;

    count[0] = 0;
    count[1] = 0;
    count[2] = 0;
               
    pac_loose = NAO;
    indice[0] = 0;
    indice[1] = 0;
    indice[2] = 0;
    indice[3] = 0;

    vidas = 3;

}

void input()
{
    teclado_pac();
}

void processamento()
{
    regularizar(&fantasma[0]);
    if ((nivel >= 2 || indice[1] > 50) && pac_loose == NAO) regularizar(&fantasma[1]);
    if ((nivel >= 3 || indice[2] > 200) && pac_loose == NAO) regularizar(&fantasma[2]);
    if ((nivel >= 4 || indice[3] > 400) && pac_loose == NAO) regularizar(&fantasma[3]);

    if (pac_loose == NAO && fps % 2 == 0) atualiza_pac();

    if (pac_loose == NAO && fps % 2 == 0) atualiza_estados();

    if (pac_loose == NAO && fps % 2 == 0) atualiza_fantasma();
    if (pac_loose == NAO && fps % 2 == 0) movimento_fantasma();
    come_pilula();
    verifica_colisao();

    if (indice[1] < 100) indice[1]++;
    if (indice[2] < 210) indice[2]++;
    if (indice[3] < 410) indice[3]++;
}

void output()
{
    desenha_fundo();
    desenha_pac();
    desenha_fantasma();
    desenha_tela();


    if (vidas == 4)
    {
        draw_sprite(buffer, bmpvida, 19, 274);
        draw_sprite(buffer, bmpvida, 35, 274);
        draw_sprite(buffer, bmpvida, 41, 274);
    }
    if (vidas == 3)
    {
        draw_sprite(buffer, bmpvida, 19, 274);
        draw_sprite(buffer, bmpvida, 35, 274);
    }
    else if (vidas == 2)
        draw_sprite(buffer, bmpvida, 19, 274);

//    textprintf_ex(screen, font, 10, 10, makecol(100,100,100), makecol(0, 0, 0), "Fps: %d", ultimo_fps);
    textprintf_ex(buffer, font, 33, 9, makecol(200,200,200), makecol(0, 0, 0), "Pontos: %d", pontuacao);

}

void controla_fps()
{
 ultimo_fps = fps;
 fps = 0;
}  END_OF_FUNCTION (controla_fps);

void controla_frame()
{
 frame++;
}  END_OF_FUNCTION (controla_frame);

void deinit() {
     int i;

     clear_keybuf();
	 destroy_bitmap(buffer);

     for (i = 0; i < MAX_TILE; i++)
         destroy_bitmap(tiles[i]);
     for (i = 0; i < MAX_FANTASMA; i++)
         destroy_bitmap(fantasma[i].img);
         
     destroy_bitmap(fant_normal[0]);
     destroy_bitmap(fant_normal[1]);
     destroy_bitmap(fant_normal[2]);
     destroy_bitmap(fant_normal[3]);

     remove_int (aumenta_fant0);
     remove_int (aumenta_fant1);
     remove_int (aumenta_fant2);     
     remove_int (aumenta_fant3);     
     remove_int (controla_fps);
     remove_int (controla_frame);

     destroy_bitmap(pacBit[0]);
     destroy_bitmap(pacBit[1]);
     destroy_bitmap(pacBit[2]);
     destroy_bitmap(pacBit[3]);
     destroy_bitmap(pacBit[4]);
     destroy_bitmap(pacBit[5]);
     destroy_bitmap(pacBit[6]);
     destroy_bitmap(pacBit[7]);
     destroy_bitmap(pacBit[8]);
     destroy_bitmap(pacBit[9]);
     destroy_bitmap(pacBit[10]);
     destroy_bitmap(pacBit[11]);
     
     destroy_bitmap(bmpvida);

     destroy_bitmap(fant_fugindo[0]);
     destroy_bitmap(fant_fugindo[1]);
     destroy_bitmap(fant_olhos);
}

