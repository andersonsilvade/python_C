#include <sys/types.h>
#include <windows.h>
#include <stdio.h>

//#define _WIN32_WINNT 0x0501
 main()
{
	int a=0, b=1, n=a+b, i; 
	int valor;
	int x;
	char trata = 'N' ;
	/*printf("digite um numero");
	scanf("%d",x);
	*/
	
	
	
	printf("---PROCESSO FILHO CRIADO.\n");
	
	printf("\n---PROCESSO FILHO CALCULANDO !!!!.\n");
	
    FILE *arq;
	arq = fopen ("FIBONACCI.txt", "r");
	if(arq == NULL){
		   printf("---PROBLEMA NA LEITURA DO ARQUIVO DO PROCESSO FILHO---\n");
		   valor = -1;
		   }else{
    fscanf(arq,"%d",&valor);
    fclose(arq);
     }
     if(valor == -1){
       arq = fopen("FIBONACCI.txt", "w");
	   fprintf(arq, "%c  ",trata);
	 		  }else{
	arq = fopen("FIBONACCI.txt", "w");
     if(arq == NULL){
	 		printf("PROBLEMA NA ESCRITA DO PROCESSO FILHO");
			}else{
				  if((valor == 0)|| (valor == 1)){
				  		   fprintf(arq, "%d",a);
						   }else{
	                          fprintf(arq, "%d %d ",a,b);
	                         for (i = 1;i < (valor - 1); i++){
							 	 n=a+b;
				                 fprintf(arq, "%d ", n);
				                 a=b;
				                 b=n;
								 }
				}
				}
			}
	fclose(arq);
	printf("---PROCESSO FILHO TERMINADO.\n");
	return 0;
}
