#include <stdio.h>
#include <locale.h>
main(){
setlocale(LC_ALL, "Portuguese");/*para acentuação*/
int num;
int fat;
printf("digite um número inteiro: ");
scanf("%d",&num);
fat = num;
if (num==1|| num==0){
              printf("fatorial eh %d" ,num);
              
              }
if (num>1){
int count;
for(count=num;count>1;count-=1){
                         num=num*(count-1);
                         
                         }
printf("o fatorial de %d eh %d",fat,num);
}
getch();
}


