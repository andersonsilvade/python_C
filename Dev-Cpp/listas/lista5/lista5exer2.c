#include<stdio.h>
main(){
       int num;
       int *pont ;
       printf("Digite um numero: ");
       scanf("%d",&num);
       pont=&num;
       printf("endereco: %p\n",pont);//printa o endereço
       printf("conteudo: %d",*pont);//printa o conteudo
       getch();
       }
