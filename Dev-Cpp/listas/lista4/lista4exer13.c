#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>


void imprimeascii() {
  setlocale(LC_ALL,"Portuguese");
  int i;
  for (i =0 ;i<=255;i++)
  printf("%i : %c\n",i,i);
}
void main(){
     imprimeascii();
     getch();
     }
