#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <locale.h>

int primos(int num);

main()
{
 setlocale(LC_ALL,"Portuguese");
int pri=0;
int cont=1;
int nu;
int soma=0;
printf("entre com um numero: ");
scanf("%d",&nu);
while(nu<=0){
             printf("n�mero inv�lido!!!!\n");
             printf("entre com um n�mero v�lido: ");
             scanf("%d",&nu);
             }
if(nu==1){
         printf("o primeiro n�mero primo � 2 ");
         }

if(nu>1){
while(cont<=nu)
{
primos(pri);
                  
if(primos(pri)==1){    

                  printf("%d\n",pri);    
                 soma=soma+pri; 
                 cont++;
}
                  pri++;
                  }   
printf("a soma dos %d primeiros n�meros � %d",nu,soma); 
}
getch();
}
primos(int num){
          int cont=1;
          int cont2=0;
          int conf;
          while (cont<=num)
          {          
          conf = num%cont;
          cont++;
                   
         if(conf==0){
         cont2++;
         }
         }
         if (cont2==2){
                       return(1);
                       
                       }
                       }

                
