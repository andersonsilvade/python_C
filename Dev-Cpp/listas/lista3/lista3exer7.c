#include <stdio.h>
#include <locale.h>


int contadigitos(int n, int d) {

  int conta, resto;

  conta = 0;

  while (n != 0) {
    resto = n % 10;
    n = n/10;
    if (resto == d)
      conta++;
  }

  return conta;
}


int main() {
  setlocale(LC_ALL,"Portuguese");
  int a, b, d;
  int perm; 
  printf("Digite o primeiro número inteiros: ");
  scanf("%d",&a);
  printf("Digite o segundo número inteiro: ");
  scanf("%d",&b);
  perm = 1;

  for (d = 1; d <= 9; d++)
    if (contadigitos(a,d) != contadigitos(b,d))
      perm = 0;

  if (perm == 1)
    printf("%d é permutacao de %d\n",a,b);
  else
    printf("%d nao é permutacao de %d\n",a,b);
    
    getch();

  return 0;
}
