#include <stdio.h>
#include <math.h>
main()
{
int anonasc;
int anoatual=2013;
printf("digite o ano em que você nasceu: ");
scanf("%d",&anonasc);
int idade=anoatual-anonasc;
printf("Você tem %d anos",idade);
getch();
}
