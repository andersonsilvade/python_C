#include <stdio.h>
#include <locale.h>
#define MAX 100


main() {
  setlocale(LC_ALL,"Portuguese");
  int vetorA[MAX]={10,20,30,40,50};
  int vetorB[MAX]={10,100,200,300,400,500,600,700,800};
  int b;
  int a;
  int cont = 0;
 
  
  for( b = 0; b<=8; b++)
            for(a = 0; a <= 5 ; a++)
            if (vetorA[a]==vetorB[b]){
                                      printf("%d \n",vetorA[a]);
                                      cont++;
                                     }
            if (cont == 0){
                     printf("Não tem números iguais nos vetores");
                     }
  getch();
}
             
