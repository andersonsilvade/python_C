#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>
main() {
  setlocale(LC_ALL,"Portuguese");
  char num;
  printf("digite um letra ou n�mero: ");
  scanf("%c",&num);
  printf("\n");
  if(num>='a'&& num<='z'){
                printf(" %c � uma letra minuscula!!!",num);
                }
   else if (num>='A' && num <= 'Z'){
               printf(" %c � uma letra maiuscula !!!",num);
               }
   else if (num>='0' && num <'9'){
                     printf(" %c � um n�mero !!!",num);
                     }
   else{
        printf("%c � um caracter:");
        }
               
                getch();
                }
