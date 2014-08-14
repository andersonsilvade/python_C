#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <locale.h>

int divisores(int nume);

main()
{
setlocale(LC_ALL,"Portuguese");
int soma=0;
int cont2=0;
int div=0;
int num;
printf("digite um número: ");
scanf("%d",&num);


divisores(num);

soma=divisores(num);

printf("%d tem %d divisores!!!",num,soma);             
getch();
                      }
divisores(int nume){
          int cont=1;
          int cont2=0;
          int conf;
          while (cont<=nume)
          {          
          conf = nume%cont; 
          cont++;    
          if(conf==0){
                      cont2++;
                     }    
                     }
                    return(cont2);
                     }
              
         


