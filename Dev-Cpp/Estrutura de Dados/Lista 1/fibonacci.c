#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>

int fib(int n);
int fibrec(int n);

main() {
  setlocale(LC_ALL,"Portuguese");
  int n;
  int x;
  printf("Entre com um numero inteiro positivo: ");
  scanf("%d",&n);
  //fib(n);
  x = fibrec(n);
  printf("%d",x);
  getch();
}
int fib(int n){
	int a , b, c, i;
	a = 0;
	b = 1;
	for(i = 0;i < n;i++){
		  c = a + b;
		  a = b;
		  b = c;
		  printf("%d\n",c);
			}
			}
			
int fibrec(int n){
	printf("fib(%d)\n" , n);
	if((n == 1)||(n == 0)){
		  return 1;
		  }else{
		  		return fibrec(n-1) + fibrec(n-2);
				}
				}
	
		   		  
