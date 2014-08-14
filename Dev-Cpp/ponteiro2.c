#include <stdio.h>
main(){
       int v1 = 3;
       int  v2 = 12;
       int *p;
       int *q;
       p = &v1;
      
       printf("v1: %d\n",v1);
       printf("v2: %d\n",v2);
       printf("p: %p\n",p);
       printf("q: %p\n",q);
       printf("conteudo p: %d\n",*p);
      // printf("conteudo q: %d\n",*q);
       printf("\n#####################\n");
       q = &v2;
       
       printf("\nq: %p\n",q);
       printf("conteudo q: %d\n",*q);
       
        q=p;
       *q = 44;
       printf("\n################\n");
       printf("\nv1: %d\n",v1);
       printf("v2: %d\n",v2);
       printf("q: %p\n",q);
       printf("conteudo q: %d\n",*q);
       
       getch();
       
       }
