#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void main(int argc,char*argv[]){
	 if(argc!=2){
	 			 printf("Você não digitou o seu nome\n");
	 			 exit(1);
				 }
printf("Bom dia %s\n",argv[1]);
getch();
}
