#include <stdio.h>
#include <locale.h>
#define MAX 100


main() {
  setlocale(LC_ALL,"Portuguese");
  int local;
  int v[MAX]={10,20,30,40,50,60,70,80,90,100};
  
  int x = 0;
  int i = 0;
  
  printf("digite um número para encontrar no vetor: ");
  scanf("%d",&local);
  
  while (x<=10){   
             if (local==v[x]){                             
                          printf("O número foi encontrado na posição [%d]\n ",x);
                          i++;                                                   
                             }    
                x++;
               }    
               if (i == 0){
               printf("Número não encontrado"); 
               }          
        getch();
}
   
  
