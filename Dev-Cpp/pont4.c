#include<stdio.h>
#include<conio.h>
main (){
       int matriz[3][4];
       int *p;
       int count;
       p=matriz[0];
       
       for(count=0;count<12;count++) {
       printf ("digite um numero: ");
       scanf("%d",&*p);
        p++;
            }
            
        for(count=11;count>=0;count--){
        printf("%d ",*--p);
        }
        
        printf("\n");
        
        p = matriz[0];
        for(count = 0; count<12; count++,p++){
                  printf("%d ",*p);
                  }
        getch();
 
}
