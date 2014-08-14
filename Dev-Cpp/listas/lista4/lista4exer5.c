#include <stdio.h>
#include <locale.h>
#define MAX 100


main() {
  setlocale(LC_ALL,"Portuguese");
  int vetorA[MAX]={1,1,1,1,1,1,1,1,1,1};
  int vetorB[MAX]={1,2,3,4,5,6,7,8,9,10};
  int x =0;
  int a ;
  int b = 0;
  int prod  ;
  for(a = 0;a < 10; a++){       
         prod=(vetorA[a]*vetorB[b])+prod;
         b++;
         }    
         printf("O produto escalar vetor[a] por vetor [b] é %d \n",prod);

  getch();
}
