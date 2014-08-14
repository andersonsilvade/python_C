#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <locale.h>
int potencia(int num,int exp);
main(){
       setlocale(LC_ALL,"Portuguese");
       int base;
       int expo;
       printf("digite um número: ");
       scanf("%d",&base);
       printf("digite seu expoente: ");
       scanf("%d",&expo);
       potencia(base,expo);
       printf("%d elevado a %d é %d",base,expo,potencia(base,expo));
       getch();
       }
       
potencia(int num,int exp){
             if(exp==0){
                        return(1);
                        }
             else{
                  return (num * potencia(num, exp - 1));
                  }
                  }
