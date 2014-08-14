#include "astar.h"

elemento listaAberta[TAM_LISTA];
elemento listaFechada[TAM_LISTA];

int manhattan(int x_ini, int y_ini, int x_fin, int y_fin) {
    
    int mod_x = 1, mod_y = 1;
    
    if (x_ini > x_fin) mod_x = -1;
    if (y_ini > y_fin) mod_y = -1;
    
    return (((x_fin - x_ini) * mod_x) + ((y_fin - y_ini) * mod_y)) * 10;

}

void zera_listas() {
     
     int i;
     
     for (i = 0; i < TAM_LISTA; i++) {
         listaAberta[i].vazio = SIM;
         listaFechada[i].vazio = SIM;
         }
    
}

void adiciona_aberta(elemento elemAux) {
     
     int i;

     for (i = 0; i < TAM_LISTA; i++) {
         if (listaAberta[i].vazio == SIM) {
            listaAberta[i] = elemAux;
            listaAberta[i].vazio = NAO;
            break;
            }
         }          

     }

void adiciona_fechada(elemento elemAux) {
     
     int i;

     for (i = 0; i < TAM_LISTA; i++) {
         if (listaFechada[i].vazio == SIM) {
            listaFechada[i] = elemAux;
            listaFechada[i].vazio = NAO;
            break;
            }
         }          

     }


int menor_heu() {
    
    int i,menor,indice;
    
    menor = 9999;

    for (i = TAM_LISTA-1; i >= 0; i--) {
        if (listaAberta[i].vazio == NAO) {
           if (listaAberta[i].heu <= menor) {
              menor = listaAberta[i].heu;
              indice = i;
              }
        }

    }
    
    return indice;

}

int esta_fechada(int x, int y) {

    int i;

     for (i = 0; i < TAM_LISTA; i++) {
         if (listaFechada[i].vazio == NAO) {
            if (x == listaFechada[i].x && y == listaFechada[i].y) return i;
         }
     }

     return -1;

}

int esta_aberta(int x, int y) {

    int i;

     for (i = 0; i < TAM_LISTA; i++) {
         if (listaAberta[i].vazio == NAO) {
            if (x == listaAberta[i].x && y == listaAberta[i].y) return i;
         }
     }

     return -1;

}

void a_star(int x_ini, int y_ini, int x_fin, int y_fin, s_fantasma *fant_aux) {
     
     elemento atualElemento, elemAux;
     int      atualIndice;
     int      i, cont, aux_x, aux_y;

     zera_listas();

     //Adiciona o quadrado inicial na lista aberta
     listaAberta[0].x = x_ini;
     listaAberta[0].y = y_ini;
     listaAberta[0].viz = 0;
     listaAberta[0].man = manhattan(x_ini, y_ini, x_fin, y_fin);
     listaAberta[0].heu = listaAberta[0].man + listaAberta[0].viz;
     listaAberta[0].vazio = NAO;
     
     while(1) {
              
              //Acha o quadrado com menor H na lista aberta e faz com que
              //o quadrado atual seja ele
              atualIndice = menor_heu();
              atualElemento = listaAberta[atualIndice];                    

              //Mover o quadrado atual para a lista fechada
              listaAberta[atualIndice].vazio = SIM;
              adiciona_fechada(atualElemento);
              if (atualElemento.x == x_fin && atualElemento.y == y_fin) break;

              for (i = 0; i < 4; i++) {
                  
                  if (i == 0) { aux_x = 0; aux_y = 1; }
                  if (i == 1) { aux_x = 1; aux_y = 0; }
                  if (i == 2) { aux_x = 0; aux_y = -1; }
                  if (i == 3) { aux_x = -1; aux_y = 0; }

                  
                  if (bloqueado((atualElemento.x+aux_x)*TAM_TILE,(atualElemento.y+aux_y)*TAM_TILE) == 0 && esta_fechada(atualElemento.x+aux_x, atualElemento.y+aux_y) == -1)
                  {
                     if (esta_aberta(atualElemento.x+aux_x, atualElemento.y+aux_y) == -1)
                     {
                        elemAux.x = atualElemento.x+aux_x;
                        elemAux.y = atualElemento.y+aux_y;
                        elemAux.viz = atualElemento.viz + 10;
                        elemAux.man = manhattan(elemAux.x, elemAux.y, x_fin, y_fin);
                        elemAux.vazio = NAO;
                        elemAux.heu = elemAux.man + elemAux.viz;
                        elemAux.pai_x = atualElemento.x;
                        elemAux.pai_y = atualElemento.y;
                        adiciona_aberta(elemAux);                    
                     }
                     else
                     {
                         int atual_aux;
                         atual_aux = esta_aberta(atualElemento.x+aux_x, atualElemento.y+aux_y);
                         elemAux = listaAberta[atual_aux];
                    
                         if (atualElemento.viz + 10 < elemAux.viz)
                         {
                            listaAberta[atual_aux].viz = atualElemento.viz + 10;
                            listaAberta[atual_aux].heu = listaAberta[atual_aux].man + listaAberta[atual_aux].viz;
                            listaAberta[atual_aux].pai_x = atualElemento.x;
                            listaAberta[atual_aux].pai_y = atualElemento.y;
                         }
                     }                  
                  
                  }
              }

     }
     
     cont = 0;
     for (i = 0; i < 100; i++) {
     
     if (atualElemento.x == x_ini && atualElemento.y == y_ini) break; 
        cont++;
        atualElemento = listaFechada[esta_fechada(atualElemento.pai_x, atualElemento.pai_y)];
     }

     atualElemento = listaFechada[esta_fechada(x_fin,y_fin)];

     for (i = cont-1; i >= 0; i--) {
     
         if (atualElemento.x == x_ini && atualElemento.y == y_ini) break; 

         fant_aux->listaCaminho[i].x = atualElemento.x;
         fant_aux->listaCaminho[i].y = atualElemento.y;
         fant_aux->listaCaminho[i].vazio = NAO;

         atualElemento = listaFechada[esta_fechada(atualElemento.pai_x, atualElemento.pai_y)];
     }
     
}
