#include <conio.h>
#include <stdio.h>
#include <locale.h>
main(){
        setlocale(LC_ALL, "Portuguese");
        char letra;
        int num;
        int num1;
        do{
            printf("digite uma letra para escolha da opera��o matematica: \n");
            printf("(m)ultiplica��o \n (d)ivis�o \n");
            scanf("%c",&letra);
            printf("digite um n�mero: ");
            scanf("%d",&num);
            printf("Digite outro n�mero: ");
            scanf("%d",&num1);
            }while((letra == 'm') || (letra == 'd'));
            switch(letra){
                          case 'm':printf("%d",num*num1);
                          break;
                          case 'd':printf("%5.2f",num/num1);
                          break;
                          }
                          getch();
                          }
