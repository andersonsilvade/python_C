#include <sys/types.h>
#include <windows.h>
#include <stdio.h>
int valor;
void ler(){
	 printf("Digite um numero interio positivo : ");
	 scanf("%d",&valor);
	 while(valor <= 0){
	 			  printf("Numero negativo ou igual a Zero !!!\n");
	 			  printf("Digite um numero interio positivo : ");
	              scanf("%d",&valor);
				  }
          }

main(){
    FILE *fib; 
    STARTUPINFO si;
    PROCESS_INFORMATION pi;
    
    ler();
    
    fib = fopen("FIBONACCI.txt","w");
    if(fib == NULL){
		   printf("PROBLEMA NA ABERTURA DO ARQUIVO!!!");
		   exit(1);
		   }else{
 		 		  fprintf(fib,"%d",valor);
			      fclose(fib);
             }
    
    printf("PROCESSO PAI CRIADO!!!\n");
    ZeroMemory(&si, sizeof(si));
    si.cb = sizeof(si);
    	printf("---CRIANDO PROCESSO FILHO.\n");
	
    if(! CreateProcess("fibofilho.exe",NULL,NULL,NULL,FALSE,0,NULL,NULL,&si,&pi))
	{
		printf("\n---Desculpe! CreateProcess() falhou.\n\n");
		return 0;
	}
    
	printf("---PROCESSO PAI AGUARDANDO---\n");
	WaitForSingleObject(pi.hProcess,INFINITE);/* 1 seg == 1000 mseg*/
	
	printf("---PROCESSO PAI IMPRIMINDO A SEQUENCIA DE FIBONACCI.\n");
	
    
	int resp;
	fib = fopen ("FIBONACCI.txt","r");
	if(fib == NULL){
		   printf("---PROBLEMA NA LEITURA DO ARQUIVO---\n");
		   
		   }else{
	resp = getc(fib);
	if(resp == 'N'){
			printf("ERRO !!!!!");
			}else{
	  printf("O(S) %d NUMERO(S) DA SEQUENCIA FIBONACCI DE  eh : ",valor);
	while (resp != EOF) 
	{
		printf("%c",resp);
		resp = getc(fib);
	}
}
	fclose(fib);
}

	printf("\n\n---ENCERRANDO PROCESSO PAI\n");
	
	CloseHandle(pi.hProcess);
	CloseHandle(pi.hThread);

	system("pause");
	return 0;

    
}
