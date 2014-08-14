#include <stdio.h>
#include <locale.h>


main() {
  setlocale(LC_ALL,"Portuguese");
  int linha = 10;
  int coluna = 10;
  int vetorbi [linha][coluna];
  int i; 
  int x;
  int maior = 0;

for(i = 0;i<linha;i++){//popula linha
       for(x = 0;x<coluna;x++){//popula coluna
printf("Informe o valor da Matriz[%d][%d]= ", i,x);
scanf("%d",&vetorbi[i][x]);
}
}
int z;
int y;
for(z=0 ; z <linha; z++){//acessa linha
printf("\n");
      for(y =0  ; y <coluna; y++){//acessa coluna

                  if(vetorbi[z][y]>maior){//compara os valores
                              maior=vetorbi[z][y];
                     }
                           }
                           }                           
printf("O maior valor é %d", maior);    

getch();
}
