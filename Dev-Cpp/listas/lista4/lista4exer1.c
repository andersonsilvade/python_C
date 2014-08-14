#include <stdio.h>
#include <locale.h>
#define MAX 1000

main() {
  setlocale(LC_ALL,"Portuguese");
  int n, v[MAX];
  int i = 0;

  printf("Digite o comprimento da sequência: ");
  scanf("%d", &n);
  


while(i<n){
printf("digite um número:");
scanf("%d", &v[i]);
i++;
          }
            
printf("seguencia da ordem invertida:\n");
 for (i = n-1; i >= 0; i--)
 
 printf("%d ", v[i]);
 
 getch();
}

