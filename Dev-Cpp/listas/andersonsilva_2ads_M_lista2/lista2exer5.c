#include <stdio.h>
#include <locale.h>
main()
{
 setlocale(LC_ALL, "Portuguese");/*para acentuação*/
int num;

printf("digite um número: ");
scanf("%d",&num);
           int x=num;
           int cont=num-1;
           while(cont>0)
           { 

x=x+(cont);
cont-=1;
}
printf(" a soma dos %d primeiros números é %d",num,x);
getch();
}
