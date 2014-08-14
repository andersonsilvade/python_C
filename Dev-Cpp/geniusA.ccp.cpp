#include<conio.h>
#include<stdio.h>
#include<conio2.h>
#include<stdlib.h>
#include<time.h>

void azul();
void amarelo();
void verde();
void vermelho();

int main(){        //INICIALIZA O PROGRAMA
azul();           //CHAMA A FUNÇÃO AZUL
amarelo();        //CHAMA A FUNÇÃO AMARELO
verde();          //CHAMA A FUNÇÃO VERDE
vermelho();       //CHAMA A FUNÇÃO VERMELHO
getch();          //AGUARDA UMA TECLA PARA CONTINUAR
}                //FINALIZA O PROGRAMA



 void azul(){
textbackground(BLUE);               //FUNÇÃO QUE PINTA DE AZUL
printxy(32, 2, "                "); //DÊ 16 ESPAÇOS ENTRE AS ASPAS
printxy(32, 3, "                ");
printxy(32, 4, "                ");  
printxy(32, 5, "                ");
printxy(32, 6, "                ");
printxy(32, 7, "                ");
	  }
void amarelo(){
textbackground(YELLOW);              //FUNÇÃO QUE PINTA DE AMARELO
printxy(16,  8, "                "); //DÊ 16 ESPAÇOS ENTRE AS ASPAS
printxy(16,  9, "                ");
printxy(16, 10, "                ");
printxy(16, 11, "                ");
printxy(16, 12, "                ");
printxy(16, 13, "                ");
         }
void verde(){
textbackground(GREEN);              //FUNÇÃO QUE PINTA DE VERDE
printxy(48,  8,"                "); //DÊ 16 ESPAÇOS ENTRE AS ASPAS
printxy(48,  9,"                ");
printxy(48, 10,"                ");
printxy(48, 11,"                ");
printxy(48, 12,"                ");
printxy(48, 13,"                ");
       }
void vermelho(){
textbackground(RED);                 //FUNÇÃO QUE PINTA DE VERMELHO
printxy(32, 14, "                "); //DÊ 16 ESPAÇOS ENTRE AS ASPAS
printxy(32, 15, "                ");
printxy(32, 16, "                ");
printxy(32, 17, "                ");
printxy(32, 18, "                ");
printxy(32, 19, "                ");
          }
