#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <locale.h>
int triagulo(int ladoA,int ladoB,int ladoC);
main()
{
setlocale(LC_ALL,"Portuguese");
int ladoa;
int ladob;
int ladoc;
printf("entre com o ladoA do triângulo: ");
scanf("%d",&ladoa);
printf("entre com o ladoB do triângulo: ");
scanf("%d",&ladob);
printf("entre com o ladoC do triângulo: ");
scanf("%d",&ladoc);
triangulo(ladoa,ladob,ladoc);
if(triangulo(ladoa,ladob,ladoc)==1){
                                   printf("triângulo Equilátero");
                                   }
if(triangulo(ladoa,ladob,ladoc)==2){
                                   printf("Triângulo Escaleno");
                                   }
if(triangulo(ladoa,ladob,ladoc)==3){
     printf("Triângulo Isósceles");
     }
getch();
}

triangulo(int ladoA,int ladoB,int ladoC){
             if(ladoA==ladoB && ladoA==ladoC)
                            {
                             return(1);
                             }
             if(ladoA!=ladoB && ladoA!=ladoC && ladoB!=ladoC)
                            {
                            return(2);
                            }
             else{
                  return (3);
                  }
                  }

