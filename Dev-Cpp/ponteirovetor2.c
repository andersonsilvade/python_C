#include<stdio.h>
#include<conio.h>

main(){
       int vetor[]={10,20,30,40,50,60};
       int *p1;
       p1 = &vetor[2];
       printf("%d \n",*p1);
       p1++;
       printf("%d \n",*p1);
       p1+=2;
       printf("%d \n ",*p1);
       getch();
       }
