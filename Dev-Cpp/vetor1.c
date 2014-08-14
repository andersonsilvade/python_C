#include <stdio.h>
#include <locale.h>
main(){
  int vetor[10], i, num; 
	setlocale(LC_ALL,"Portuguese");
	printf ("Vetor com números inteiros consecutivos.\n"); 
	printf("Número inicial: "); 
	scanf("%d", &num); 
	
	for (i=0 ; i<10; i++) 
		vetor[i] = num++; /* Populando */ 

	for (i=0; i <10; i++) 
		printf("Elemento %d = %d\n", i, vetor[i]);
	getch();
}
