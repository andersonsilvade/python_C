#include <stdio.h>
#include <locale.h>
#include <conio.h>
main(){
       setlocale(LC_ALL, "Portuguese");/*para acentua��o*/
       int chute;
       int certo=100;
       printf("digite o seu chute de 0 a 100: ");
       scanf("%d",&chute);
       while(chute!=certo){
       printf("voc� errou chute novamente: ");
       scanf("%d",&chute);
       }
       if(chute==certo){
                        printf("parab�ns voc� acertou!!!");
                        }
                        getch();
                        }
