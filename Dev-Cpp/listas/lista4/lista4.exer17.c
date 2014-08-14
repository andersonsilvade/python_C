#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>
main() {
  setlocale(LC_ALL,"Portuguese");

         int  LINHA = 2; 
         int  COLUNA = 6; 	
         int i, j;
         int  matriz[LINHA][COLUNA];
		 int z,x;
		
		for (i=0; i<LINHA; i++) {
			printf("\n%dª Linha:\n",i+1);
			for (j=0; j<COLUNA; j++) 
				scanf("%d", &matriz[i][j]); 
            }
        for (x=0; x<LINHA; x++) {
            printf("\n");
            for (z=0; z<COLUNA; z++) 
				printf("%d", matriz[x][z]); 
            }
            	
    
				
		getch();
		}
