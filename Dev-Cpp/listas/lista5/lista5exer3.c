#include<stdio.h>
main(){
       int i=3, j=5;
       int *p;
       int *q;
        p =&i;
        q =&j;
       printf("resposta A\n");
       printf("resultado = p(%d) == i (%d)\n",*p,i);
       printf("\n");
       printf("resposta B\n");
       printf("resultado de *p - *q = %d\n",(*p-*q));
       printf("\n");
      printf("Resposta C\n");
       printf("o resultado de (12 + *p)/(*q)+7 = %d",(12 + *p)/(*q)+7);
       
       getch();
       }
