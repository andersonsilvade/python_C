#include <stdio.h>
#include <locale.h>
main(){
 setlocale(LC_ALL, "Portuguese");/*para acentua��o*/
int a;

while (a>=0){
printf("\nentre com um n�mero inteiro: ");
scanf("%d",&a);

printf("o quadrado de %d eh %d \n",a,a*a);
}
getch();
}
