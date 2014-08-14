#include <conio.h>
#include <stdio.h>
main(){
       int fat;
       int res = fat;
       printf("Digite um numero: ");
       scanf("%d",&fat);
       if(fat>1){
       for(res=fat;res>1;res--){       
                     fat=fat*(res-1);  
                     res--;          
                    
                    }
                      printf("%d",fat);
                    }
                    getch();
                    }
                    
