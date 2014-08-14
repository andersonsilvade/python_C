#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>
int fatorial(int num);


main() {
  setlocale(LC_ALL,"Portuguese");
  
  int fat;
  printf("Digite um número: ");
  scanf("%d",&fat);
  if (fat > 0){
  fatorial(fat);
  printf("o fatorial de %d é %d",fat,fatorial(fat));
}
  getch();
}

fatorial(int num){
            
            if (num==0||num==1){
                                 return (1);
                                 }else{
                                        return (num*fatorial(num-1));

                                        }
                                       
                                        }
                                    
                 
                            
  
