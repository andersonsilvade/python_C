#include <stdio.h>

int main(){
	int pilha[32];
	int n ;
    int t = 0;
    printf("digite o numero a ser convertido: ");
    scanf("%d",&n);
    
    while(n != 0){
			pilha[t++] = n % 2;
			n = n / 2;
			}
	while(t != 0){
		printf("%d",pilha[--t]);
		}
		printf("\n");
		system("pause");
		}
