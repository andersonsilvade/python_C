#include<stdio.h>
main(){
       int i;
       int vint[5];
       int *pvint;
       
       for(i=0;i<5;i++,*pvint++){
       printf ("vetor[%d]:",i);
       scanf("%d",&vint[i]);
       pvint = &vint[i];
       }
       
       printf("Valores apontados pelo ponteiro \n");
       
       for(i=0;i<5;i++){
       printf("%d\n",*--pvint);
       }
       getch();
       }
