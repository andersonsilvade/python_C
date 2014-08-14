#include "fundo.h"
#include "fantasma.h"

char mapaAux[288 / TAM_TILE][224 / TAM_TILE];
char mapaFundo[288 / TAM_TILE][224 / TAM_TILE] = 
 {
  {'0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0'},
  {'0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0'},
  {'0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0'},
  {'b','c','c','c','c','c','c','c','c','c','c','c','c','d','e','c','c','c','c','c','c','c','c','c','c','c','c','f'},
  {'g','a','a','a','a','a','a','a','a','a','a','a','a','m','l','a','a','a','a','a','a','a','a','a','a','a','a','h'},
  {'g','a','i','j','j','k','a','i','j','j','j','k','a','m','l','a','i','j','j','j','k','a','i','j','j','k','a','h'},  
  {'g','+','l','0','0','m','a','l','0','0','0','m','a','m','l','a','l','0','0','0','m','a','l','0','0','m','+','h'},
  {'g','a','n','j','j','o','a','n','j','j','j','o','a','n','o','a','n','j','j','j','o','a','n','j','j','o','a','h'},
  {'g','a','a','a','a','a','a','a','a','a','a','a','a','a','a','a','a','a','a','a','a','a','a','a','a','a','a','h'},
  {'g','a','i','j','j','k','a','i','k','a','i','j','j','j','j','j','j','k','a','i','k','a','i','j','j','k','a','h'},
  {'g','a','n','j','j','o','a','l','l','a','n','j','j','k','i','j','j','o','a','l','l','a','n','j','j','o','a','h'},
  {'g','a','a','a','a','a','a','l','l','a','a','a','a','l','l','a','a','a','a','l','l','a','a','a','a','a','a','h'},
  {'q','s','s','s','s','t','a','l','n','j','j','k','0','l','l','0','i','j','j','o','l','a','u','s','s','s','s','r'},
  {'0','0','0','0','0','g','a','l','i','j','j','o','0','n','o','0','n','j','j','k','l','a','h','0','0','0','0','0'},
  {'0','0','0','0','0','g','a','l','l','0','0','0','0','0','0','0','0','0','0','l','l','a','h','0','0','0','0','0'},
  {'0','0','0','0','0','g','a','l','l','0','v','1','1','8','8','1','1','w','0','l','l','a','h','0','0','0','0','0'},  
  {'z','z','z','z','z','o','a','n','o','0','h','0','0','0','0','0','0','g','0','n','o','a','n','z','z','z','z','z'},  
  {'0','0','0','0','0','0','a','0','0','0','h','0','0','0','0','0','0','g','0','0','0','a','0','0','0','0','0','0'},    
  {'s','s','s','s','s','t','a','i','k','0','h','0','0','0','0','0','0','g','0','i','k','a','u','s','s','s','s','s'},    
  {'0','0','0','0','0','g','a','l','l','0','y','z','z','z','z','z','z','x','0','l','l','a','h','0','0','0','0','0'},    
  {'0','0','0','0','0','g','a','l','l','0','0','0','0','0','0','0','0','0','0','l','l','a','h','0','0','0','0','0'},      
  {'0','0','0','0','0','g','a','l','l','0','i','j','j','j','j','j','j','k','0','l','l','a','h','0','0','0','0','0'},      
  {'b','z','z','z','z','o','a','n','o','0','n','j','j','k','i','j','j','o','0','n','o','a','n','z','z','z','z','f'},      
  {'g','a','a','a','a','a','a','a','a','a','a','a','a','l','l','a','a','a','a','a','a','a','a','a','a','a','a','h'},      
  {'g','a','i','j','j','k','a','i','j','j','j','k','a','l','l','a','i','j','j','j','k','a','i','j','j','k','a','h'}, 
  {'g','a','n','j','k','l','a','n','j','j','j','o','a','n','o','a','n','j','j','j','o','a','l','i','j','o','a','h'},      
  {'g','+','a','a','l','l','a','a','a','a','a','a','a','0','0','a','a','a','a','a','a','a','l','l','a','a','+','h'},      
  {'4','j','k','a','l','l','a','i','k','a','i','j','j','j','j','j','j','k','a','i','k','a','l','l','a','i','j','5'},      
  {'6','j','o','a','n','o','a','l','l','a','n','j','j','k','i','j','j','o','a','l','l','a','n','o','a','n','j','7'},      
  {'g','a','a','a','a','a','a','l','l','a','a','a','a','l','l','a','a','a','a','l','l','a','a','a','a','a','a','h'},      
  {'g','a','i','j','j','j','j','o','n','j','j','k','a','l','l','a','i','j','j','o','n','j','j','j','j','k','a','h'},      
  {'g','a','n','j','j','j','j','j','j','j','j','o','a','n','o','a','n','j','j','j','j','j','j','j','j','o','a','h'},      
  {'g','a','a','a','a','a','a','a','a','a','a','a','a','a','a','a','a','a','a','a','a','a','a','a','a','a','a','h'},      
  {'q','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','r'},      
 };
BITMAP *tiles[MAX_TILE];


void inicia_fundo() {
     int i,j;
     
     for (i = 0; i < SCREEN_H / TAM_TILE; i++)
         for ( j = 0; j < SCREEN_W / TAM_TILE; j++) {
             mapaFundo[i][j] = mapaAux[i][j];             
         }


     
     }

void inicia_tiles() {
     tiles[0]  = load_bitmap("bmp/p1.bmp", 0);  //a
     tiles[1]  = load_bitmap("bmp/c1.bmp", 0);  //b
     tiles[2]  = load_bitmap("bmp/c2.bmp", 0);  //c
     tiles[3]  = load_bitmap("bmp/c3.bmp", 0);  //d 
     tiles[4]  = load_bitmap("bmp/c4.bmp", 0);  //e
     tiles[5]  = load_bitmap("bmp/c5.bmp", 0);  //f
     tiles[6]  = load_bitmap("bmp/c6.bmp", 0);  //g
     tiles[7]  = load_bitmap("bmp/c7.bmp", 0);  //h
     tiles[8]  = load_bitmap("bmp/c8.bmp", 0);  //i
     tiles[9]  = load_bitmap("bmp/c9.bmp", 0);  //j
     tiles[10] = load_bitmap("bmp/c10.bmp", 0); //k
     tiles[11] = load_bitmap("bmp/c11.bmp", 0); //l
     tiles[12] = load_bitmap("bmp/c12.bmp", 0); //m
     tiles[13] = load_bitmap("bmp/c13.bmp", 0); //n
     tiles[14] = load_bitmap("bmp/c14.bmp", 0); //o
     tiles[15] = load_bitmap("bmp/c15.bmp", 0); //q
     tiles[16] = load_bitmap("bmp/c16.bmp", 0); //r
     tiles[17] = load_bitmap("bmp/c17.bmp", 0); //s
     tiles[18] = load_bitmap("bmp/c18.bmp", 0); //t
     tiles[19] = load_bitmap("bmp/c19.bmp", 0); //u
     tiles[20] = load_bitmap("bmp/c20.bmp", 0); //v
     tiles[21] = load_bitmap("bmp/c21.bmp", 0); //w
     tiles[22] = load_bitmap("bmp/c22.bmp", 0); //x
     tiles[23] = load_bitmap("bmp/c23.bmp", 0); //y
     tiles[24] = load_bitmap("bmp/c24.bmp", 0); //z
     tiles[25] = load_bitmap("bmp/c25.bmp", 0); //1
     tiles[26] = load_bitmap("bmp/c26.bmp", 0); //2
     tiles[27] = load_bitmap("bmp/c27.bmp", 0); //3
     tiles[28] = load_bitmap("bmp/c28.bmp", 0); //4
     tiles[29] = load_bitmap("bmp/c29.bmp", 0); //5
     tiles[30] = load_bitmap("bmp/c30.bmp", 0); //6
     tiles[31] = load_bitmap("bmp/c31.bmp", 0); //7
     tiles[32] = load_bitmap("bmp/c15.bmp", 0); //p
     tiles[33] = load_bitmap("bmp/p2.bmp", 0);  //+
     tiles[34] = load_bitmap("bmp/c32.bmp", 0);  //+
     }

void desenha_fundo() {
     int i,j;
     
     for (i = 0; i < SCREEN_H / TAM_TILE; i++)
         for ( j = 0; j < SCREEN_W / TAM_TILE; j++) {

             if (mapaFundo[i][j] == '0') {}
             else if (mapaFundo[i][j] == 'a') draw_sprite(buffer, tiles[0], j*TAM_TILE, i*TAM_TILE);
             else if (mapaFundo[i][j] == 'b') draw_sprite(buffer, tiles[1], j*TAM_TILE, i*TAM_TILE);
             else if (mapaFundo[i][j] == 'c') draw_sprite(buffer, tiles[2], j*TAM_TILE, i*TAM_TILE);
             else if (mapaFundo[i][j] == 'd') draw_sprite(buffer, tiles[3], j*TAM_TILE, i*TAM_TILE);
             else if (mapaFundo[i][j] == 'e') draw_sprite(buffer, tiles[4], j*TAM_TILE, i*TAM_TILE);
             else if (mapaFundo[i][j] == 'f') draw_sprite(buffer, tiles[5], j*TAM_TILE, i*TAM_TILE);
             else if (mapaFundo[i][j] == 'g') draw_sprite(buffer, tiles[6], j*TAM_TILE, i*TAM_TILE);
             else if (mapaFundo[i][j] == 'h') draw_sprite(buffer, tiles[7], j*TAM_TILE, i*TAM_TILE);
             else if (mapaFundo[i][j] == 'i') draw_sprite(buffer, tiles[8], j*TAM_TILE, i*TAM_TILE);
             else if (mapaFundo[i][j] == 'j') draw_sprite(buffer, tiles[9], j*TAM_TILE, i*TAM_TILE);
             else if (mapaFundo[i][j] == 'k') draw_sprite(buffer, tiles[10], j*TAM_TILE, i*TAM_TILE);
             else if (mapaFundo[i][j] == 'l') draw_sprite(buffer, tiles[11], j*TAM_TILE, i*TAM_TILE);
             else if (mapaFundo[i][j] == 'm') draw_sprite(buffer, tiles[12], j*TAM_TILE, i*TAM_TILE);
             else if (mapaFundo[i][j] == 'n') draw_sprite(buffer, tiles[13], j*TAM_TILE, i*TAM_TILE);
             else if (mapaFundo[i][j] == 'o') draw_sprite(buffer, tiles[14], j*TAM_TILE, i*TAM_TILE);
             else if (mapaFundo[i][j] == 'q') draw_sprite(buffer, tiles[15], j*TAM_TILE, i*TAM_TILE);
             else if (mapaFundo[i][j] == 'r') draw_sprite(buffer, tiles[16], j*TAM_TILE, i*TAM_TILE);
             else if (mapaFundo[i][j] == 's') draw_sprite(buffer, tiles[17], j*TAM_TILE, i*TAM_TILE);
             else if (mapaFundo[i][j] == 't') draw_sprite(buffer, tiles[18], j*TAM_TILE, i*TAM_TILE);
             else if (mapaFundo[i][j] == 'u') draw_sprite(buffer, tiles[19], j*TAM_TILE, i*TAM_TILE);
             else if (mapaFundo[i][j] == 'v') draw_sprite(buffer, tiles[20], j*TAM_TILE, i*TAM_TILE);
             else if (mapaFundo[i][j] == 'w') draw_sprite(buffer, tiles[21], j*TAM_TILE, i*TAM_TILE);
             else if (mapaFundo[i][j] == 'x') draw_sprite(buffer, tiles[22], j*TAM_TILE, i*TAM_TILE);
             else if (mapaFundo[i][j] == 'y') draw_sprite(buffer, tiles[23], j*TAM_TILE, i*TAM_TILE);
             else if (mapaFundo[i][j] == 'z') draw_sprite(buffer, tiles[24], j*TAM_TILE, i*TAM_TILE);
             else if (mapaFundo[i][j] == '1') draw_sprite(buffer, tiles[25], j*TAM_TILE, i*TAM_TILE);
             else if (mapaFundo[i][j] == '2') draw_sprite(buffer, tiles[26], j*TAM_TILE, i*TAM_TILE);
             else if (mapaFundo[i][j] == '3') draw_sprite(buffer, tiles[27], j*TAM_TILE, i*TAM_TILE);
             else if (mapaFundo[i][j] == '4') draw_sprite(buffer, tiles[28], j*TAM_TILE, i*TAM_TILE);
             else if (mapaFundo[i][j] == '5') draw_sprite(buffer, tiles[29], j*TAM_TILE, i*TAM_TILE);
             else if (mapaFundo[i][j] == '6') draw_sprite(buffer, tiles[30], j*TAM_TILE, i*TAM_TILE);
             else if (mapaFundo[i][j] == '7') draw_sprite(buffer, tiles[31], j*TAM_TILE, i*TAM_TILE);             
             else if (mapaFundo[i][j] == 'p') draw_sprite(buffer, tiles[32], j*TAM_TILE, i*TAM_TILE);
             else if (mapaFundo[i][j] == '8') draw_sprite(buffer, tiles[34], j*TAM_TILE, i*TAM_TILE);
             else if (mapaFundo[i][j] == '+' && count[0] % 4) draw_sprite(buffer, tiles[33], j*TAM_TILE, i*TAM_TILE);
              
         }
     }

int bloqueado(int x, int y) {
    
    if (mapaFundo[y/TAM_TILE][x/TAM_TILE] == 'a' || mapaFundo[y/TAM_TILE][x/TAM_TILE] == '0' || mapaFundo[y/TAM_TILE][x/TAM_TILE] == '+') return 0;
    return 1;
}

void come_pilula() {
   
    if (mapaFundo[realY/TAM_TILE][realX/TAM_TILE] == '+')
    {
        mapaFundo[realY/TAM_TILE][realX/TAM_TILE] = '0';
        fantasma[0].fugir = SIM;
        fantasma[0].img = fant_fugindo[0];
        count[0] = 0;

        fantasma[1].fugir = SIM;
        fantasma[1].img = fant_fugindo[0];
        count[1] = 0;

        fantasma[2].fugir = SIM;
        fantasma[2].img = fant_fugindo[0];
        count[2] = 0;

        fantasma[3].fugir = SIM;
        fantasma[3].img = fant_fugindo[0];
        count[3] = 0;

        pontuacao += 50;

    }
        
    else if (mapaFundo[realY/TAM_TILE][realX/TAM_TILE] == 'a') { mapaFundo[realY/TAM_TILE][realX/TAM_TILE] = '0'; pontuacao += 10;}

}
