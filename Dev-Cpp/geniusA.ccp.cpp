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
azul();           //CHAMA A FUN��O AZUL
amarelo();        //CHAMA A FUN��O AMARELO
verde();          //CHAMA A FUN��O VERDE
vermelho();       //CHAMA A FUN��O VERMELHO
getch();          //AGUARDA UMA TECLA PARA CONTINUAR
}                //FINALIZA O PROGRAMA



 void azul(){
textbackground(BLUE);               //FUN��O QUE PINTA DE AZUL
printxy(32, 2, "                "); //D� 16 ESPA�OS ENTRE AS ASPAS
printxy(32, 3, "                ");
printxy(32, 4, "                ");  
printxy(32, 5, "                ");
printxy(32, 6, "                ");
printxy(32, 7, "                ");
	  }
void amarelo(){
textbackground(YELLOW);              //FUN��O QUE PINTA DE AMARELO
printxy(16,  8, "                "); //D� 16 ESPA�OS ENTRE AS ASPAS
printxy(16,  9, "                ");
printxy(16, 10, "                ");
printxy(16, 11, "                ");
printxy(16, 12, "                ");
printxy(16, 13, "                ");
         }
void verde(){
textbackground(GREEN);              //FUN��O QUE PINTA DE VERDE
printxy(48,  8,"                "); //D� 16 ESPA�OS ENTRE AS ASPAS
printxy(48,  9,"                ");
printxy(48, 10,"                ");
printxy(48, 11,"                ");
printxy(48, 12,"                ");
printxy(48, 13,"                ");
       }
void vermelho(){
textbackground(RED);                 //FUN��O QUE PINTA DE VERMELHO
printxy(32, 14, "                "); //D� 16 ESPA�OS ENTRE AS ASPAS
printxy(32, 15, "                ");
printxy(32, 16, "                ");
printxy(32, 17, "                ");
printxy(32, 18, "                ");
printxy(32, 19, "                ");
          }
