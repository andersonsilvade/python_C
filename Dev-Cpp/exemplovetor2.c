#include<stdio.h>
#include<conio.h>
#include<locale.h>

int popula_vetor (int vetor[10]);
void exibe_vetor (int vetor[10]);

main(){
  setlocale(LC_ALL,"Portuguese");
  int vetor[10];
  popula_vetor (vetor);
  exibe_vetor (vetor);
  getch();
}
popula_vetor (int vetor[10])
{
    int num,i;
    printf ("Vetor com números inteiros consecutivos.\n"); 
	printf("Número inicial: "); 
	scanf("%d", &num); 
	
	for (i=0 ; i<10; i++) 
      vetor[i] = num++; /* Populando */
 return vetor[10]; 
}

void exibe_vetor (int vetor[10])
{
   int i;
	for (i=0; i <10; i++) 
		printf("Elemento %d = %d\n", i, vetor[i]);
}
