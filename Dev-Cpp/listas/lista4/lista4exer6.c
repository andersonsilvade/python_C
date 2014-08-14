#include <stdio.h>
#include <locale.h>


main() {
  setlocale(LC_ALL,"Portuguese");
  int linha = 5;
  int coluna = 5;
  int vetorbi [linha][coluna];
  int a;
  int b;
  int x = 1;
  int z = 0;
  for (a = 0 ; a<= linha; a++){
      printf("\n");
      for ( b = 0 ; b <= coluna; b++){
            if ( a == b){
           vetorbi[a][b] = x;
           }else{
                 vetorbi[a][b] = z;
                 }
            printf("%d",vetorbi[a][b]);
          
                  
                                      }
      
                              }
  getch();
       }
  
