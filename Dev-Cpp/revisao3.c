#include<stdio.h>
#include<conio.h>
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
	   char str3[20];
	   char str4[20];
	   printf("digite uma palavra: ");
	   scanf("%s",&str3);
	   printf("digite outra palavra: ");
	   scanf("%s",&str4);
	   strCmp(str3,str4);
	   if((strCmp(str3,str4))==0){
	   			 printf("palavras com o mesmo tamanho");
				 }
     else if ((strCmp(str3,str4))<0 ){
	  	 		 printf("primeira palavra eh menor que a segunda");
				 }
      else{
	  			printf("primeira palavra eh maior que a segunda");
				}
				
getch();
}
