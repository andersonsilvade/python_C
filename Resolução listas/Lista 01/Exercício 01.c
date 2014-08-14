# include <stdio.h>
# include <stdlib.h>
# include <locale.h>

int fatorial(int n){
    if(n ==1 || n==0){
        return 1;
        }
    else{
        return fatorial(n-1) * n;
        }
    }

int main(void){

    setlocale(LC_ALL, "Portuguese");

    int n;

    printf("Digite um número inteiro não negativo: ");
    scanf("%d", &n);

    printf("%d! = %d", n, fatorial(n));

    printf("\n");

    system("pause");

}
