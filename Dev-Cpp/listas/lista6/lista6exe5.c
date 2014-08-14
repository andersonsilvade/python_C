#include <stdio.h>
#include <conio.h>
#include <string.h>

 strCmp(char *str1,char *str2){
                        
            
            if ((strlen(str1) == strlen(str2))){
                     return 0;
                     }
            else if((strlen(str1)< strlen(str2))){
                            return -1;
                            }
            else{
                 return 1;
                 }
                 }
                 
main(){
       char str[100];
       char str0[100];
        printf("digite uma String: ");
        gets(str);
        
        printf("digite outra String: ");
        gets(str0);
      
        
        
        strCmp(str,str0);
        
        if((strCmp(str,str0)) == 0){
                  printf("String iguais!!!"); 
                  }
                                  
       else if((strCmp(str,str0)) < 0){
                  printf("primeira String eh menor que a segunda!!");
                  }
                  
        else{
             printf("primeira String eh maior que a segunda!!!");
             }
             
             getch();
             }
            
