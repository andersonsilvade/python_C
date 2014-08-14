#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>

int euclides(int a,int b);


main() {
  setlocale(LC_ALL,"Portuguese");
  int a;
  int b;
  int x;
  printf("digite o primeior número: ");
  scanf("%d",&a);
  printf("digite o segundo número: ");
  scanf("%d",&b);
  x = euclides(a,b);
  printf("%d",x);
  getch();
}
int euclides(int a,int b){
	if(a % b == 0){
		 return b;
		 }else{
		 	   return euclides(b,a%b);
			   }
			   }
