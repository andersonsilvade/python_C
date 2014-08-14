#include<stdio.h>
main(){
       int vetor[]={10,20,30,40,50};
       int *pont1,*pont2;
       int i = 100;
       pont1 = &vetor[2];
       printf("%d\n",*pont1);
       printf("%p\n",pont1);
      
       pont2 = &i;
       printf("%d\n",*pont2);
      printf("%p\n",pont2);
       pont2 = pont1;
       printf("%d %d\n",*pont1,*pont2);
       printf("%p %p",pont1,pont2);
      
       getch();
       }
