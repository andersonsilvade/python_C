#include <conio.h>
#include <stdio.h>
main(){
       int i = 2;
       int v[]={0,1,2,3,4,};
       printf("v[0]: %d\n",v[i]);
       printf("*(v+i): %d\n",*(v+i));
      
       printf("Endereço\n");
      
       printf("v[0]: %d\n",&v[i]);
       printf ("(v+i): %d\n",(v+i));
       
       getch();
       
       }

