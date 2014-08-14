#include <stdio.h>
#include <locale.h>
main(){
 setlocale(LC_ALL, "Portuguese");/*para acentuação*/
int a;

while (a>=0){
printf("\nentre com um número inteiro: ");
scanf("%d",&a);

printf("o quadrado de %d eh %d \n",a,a*a);
}
getch();
}
