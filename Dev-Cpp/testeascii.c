#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>
main() {
  setlocale(LC_ALL,"Portuguese");
  char num;
  printf("digite um letra ou número: ");
  scanf("%c",&num);
  printf("\n");
  if(num>='a'&& num<='z'){
                printf(" %c é uma letra minuscula!!!",num);
                }
   else if (num>='A' && num <= 'Z'){
               printf(" %c é uma letra maiuscula !!!",num);
               }
   else if (num>='0' && num <'9'){
                     printf(" %c é um número !!!",num);
                     }
   else{
        printf("%c é um caracter:");
        }
               
                getch();
                }
