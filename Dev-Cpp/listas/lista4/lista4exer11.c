#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>


main() {
  setlocale(LC_ALL,"Portuguese");
  char string[50];
  char string2[50];
  
  printf("Digite uma palavra: ");
  gets(string);
  
  printf("Digite outra palavra: ");
  gets(string2);
  
  int i;
  int x;
  
  for(i = 0;i<strlen(string);i++){
        for(x = 0; x< strlen(string2);x++){
              if(string[i]==string2[x]){
                                        i++;
                                        }
                                        }
                                        }
                                        if(x == strlen(string2)){
                                             printf("são anagramas");
                                             }else{
                                                   printf("não são anagramas");
                                                   } 
  
getch();
}
