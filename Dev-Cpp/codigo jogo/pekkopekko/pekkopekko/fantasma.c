#include "fantasma.h"

s_fantasma fantasma[MAX_FANTASMA];

volatile int  count[4];
BITMAP        *fant_fugindo[2];
BITMAP        *fant_olhos;
BITMAP        *fant_normal[4];

s_fantasma cria_fantasma(int x, int y, estado fantEstado, direcao fantDirecao, acao fantAcao, int reg) {
           s_fantasma aux;
           
           aux.x = x;
           aux.y = y;
           
           aux.realX = x;
           aux.realY = y+3;

           aux.velocidade = 2;
           
           aux.fantEstado = fantEstado;
           aux.fantDirecao = fantDirecao;
           aux.fantAcao = fantAcao;
           aux.movimentando = 1;
           
           aux.atualCaminho = 0;
           aux.regulariza = reg;
           aux.tunel_lado = 0;           
           aux.fugir = NAO;

           return aux;
           }

void desenha_fantasma() {

     int i;
     
     for (i = 0; i < MAX_FANTASMA; i++)
         draw_sprite(buffer, fantasma[i].img, fantasma[i].x, fantasma[i].y);
     
     }

int atualiza_fantasma() {

     int i;
     
     for (i = 0; i < MAX_FANTASMA; i++)
     {
      
      if (fantasma[i].fantEstado == parado) {
   
      if (fantasma[i].listaCaminho[fantasma[i].atualCaminho].vazio == NAO)
      {
       if (fantasma[i].realX / TAM_TILE == fantasma[i].listaCaminho[fantasma[i].atualCaminho].x)
          {
           if (fantasma[i].realY / TAM_TILE > fantasma[i].listaCaminho[fantasma[i].atualCaminho].y)
              {
               fantasma[i].fantDirecao = cima;
               fantasma[i].fantEstado = movimento;
              }
           else {
               fantasma[i].fantDirecao = baixo;
               fantasma[i].fantEstado = movimento;
              }

          }
       else {
           if (fantasma[i].realX / TAM_TILE > fantasma[i].listaCaminho[fantasma[i].atualCaminho].x)
              {
               fantasma[i].fantDirecao = esquerda;
               fantasma[i].fantEstado = movimento;
              }
           else {
               fantasma[i].fantDirecao = direita;
               fantasma[i].fantEstado = movimento;
              }
          }
      
      }
      else fantasma[i].movimentando = 0;
      }
     
     }

}

void movimento_fantasma() {

     int i;     

     for (i = 0; i < MAX_FANTASMA; i++)
     {
      if (fantasma[i].fantEstado == movimento)
         {
          if (fantasma[i].fantDirecao == esquerda) {
             fantasma[i].realX -= fantasma[i].velocidade;
             fantasma[i].x -= fantasma[i].velocidade;
             if (fantasma[i].realX % TAM_TILE == 0) {
                fantasma[i].atualCaminho++;
                fantasma[i].fantEstado = parado;
                }
             }

          if (fantasma[i].fantDirecao == direita) {
             fantasma[i].realX += fantasma[i].velocidade;
             fantasma[i].x += fantasma[i].velocidade;
             if (fantasma[i].realX % TAM_TILE == 0) {
                fantasma[i].atualCaminho++;
                fantasma[i].fantEstado = parado;
                }
             }

          if (fantasma[i].fantDirecao == cima) {
             fantasma[i].realY -= fantasma[i].velocidade;
             fantasma[i].y -= fantasma[i].velocidade;
             if (fantasma[i].realY % TAM_TILE == 0) {
                fantasma[i].atualCaminho++;
                fantasma[i].fantEstado = parado;
                }
             }

          if (fantasma[i].fantDirecao == baixo) {
             fantasma[i].realY += fantasma[i].velocidade;
             fantasma[i].y += fantasma[i].velocidade;
             if (fantasma[i].realY % TAM_TILE == 0) {
                fantasma[i].atualCaminho++;
                fantasma[i].fantEstado = parado;
                }
             }

         }

     }

}

void regularizar(s_fantasma *fant_aux) {

     if (fant_aux->regulariza == 1) {
         if(fant_aux->x != 93) {
         fant_aux->x--;
         }
         else { fant_aux->realX = 96; fant_aux->realY = 112; fant_aux->regulariza = 0; }
     }

     if (fant_aux->regulariza == 2) {
         if(fant_aux->y != 109) {
         fant_aux->y--;
         }
         else fant_aux->regulariza = 1;
     }

     if (fant_aux->regulariza == 3) {
         if(fant_aux->x != 105) {
         fant_aux->x++;
         }
         else fant_aux->regulariza = 2;
     }

     if (fant_aux->regulariza == 4) {
         if(fant_aux->x != 105) {
         fant_aux->x--;
         }
         else fant_aux->regulariza = 2;
     }


}

void mover_lado(s_fantasma *fant_aux, direcao dir) {

	int i;
	
	if (dir == esquerda) {
	
	for	(i = 1; i < 100; i++) {
		
		if(bloqueado(fant_aux->realX-(i*TAM_TILE), fant_aux->realY) == 0) {
			
			fant_aux->listaCaminho[i-1].x = (fant_aux->realX-(i*TAM_TILE))/TAM_TILE;
     		fant_aux->listaCaminho[i-1].y = fant_aux->realY/TAM_TILE;
			fant_aux->listaCaminho[i-1].vazio = NAO;
			fant_aux->movimentando = 1;
			
			}
		else break;
		
		}
	
	}

	if (dir == direita) {
	
	for	(i = 1; i < 100; i++) {
		
		if(bloqueado(fant_aux->realX+(i*TAM_TILE), fant_aux->realY) == 0) {
			
			fant_aux->listaCaminho[i-1].x = (fant_aux->realX+(i*TAM_TILE))/TAM_TILE;
     		fant_aux->listaCaminho[i-1].y = fant_aux->realY/TAM_TILE;
			fant_aux->listaCaminho[i-1].vazio = NAO;
			fant_aux->movimentando = 1;

			}
		else break;
		
		}
	
	}
	
	if (dir == cima) {
	
	for	(i = 1; i < 100; i++) {
		
		if(bloqueado(fant_aux->realX, fant_aux->realY-(i*TAM_TILE)) == 0) {
			
			fant_aux->listaCaminho[i-1].x = fant_aux->realX/TAM_TILE;
     		fant_aux->listaCaminho[i-1].y = (fant_aux->realY-(i*TAM_TILE))/TAM_TILE;
			fant_aux->listaCaminho[i-1].vazio = NAO;
			fant_aux->movimentando = 1;
			
			}
		else break;
		
		}
	
	}
	
	if (dir == baixo) {
	
	for	(i = 1; i < 100; i++) {
		
		if(bloqueado(fant_aux->realX, fant_aux->realY+(i*TAM_TILE)) == 0) {
			
			fant_aux->listaCaminho[i-1].x = fant_aux->realX/TAM_TILE;
     		fant_aux->listaCaminho[i-1].y = (fant_aux->realY+(i*TAM_TILE))/TAM_TILE;
			fant_aux->listaCaminho[i-1].vazio = NAO;
			fant_aux->movimentando = 1;
			
			}
		else break;
		
		}
	
	}
	
}

int verifica_colisao()
{
    int i;

    for (i = 0; i <= 3; i++)
    if (colisao(fantasma[i].realX, fantasma[i].realY, realX, realY) == SIM)
    {
        if (fantasma[i].fugir == SIM)
        {
            fantasma[i].fugir = 3;
            fantasma[i].img = fant_olhos;
            pontuacao += 200;
        }
        else if (fantasma[i].fugir == NAO)
        {
            pac_loose = SIM;
            
            if (indice[0] == 100)
            {
                if (vidas >= 2) {
                
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
                
                vidas--;
                
                return 0;
                }
                else perdeu();
            }
            
            indice[0]++;
        }
    }
    
    
}

void aumenta_fant0()
{
     count[0]++;
} END_OF_FUNCTION (aumenta_fant0);

void aumenta_fant1()
{
     count[1]++;
} END_OF_FUNCTION (aumenta_fant1);
void aumenta_fant2()
{
     count[2]++;
} END_OF_FUNCTION (aumenta_fant2);
void aumenta_fant3()
{
     count[3]++;
} END_OF_FUNCTION (aumenta_fant3);

void zera_caminho(s_fantasma *fant_aux) {
     
     int i;
     
     for (i = 0; i < TAM_LISTA; i++) {
                  fant_aux->atualCaminho = 0;
                  fant_aux->listaCaminho[i].x = -1;
                  fant_aux->listaCaminho[i].y = -1;
                  fant_aux->listaCaminho[i].vazio = SIM;
         }
     
     }
     
int adiciona_xy(s_fantasma *fant_aux, int x, int y) {
     
     int i;
     
     for (i = 0; i < TAM_LISTA; i++) {
     
         if (fant_aux->listaCaminho[i].vazio == SIM) {
            
            fant_aux->listaCaminho[i].x = x;
            fant_aux->listaCaminho[i].y = y;
            fant_aux->listaCaminho[i].vazio = NAO;
            
            return 0;            
            }
         
         }
     
     
     }

void andar_aleatorio(s_fantasma *fant_aux) {
     
     int i, mov, cont;
     
     if(fant_aux->realX % TAM_TILE == 0 && fant_aux->realY % TAM_TILE == 0) {

     i = rand()%4;
     mov = rand()%2;
     cont = rand()%2;

       if (fant_aux->fantDirecao == esquerda) {

          if (cont == 1) {

             if (mov == 0 && bloqueado(fant_aux->realX, fant_aux->realY-TAM_TILE) == 0)
                {
                 zera_caminho(fant_aux);
                 mover_lado(fant_aux, cima);
                }
             if (mov == 1 && bloqueado(fant_aux->realX, fant_aux->realY+TAM_TILE) == 0)
                {
                 zera_caminho(fant_aux);
                 mover_lado(fant_aux, baixo);
                }
          }
       
          else if (fant_aux->fantEstado == parado) { zera_caminho(fant_aux); mover_lado(fant_aux, esquerda); }
          
       
      
       }

       if (fant_aux->fantDirecao == direita) {

          if (cont == 1) {

             if (mov == 0 && bloqueado(fant_aux->realX, fant_aux->realY-TAM_TILE) == 0)
                {
                 zera_caminho(fant_aux);
                 mover_lado(fant_aux, cima);
                }
             if (mov == 1 && bloqueado(fant_aux->realX, fant_aux->realY+TAM_TILE) == 0)
                {
                 zera_caminho(fant_aux);
                 mover_lado(fant_aux, baixo);
                }
          }
          
          else if (fant_aux->fantEstado == parado) { zera_caminho(fant_aux); mover_lado(fant_aux, direita); }
       
       }

       if (fant_aux->fantDirecao == cima) {

          if (cont == 1) {

             if (mov == 0 && bloqueado(fant_aux->realX+TAM_TILE, fant_aux->realY) == 0)
                {
                 zera_caminho(fant_aux);
                 mover_lado(fant_aux, direita);
                }
             if (mov == 1 && bloqueado(fant_aux->realX-TAM_TILE, fant_aux->realY) == 0)
                {
                 zera_caminho(fant_aux);
                 mover_lado(fant_aux, esquerda);
                }
          }
       
          else if (fant_aux->fantEstado == parado) { zera_caminho(fant_aux); mover_lado(fant_aux, cima); }
       
       }     

       if (fant_aux->fantDirecao == baixo) {

          if (cont == 1) {

             if (mov == 0 && bloqueado(fant_aux->realX+TAM_TILE, fant_aux->realY) == 0)
                {
                 zera_caminho(fant_aux);
                 mover_lado(fant_aux, direita);
                }
             if (mov == 1 && bloqueado(fant_aux->realX-TAM_TILE, fant_aux->realY) == 0)
                {
                 zera_caminho(fant_aux);
                 mover_lado(fant_aux, esquerda);
                }
          }
       
          else if (fant_aux->fantEstado == parado) { zera_caminho(fant_aux); mover_lado(fant_aux, baixo); }
       
       }     

     }
     
   
}


void atualiza_estados() {

     int i;
     
     i = rand()%15;
     i *= 10;

     //fantasma 0
     if (fantasma[0].regulariza == 0 && fantasma[0].fantAcao != tunel)
     {
         if (fantasma[0].fantAcao == vagar && count[0] >= 120+i) 
         {
             fantasma[0].fantAcao = perseguir;
             count[0] = 0;
         }
         if (fantasma[0].fantAcao == perseguir && count[0] >= 40)
         {
             fantasma[0].fantAcao = vagar;
             count[0] = 0;
         }

         if (fantasma[0].realX == 216 && fantasma[0].realY == 136) { fantasma[0].fantAcao = tunel; fantasma[0].tunel_lado = 1; }
         if (fantasma[0].realX == 8 && fantasma[0].realY == 136) { fantasma[0].fantAcao = tunel; fantasma[0].tunel_lado = 2; }
         
         if (fantasma[0].fugir == 3)
         {
             zera_caminho(&fantasma[0]);
             a_star(fantasma[0].realX/8, fantasma[0].realY/8, 104/8, 112/8, &fantasma[0]);
         
             if (fantasma[0].realX == 104 && fantasma[0].realY == 112)
             {
                 fantasma[0].fugir = NAO;
                 fantasma[0].fantAcao = vagar;
                 count[0] = 0;
                 fantasma[0].img = fant_normal[0];
             }
         }
         else if (fantasma[0].fugir == SIM)
         {
             andar_aleatorio(&fantasma[0]);

             if (count[0] >= 40)
             {
                 if (count[0] % 4 == 0) {
                 fantasma[0].img = fant_fugindo[0];
                 }
                 else fantasma[0].img = fant_fugindo[1];
             }
             if (count[0] >= 60)
             {
                 fantasma[0].fugir = NAO;
                 fantasma[0].fantAcao = vagar;
                 count[0] = 0;
                 fantasma[0].img = fant_normal[0];
             }

         }

         if (fantasma[0].fantAcao == perseguir && (fantasma[0].realX % TAM_TILE == 0 && fantasma[0].realY % TAM_TILE == 0)) 
         {
             if (pacTunel == 0 && fantasma[0].fugir == NAO) {
             zera_caminho(&fantasma[0]);
             a_star(fantasma[0].realX/8, fantasma[0].realY/8, realX/8, realY/8, &fantasma[0]); }
             else fantasma[0].fantAcao = vagar;
         }
         else if (fantasma[0].fantAcao == vagar)
         {
             if (fantasma[0].fugir == NAO)
             andar_aleatorio(&fantasma[0]);     
         }
     }
     else 
     if (fantasma[0].fantAcao == tunel) {

         if (fantasma[0].tunel_lado == 1) {
             fantasma[0].x++;
             fantasma[0].realX++;

             if (fantasma[0].realX > 230) {
                 fantasma[0].realX = -17;
                 fantasma[0].x = -20;
             }

             if (fantasma[0].realX == 16) {
                 fantasma[0].realX = 16;
                 fantasma[0].x = 13;
                 fantasma[0].fantAcao = vagar;   
                 fantasma[0].tunel_lado = 0;
             }

         }

         if (fantasma[0].tunel_lado == 2) {
             fantasma[0].x--;
             fantasma[0].realX--;

             if (fantasma[0].realX < -7) {
                 fantasma[0].realX = 249;
                 fantasma[0].x = 246;
             }

             if (fantasma[0].realX == 208) {
                 fantasma[0].realX = 208;
                 fantasma[0].x = 205;
                 fantasma[0].fantAcao = vagar;
                 fantasma[0].tunel_lado = 0;
             }

         }

     }


     //fantasma 1
     if (fantasma[1].regulariza == 0 && fantasma[1].fantAcao != tunel)
     {
         if (fantasma[1].fantAcao == vagar && count[1] >= 200+i && pacTunel == 0) 
         {
             fantasma[1].fantAcao = perseguir;
             count[1] = 0;
         }
         if (fantasma[1].fantAcao == perseguir && count[1] >= 50)
         {
             fantasma[1].fantAcao = vagar;
             count[1] = 0;
         }

         if (fantasma[1].realX == 216 && fantasma[1].realY == 136) { fantasma[1].fantAcao = tunel; fantasma[1].tunel_lado = 1; }
         if (fantasma[1].realX == 8 && fantasma[1].realY == 136) { fantasma[1].fantAcao = tunel; fantasma[1].tunel_lado = 2; }
         
         if (fantasma[1].fugir == 3)
         {
             zera_caminho(&fantasma[1]);
             a_star(fantasma[1].realX/8, fantasma[1].realY/8, 104/8, 112/8, &fantasma[1]);
         
             if (fantasma[1].realX == 104 && fantasma[1].realY == 112)
             {
                 fantasma[1].fugir = NAO;
                 fantasma[1].fantAcao = vagar;
                 count[1] = 0;
                 fantasma[1].img = fant_normal[1];
             }
         }         
         else if (fantasma[1].fugir == SIM)
         {
             andar_aleatorio(&fantasma[1]);

             if (count[1] >= 40)
             {
                 if (count[0] % 4 == 0) {
                 fantasma[1].img = fant_fugindo[0];
                 }
                 else fantasma[1].img = fant_fugindo[1];
             }
             if (count[1] >= 60)
             {
                 fantasma[1].fugir = NAO;
                 fantasma[1].fantAcao = vagar;
                 count[1] = 0;
                 fantasma[1].img = fant_normal[1];
             }

         }
         
         if (fantasma[1].fantAcao == perseguir && (fantasma[1].realX % TAM_TILE == 0 && fantasma[1].realY % TAM_TILE == 0)) 
         {
             if (pacTunel == 0 && fantasma[1].fugir == NAO) {
             zera_caminho(&fantasma[1]);
             a_star(fantasma[1].realX/8, fantasma[1].realY/8, realX/8, realY/8, &fantasma[1]); }
             else fantasma[1].fantAcao = vagar;
         }
         else if (fantasma[1].fantAcao == vagar)
         {
             if (fantasma[1].fugir == NAO)
             andar_aleatorio(&fantasma[1]);
         }
     }
     else 
     if (fantasma[1].fantAcao == tunel) {

         if (fantasma[1].tunel_lado == 1) {
             fantasma[1].x++;
             fantasma[1].realX++;

             if (fantasma[1].realX > 230) {
                 fantasma[1].realX = -17;
                 fantasma[1].x = -20;
             }

             if (fantasma[1].realX == 16) {
                 fantasma[1].realX = 16;
                 fantasma[1].x = 13;
                 fantasma[1].fantAcao = vagar;
                 fantasma[1].tunel_lado = 0;
             }

         }

         if (fantasma[1].tunel_lado == 2) {
             fantasma[1].x--;
             fantasma[1].realX--;

             if (fantasma[1].realX < -7) {
                 fantasma[1].realX = 249;
                 fantasma[1].x = 246;
             }

             if (fantasma[1].realX == 208) {
                 fantasma[1].realX = 208;
                 fantasma[1].x = 205;
                 fantasma[1].fantAcao = vagar;
                 fantasma[1].tunel_lado = 0;
             }

         }

     }

     
     //fantasma 2
     if (fantasma[2].regulariza == 0 && fantasma[2].fantAcao != tunel)
     {
         if (fantasma[2].fantAcao == vagar && count[2] >= 400+i && pacTunel == 0) 
         {
             fantasma[2].fantAcao = perseguir;
             count[2] = 0;
         }
         if (fantasma[2].fantAcao == perseguir && count[2] >= 70)
         {
             fantasma[2].fantAcao = vagar;
             count[2] = 0;
         }

         if (fantasma[2].realX == 216 && fantasma[2].realY == 136) { fantasma[2].fantAcao = tunel; fantasma[2].tunel_lado = 1; }
         if (fantasma[2].realX == 8 && fantasma[2].realY == 136) { fantasma[2].fantAcao = tunel; fantasma[2].tunel_lado = 2; }
         
         if (fantasma[2].fugir == 3)
         {
             zera_caminho(&fantasma[2]);
             a_star(fantasma[2].realX/8, fantasma[2].realY/8, 104/8, 112/8, &fantasma[2]);
         
             if (fantasma[2].realX == 104 && fantasma[2].realY == 112)
             {
                 fantasma[2].fugir = NAO;
                 fantasma[2].fantAcao = vagar;
                 count[2] = 0;
                 fantasma[2].img = fant_normal[2];
             }
         }         
         else if (fantasma[2].fugir == SIM)
         {
             andar_aleatorio(&fantasma[2]);

             if (count[2] >= 40)
             {
                 if (count[0] % 4 == 0) {
                 fantasma[2].img = fant_fugindo[0];
                 }
                 else fantasma[2].img = fant_fugindo[1];
             }
             if (count[2] >= 60)
             {
                 fantasma[2].fugir = NAO;
                 fantasma[2].fantAcao = vagar;
                 count[2] = 0;
                 fantasma[2].img = fant_normal[2];
             }

         }
         
         if (fantasma[2].fantAcao == perseguir && (fantasma[2].realX % TAM_TILE == 0 && fantasma[2].realY % TAM_TILE == 0)) 
         {
             if (pacTunel == 0 && fantasma[2].fugir == NAO) {
             zera_caminho(&fantasma[2]);
             a_star(fantasma[2].realX/8, fantasma[2].realY/8, realX/8, realY/8, &fantasma[2]); }
             else fantasma[2].fantAcao = vagar;
         }
         else if (fantasma[2].fantAcao == vagar)
         {
             if (fantasma[2].fugir == NAO)
             andar_aleatorio(&fantasma[2]);
         }
     }
     else 
     if (fantasma[2].fantAcao == tunel) {

         if (fantasma[2].tunel_lado == 1) {
             fantasma[2].x++;
             fantasma[2].realX++;

             if (fantasma[2].realX > 230) {
                 fantasma[2].realX = -17;
                 fantasma[2].x = -20;
             }

             if (fantasma[2].realX == 16) {
                 fantasma[2].realX = 16;
                 fantasma[2].x = 13;
                 fantasma[2].fantAcao = vagar;
                 fantasma[2].tunel_lado = 0;
             }

         }

         if (fantasma[2].tunel_lado == 2) {
             fantasma[2].x--;
             fantasma[2].realX--;

             if (fantasma[2].realX < -7) {
                 fantasma[2].realX = 249;
                 fantasma[2].x = 246;
             }

             if (fantasma[2].realX == 208) {
                 fantasma[2].realX = 208;
                 fantasma[2].x = 205;
                 fantasma[2].fantAcao = vagar;
                 fantasma[2].tunel_lado = 0;
             }

         }

     }

     //fantasma 3
     if (fantasma[3].regulariza == 0 && fantasma[3].fantAcao != tunel)
     {
         if (fantasma[3].realX == 216 && fantasma[3].realY == 136) { fantasma[3].fantAcao = tunel; fantasma[3].tunel_lado = 1; }
         if (fantasma[3].realX == 8 && fantasma[3].realY == 136) { fantasma[3].fantAcao = tunel; fantasma[3].tunel_lado = 2; }

         if (fantasma[3].fugir == NAO)
         andar_aleatorio(&fantasma[3]);
     }
     else 
     if (fantasma[3].fantAcao == tunel) {

         if (fantasma[3].tunel_lado == 1) {
             fantasma[3].x++;
             fantasma[3].realX++;

             if (fantasma[3].realX > 230) {
                 fantasma[3].realX = -17;
                 fantasma[3].x = -20;
             }

             if (fantasma[3].realX == 16) {
                 fantasma[3].realX = 16;
                 fantasma[3].x = 13;
                 fantasma[3].fantAcao = vagar;
                 fantasma[3].tunel_lado = 0;
             }

         }

         if (fantasma[3].tunel_lado == 2) {
             fantasma[3].x--;
             fantasma[3].realX--;

             if (fantasma[3].realX < -7) {
                 fantasma[3].realX = 249;
                 fantasma[3].x = 246;
             }

             if (fantasma[3].realX == 208) {
                 fantasma[3].realX = 208;
                 fantasma[3].x = 205;
                 fantasma[3].fantAcao = vagar;
                 fantasma[3].tunel_lado = 0;
             }

         }

     }
     if (fantasma[3].fugir == 3)
     {
         zera_caminho(&fantasma[3]);
         a_star(fantasma[3].realX/8, fantasma[3].realY/8, 104/8, 112/8, &fantasma[3]);
         
         if (fantasma[3].realX == 104 && fantasma[3].realY == 112)
         {
             fantasma[3].fugir = NAO;
             fantasma[3].fantAcao = vagar;
             count[3] = 0;
             fantasma[3].img = fant_normal[3];
         }
     }         
     else if (fantasma[3].fugir == SIM && fantasma[3].fantAcao != tunel)
     {
         andar_aleatorio(&fantasma[3]);

         if (count[3] >= 40)
         {
             if (count[0] % 4 == 0) {
             fantasma[3].img = fant_fugindo[0];
             }
             else fantasma[3].img = fant_fugindo[1];
         }
         
         if (count[3] >= 60)
         {
             fantasma[3].fugir = NAO;
             fantasma[3].fantAcao = vagar;
             count[3] = 0;
             fantasma[3].img = fant_normal[3];
         }

     }
     else if (count[3] > 100) count[3] = 0;

}
