#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>

int XX(int n);

main() {
  setlocale(LC_ALL,"Portuguese");
  int n;
  int x;
  printf("Entre com um numero inteiro positivo: ");
  scanf("%d",&n);
  x = XX(n);
  printf("%d",x);
  getch();
}
int XX(int n){
	if (n == 0){
	   	   return 0;
		   }else{
		   		  return XX (n/3+1) + n;
                 }
				 }
