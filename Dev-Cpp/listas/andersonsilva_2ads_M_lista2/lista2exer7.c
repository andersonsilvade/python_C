#include <stdio.h>
#include <math.h>
#include <locale.h>
main()
{
 setlocale(LC_ALL, "Portuguese");/*para acentua��o*/
int num;
int exp;
printf("entre com um n�mero: ");
scanf("%d",&num);
printf("entre com o expoente: ");
scanf("%d",&exp);
int resul=pow(num,exp);
printf(" o valor %d elevado a %d eh %d",num,exp,resul);
getch();
}
