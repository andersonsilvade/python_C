#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>


main() {
  setlocale(LC_ALL,"Portuguese");
  char string[100];
  char string2[3];
  
  printf("digite uma frase: ");
  gets(string);
  
  printf("digite uma palavra de 3 caracteres: ");
  gets(string2);
  int i;
  
   int cont = 0; 
  int tam = strlen(string);
  
  
  for(i = 0;i<tam;i++){

                                                 
        if (string[i] == string2[0]){ 
                      if(string[i+1]==string2[1]){
                                                  if(string[i+2]==string2[2]){        
                cont++;
                   }
                 
                   }
                   }
                   }
                   
                   
                   
                   
                    printf(" a palavra %s ocorre %d na frase %s ",string2,cont,string);
                   
                   
                   getch();
                   }
                   
