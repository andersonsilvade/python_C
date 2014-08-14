#include<stdio.h>
#include<conio.h>
#include<locale.h>
#include<stdlib.h>

int maior(int v[],int n);

main(){
int n;
int vet[n];
int num;
int i;
   setlocale(LC_ALL,"Portuguese");  
   printf("Digite o tamanho do vetor: ");
   scanf("%d",&n);
   for( i = 0 ; i <= n ; i++ ){
   		 printf("\nDigite o elemento[%d] do vetor: ", (i + 1));
   		 scanf("%d",vet[i]);
		 }
	maior(vet[n],num);
	
	getch();
}  

int maior (int v[], int n) {
if (n == 1)
return v[0];
else {
int x;
x = MáximoR (v, n - 1);
if (x > v[n-1])
return x;
else
return v[n-1];
}
}
