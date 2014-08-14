#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
main()
{
 	  FILE *p;
 	  char c;
 	  if((p = fopen("copying.txt","r"))==NULL){
	  		printf("Erro! Impossivel abrir o arquivo!");
	  		exit(1);
			}
while(!feof(p)){
c=getc(p);
printf("%c",c);
}
getch();
fclose(p);
}
