#include <stdio.h>
#include <stdlib.h>
#define TRUE 1

int main( void) {
   int x, n, k;
   double soma;
   FILE *entrada;
   entrada = fopen( "FIBONACCI.txt", "r");
   if (entrada == NULL) {
      printf( "\nNão encontrei arquivo\n");
      exit( EXIT_FAILURE);
   }
   soma = n = 0;
   while (TRUE) {
      k = fscanf( entrada, "%d", &x);
      if (k != 1) break;
      soma += x;
      n += 1;
   }
   fclose( entrada);
   printf( "A média dos números é %f\n", soma / n);
   return EXIT_SUCCESS;
}
