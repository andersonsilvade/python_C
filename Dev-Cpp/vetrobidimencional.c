#include <stdio.h>
#include <string.h>
#include <locale.h>
main(){

        int const LINHA = 3, COLUNA = 4; 	
		int i, j, matriz[LINHA][COLUNA];
		
		for (i=0; i<LINHA; i++) {
			printf("\n%dª Linha:\n",i+1);
			for (j=0; j<COLUNA; j++) 
				scanf("%d", &matriz[i][j]); 
		}
for (i=0; i<LINHA; i++) { 
			for (j=0; j<COLUNA; j++) 
			printf(" %d", matriz[i][j]); 		
		} 
getch();
}
