#include <stdio.h>
main(){
       int v1 = 3;
       int  v2 = 22;
       int *p;
       int *q;
       p = &v1;
       q = p;
       *q = 20;
       printf("v1: %d\n",v1);
       printf("v2: %d\n",v2);
       printf("p: %p\n",p);
       printf("q: %p\n",q);
       printf("conteudo p: %d\n",*p);
       printf("conteudo q: %d\n",*q);
       
       getch();
       }
