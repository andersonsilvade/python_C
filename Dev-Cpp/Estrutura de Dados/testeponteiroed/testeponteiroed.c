#include <stdio.h>
#include <stdlib.h>

//int k = 42;

int main(void){
	int *p;
	
//  p = &k;
 //  p = 0; //acessando endereço de memoria inicial
  
     p = malloc(sizeof(int)); //malloc = aloca memoria do S.O 
	
	*p = 33;

   printf("%d \n",*p);
    
    system("pause");
}
