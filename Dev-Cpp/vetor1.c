#include <stdio.h>
#include <locale.h>
main(){
  int vetor[10], i, num; 
	setlocale(LC_ALL,"Portuguese");
	printf ("Vetor com n�meros inteiros consecutivos.\n"); 
	printf("N�mero inicial: "); 
	scanf("%d", &num); 
	
	for (i=0 ; i<10; i++) 
		vetor[i] = num++; /* Populando */ 

	for (i=0; i <10; i++) 
		printf("Elemento %d = %d\n", i, vetor[i]);
	getch();
}
