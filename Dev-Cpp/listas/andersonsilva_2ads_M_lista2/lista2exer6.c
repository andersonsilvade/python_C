#include <stdio.h>
#include <math.h>
#include <locale.h>
main()
{
 setlocale(LC_ALL, "Portuguese");/*para acentuação*/
int n;
printf("entre com o valor de n: ");
scanf("%d",&n);
if(n<=0){
         printf("número inválido");
         }
else{
printf("os %d primeiros números impares são:\n",n);
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
