#include <stdio.h>
main(){
       int a;
       printf("digite um numero: ");
       scanf("%d",&a);
          
       int c=(a%2)==0?1:0;
       if (c==1){
                 
       printf("par");
       }
       else{
            printf("impar");
            }
       getch();
       }
