#include<stdio.h>
#include<conio.h>
main(){
       float v[] = {1.0,2.0,3.0,4.0,5.0,6.0,7.0,8.0,9.0};
       int i;
       float *p;
       for(i=0;i<9;i++){
         printf("%.1f ",v[i]);
         }
         printf("\n");
       
       for (i=0;i<9;i++){
           printf("%.1f ",*(v+i));
           }
           printf("\n");
       for (i=0,p=v;i<9;i++,p++){
           printf("%.1f ",*p);
           }
           getch();
           }
