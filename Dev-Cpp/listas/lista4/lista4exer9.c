#include <stdio.h>
#include <locale.h>


main() {
  setlocale(LC_ALL,"Portuguese");
  int n;
  printf("Digite o números de voltas dadas: ");
  scanf("%d",&n);
  float voltas[n];
  float menor = 1000;
  int i=0;
  int z;
  int x=0;
  int nvolta = 1;
  int aux = 0;
  while(x<n){
             printf("digite o tempo da %dº volta em sengundos: ",nvolta);
             scanf("%f",&voltas[i]);
             nvolta++;
             x++;
             i++;
             }
                  
                  
 for(i=0;i<n;i++){//resposta A
                   if (voltas[i]<menor){
                                      menor=voltas[i];
                                      aux=i;
                                       }
                                       
                }
                       printf("O tempo da melhor volta foi :%5.3f seg\nA volta em que o melhor tempo ocorreu foi: %d\n",menor,aux+1);
 float soma=0;
 int y;
 float media=0;
 
 for(y=0; y<n;y++){//resposta c
            soma=soma+voltas[y];
            }
 media=soma/n;       
            printf("O tempo médio das voltas é de : %5.3f seg",media);
                       
                       
                       

  
                  getch();
                  }
                  
                  
                   
