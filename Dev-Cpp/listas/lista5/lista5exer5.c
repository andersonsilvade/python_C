#include <conio.h>
#include <stdio.h>
void main(){
      float vet[5] = {1.1,2.2,3.3,4.4,5.5};
      float *f;
      int i;
      f = vet;
      printf("contador/valor/valor/endereco/endereco");
      for(i = 0 ; i <= 4 ; i++){
            printf("\ni = %d",i);
            printf("   vet[%d] = %.1f",i, vet[i]);
            printf("   *(f + %d) = %.1f",i, *(f+i));//imprime o f[0]+ i
            printf("   &vet[%d] = %X",i, &vet[i]);//imprime o endere�o vet[0] + i = 0 ,o( i ) � a posi��a no vetor
            printf("   (f + %d) = %X",i, f+i);////imprime o endere�o vet[0] + i = 0,o (i) � a posi��o do vetor
            }
getch();
}
