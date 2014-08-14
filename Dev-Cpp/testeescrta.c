#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
 main (){
	 FILE *p;
	 char frase[50];
	 int i;
	 if((p = fopen("teste.txt","w"))==NULL){
	 			 printf("Erro ! Impossivel abrir o arguivo!!");
	 			 exit(1);
				 }
printf("Entre com uma palavra: ");
gets(frase);
for(i = 0;frase[i];i++)
putc(frase[i],p);
fclose(p);

}
	 			 
