#include <stdio.h>
#include <math.h>
#include <locale.h>
main()
{
 setlocale(LC_ALL, "Portuguese");/*para acentua��o*/
int n;
printf("entre com o valor de n: ");
scanf("%d",&n);
if(n<=0){
         printf("n�mero inv�lido");
         }
else{
printf("os %d primeiros n�meros impares s�o:\n",n);
int cont1=0;
int cont2=1;
while(cont1<n){
printf("%d\n",cont2);
cont2+=2;
cont1+=1;
}
}
             getch();
             }
