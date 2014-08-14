#include <stdio.h>
#include <conio.h>
#include <locale.h>

int primo(int num);
main()
{
      setlocale(LC_ALL,"Portuguese");
      int a;
      printf("entre com um valor: ");
      scanf("%d",&a);
      primo(a);
       if (primo(a)==1)
              {
              printf("o número %d  é primo",a);
              }
              else{
                   printf("número %d não é primo",a);
                   }
         
      getch();
      }
primo(int num){
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
         else{
              return(0);
              }
              
             
         
              }
              
         
              
