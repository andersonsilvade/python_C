#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <locale.h>
int fatorial(int n);
main(){
       setlocale(LC_ALL,"Portuguese");
       int n1;
       printf("digite o n�mero inteiro positivo: ");
       scanf("%d",&n1);
       if(n1>=0){
                 fatorial(n1);
                 printf("o fatorial de %d � %d ",n1,fatorial(n1));
                 }
       else{
            printf("n�mero inv�lido!!!!");
            }
            getch();
            }
fatorial(int n){
             if (n==0 || n==1){
                       return (1);
                       }
             else{
                  return n*fatorial(n-1);
                  }
                  }
