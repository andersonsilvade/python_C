#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <locale.h>
#include <stdlib.h>
int parimpar(int num);
main(){
       setlocale(LC_ALL,"Portuguese");
       int n;
       printf("Digite um n�mero interio: ");
       scanf("%d",&n);
        parimpar(n);
       if(parimpar(n)==1){
                          printf("N�mero par");
                          }
       else{
            printf("N�mero impar");
            }
       getch();
       }
       
       
int parimpar(int num){
    int ver;
    ver=num%2;
    
    if(ver==0){
               return(1);
               }
    else{
         return(0);
         }
         }
