#include <stdio.h>
#include <locale.h>
main()
{
       setlocale(LC_ALL, "Portuguese");/*para acentua��o*/
int con;
printf("digite um n�mero: ");
scanf("%d",&con);
int num=1;
while(num<=12){
               int x=con*num;
               printf("%d X %d = %d \n",con,num,x);
               num++;
               }

getch();
}
