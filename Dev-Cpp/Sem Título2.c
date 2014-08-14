#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <locale.h>

//int ler();
int multiplicar (int a, int b);
int resultado(int result);
main(){
       setlocale(LC_ALL,"Portuguese");
       printf("digite os números para multiplicação\n");
       ler();           
       getch();
       }
ler( int ler1,int ler2){
int ler3;
int ler4;
printf("Digite um número: ");
scanf("%d",&ler3);
printf("Digite outro número: ");
scanf("%d",&ler4);
multiplicar(ler3,ler4);
                     }
       
multiplicar (int a,int b){
int c = a*b;
resultado(c);
                           }
resultado(int result){
printf("O resultado é %d",result);
                      }
