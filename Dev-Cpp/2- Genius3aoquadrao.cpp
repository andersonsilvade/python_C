#include<conio.h>
#include<stdio.h>
#include<conio2.c>
#include<stdlib.h>
#include<time.h>
#include <windows.h>


	 
void azul(){
  textbackground(BLUE);
  printxy(16, 1, "                ");
  printxy(16, 2, "       #        ");
  printxy(16, 3, "      ##        ");
  printxy(16, 4, "       #        ");
  printxy(16, 5, "       #        ");
  printxy(16, 6, "     #####      ");
  printxy(16, 7, "                ");
  }

void verde(){
  textbackground(GREEN);
  printxy(32, 1, "                ");
  printxy(32, 2, "     #####      ");
  printxy(32, 3, "         #      ");
  printxy(32, 4, "     #####      ");
  printxy(32, 5, "     #          ");
  printxy(32, 6, "     #####      ");
  printxy(32, 7, "                ");
  }
  
void amarelo(){
  textbackground(YELLOW);
  printxy(48, 1, "                ");
  printxy(48, 2, "     ######     ");
  printxy(48, 3, "          #     ");
  printxy(48, 4, "       ####     ");
  printxy(48, 5, "          #     ");
  printxy(48, 6, "     ######     ");
  printxy(48, 7, "                ");
  } 
  
void vermelho(){
  textbackground(RED);
  printxy(16, 8,  "                ");
  printxy(16, 9,  "     #    #     ");
  printxy(16, 10, "     #    #     ");
  printxy(16, 11, "     ######     ");
  printxy(16, 12, "          #     ");
  printxy(16, 13, "          #     ");
  printxy(16, 14, "                ");
  }
  
void branco(){
  textbackground(WHITE);
  printxy(32, 8,  "                ");
  printxy(32, 9,  "     ######     ");
  printxy(32, 10, "     #          ");
  printxy(32, 11, "     #####      ");
  printxy(32, 12, "          #     ");
  printxy(32, 13, "     #####      ");
  printxy(32, 14, "                ");
  } 
void marrom(){
  textbackground(BROWN);
  printxy(48, 8,  "                ");
  printxy(48, 9,  "      ####      ");
  printxy(48, 10, "     #          ");
  printxy(48, 11, "     #####      ");
  printxy(48, 12, "     #    #     ");
  printxy(48, 13, "      ####      ");
  printxy(48, 14, "                ");
  } 
  
void azulClaro(){
  textbackground(LIGHT_BLUE);
  printxy(16, 15, "                ");
  printxy(16, 16, "     ######     ");
  printxy(16, 17, "     #    #     ");
  printxy(16, 18, "          #     ");
  printxy(16, 19, "          #     ");
  printxy(16, 20, "          #     ");
  printxy(16, 21, "                ");
  }
  
void verdeClaro(){
  textbackground(LIGHT_GREEN);
  printxy(32, 15, "                ");
  printxy(32, 16, "      ####      ");
  printxy(32, 17, "     #    #     ");
  printxy(32, 18, "      ####      ");
  printxy(32, 19, "     #    #     ");
  printxy(32, 20, "      ####      ");
  printxy(32, 21, "                ");
  } 
  
void magentaClaro(){
  textbackground(LIGHT_MAGENTA);
  printxy(48, 15, "                ");
  printxy(48, 16, "      ####      ");
  printxy(48, 17, "     #    #     ");
  printxy(48, 18, "      #####     ");
  printxy(48, 19, "          #     ");
  printxy(48, 20, "      ####      ");
  printxy(48, 21, "                ");
  } 

void piscaAzul(){
  textbackground(BLACK);
  Beep(400,500);
  printxy(16, 1, "                ");
  printxy(16, 2, "                ");
  printxy(16, 3, "                ");
  printxy(16, 4, "                ");
  printxy(16, 5, "                ");
  printxy(16, 6, "                ");
  printxy(16, 7, "                ");
  wait(0.5);  
  azul();
  }
void piscaVerde(){
  textbackground(BLACK);
  Beep(600,500);
  printxy(32, 1, "                ");
  printxy(32, 2, "                ");
  printxy(32, 3, "                ");
  printxy(32, 4, "                ");
  printxy(32, 5, "                ");
  printxy(32, 6, "                ");
  printxy(32, 7, "                ");
  wait(0.5);
  verde();
  } 
void piscaAmarelo(){
  textbackground(BLACK);
  Beep(800,500);
  printxy(48, 1, "                ");
  printxy(48, 2, "                ");
  printxy(48, 3, "                ");
  printxy(48, 4, "                ");
  printxy(48, 5, "                ");
  printxy(48, 6, "                ");
  printxy(48, 7, "                ");
  wait(0.5);
  amarelo();
  } 
void piscaVermelho(){
  textbackground(BLACK);
  Beep(1000,500);
  printxy(16, 8,  "                ");
  printxy(16, 9,  "                ");
  printxy(16, 10, "                ");
  printxy(16, 11, "                ");
  printxy(16, 12, "                ");
  printxy(16, 13, "                ");
  printxy(16, 14, "                ");
  wait(0.5);
  vermelho();
  } 
void piscaBranco(){
  textbackground(BLACK);
  Beep(1200,500);
  printxy(32, 8,  "                ");
  printxy(32, 9,  "                ");
  printxy(32, 10, "                ");
  printxy(32, 11, "                ");
  printxy(32, 12, "                ");
  printxy(32, 13, "                ");
  printxy(32, 14, "                ");
  wait(0.5);  
  branco();
  }
void piscaMarrom(){
  textbackground(BLACK);
  Beep(1400,500);
  printxy(48, 8,  "                ");
  printxy(48, 9,  "                ");
  printxy(48, 10, "                ");
  printxy(48, 11, "                ");
  printxy(48, 12, "                ");
  printxy(48, 13, "                ");
  printxy(48, 14, "                ");
  wait(0.5);
  marrom();
  } 
void piscaAzulClaro(){
  textbackground(BLACK);
  Beep(1600,500);
  printxy(16, 15, "                ");
  printxy(16, 16, "                ");
  printxy(16, 17, "                ");
  printxy(16, 18, "                ");
  printxy(16, 19, "                ");
  printxy(16, 20, "                ");
  printxy(16, 21, "                ");
  wait(0.5);
  azulClaro();
  } 
void piscaVerdeClaro(){
  textbackground(BLACK);
  Beep(1800,500);
  printxy(32, 15, "                ");
  printxy(32, 16, "                ");
  printxy(32, 17, "                ");
  printxy(32, 18, "                ");
  printxy(32, 19, "                ");
  printxy(32, 20, "                ");
  printxy(32, 21, "                ");
  wait(0.5);
  verdeClaro();
  } 
void piscaMagentaClaro(){
  textbackground(BLACK);
  Beep(2000,500);
  printxy(48, 15, "                ");
  printxy(48, 16, "                ");
  printxy(48, 17, "                ");
  printxy(48, 18, "                ");
  printxy(48, 19, "                ");
  printxy(48, 20, "                ");
  printxy(48, 21, "                ");
  wait(0.5);
  magentaClaro();
  } 


     
int main(){
   
    int retorno = 1, pontuacao = 0, escolha;
    printxy(16, 9, "Vamos comecar a Jogar o SUPER GENIUS?");
    printxy(16, 11, "Se acha que esta preparado aperte 1 e ENTER");
    printxy(16, 12, "Se nao outro numero e ENTER:  ");
    scanf("%i", &escolha);
    system("cls");
    while(escolha!=1){
    printxy(16, 9, "Que medo e esse? Aperta 1 e ENTER logo!  ");
    scanf("%i", &escolha);
    
    if (escolha == 1){
                            printxy(16, 11, "Boa escolha, bora jogar!");
                            wait(2.0);
                      }
    }
    system("cls");
       
 
 while(retorno==1){
 azul();
 amarelo();
 verde();
 branco();
 vermelho();
 marrom();
 azulClaro();      
 verdeClaro();
 magentaClaro();
 //setas();
 
 int nivel=1, aleatorio, cor;
 int vetor[nivel-1], i, j, sair=0;
 
 do{
     srand(time(NULL));
     aleatorio = rand() % 9; //antes era 4 
   
  vetor[nivel-1] = aleatorio;
  
  for(i=0; i<9; i++){
  wait(0.5);
   if(vetor[i]==1){
    piscaAzul();   
         }
   if(vetor[i]==2){
    piscaVerde();   
         }
   if(vetor[i]==3){
    piscaAmarelo();   
         }
   if(vetor[i]==4){
    piscaVermelho();   
         } 
   if(vetor[i]==5){
    piscaBranco();   
         }    
   if(vetor[i]==6){
    piscaMarrom();   
         }    
   if(vetor[i]==7){
    piscaAzulClaro();   
         }   
   if(vetor[i]==8){
    piscaVerdeClaro();   
         }  
   if(vetor[i]==9){
    piscaMagentaClaro();   
         }          
     }
  for(j=0; j<nivel; j++){
   textbackground(BLACK);
   printxy(36, 23, "COR : ");
   scanf("%i", &cor);
   printxy(42, 23, "   ");
   if(vetor[j]==cor){
    pontuacao = pontuacao + 10;
    gotoxy(16, 22);//antes era (4, 4)
    printf("PONTUACAO : %i", pontuacao);
    gotoxy(16, 23);//antes era (4, 5)
    printf("NIVEL     : %i", (nivel));
         }
   if(vetor[j]!= cor){
    j = nivel;
    sair = 1;   
        } 
     }     
  nivel++;
}while(sair != 1);
   system("cls");
   printxy(33, 9, "VOCE PERDEU!!!");
   gotoxy(33, 11);
   printf("PONTUACAO : %i", pontuacao);
   gotoxy(33, 12);
   printf("NIVEL     : %d", nivel);
   gotoxy(33,14);
   printf("Tecla Enter");
   getch();
   
   system("cls");
   printxy(32, 8,  "JOGAR NOVAMENTE?");
   printxy(32, 9,  "    1 - SIM");
   printxy(32, 10, "    2 - NAO");
   printxy(32, 12, "    OPCAO : ");
   scanf("%i", &retorno);
   system("cls");
   nivel = 1;
   pontuacao = 0;
  
}
  }      