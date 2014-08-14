#include <sys/types.h>
#include <windows.h>
#include <stdio.h>











int main()
{
    STARTUPINFO si;
    PROCESS_INFORMATION pi;
    
    int valor;
    
    printf("---Processo pai criado.\n");
    
    ZeroMemory(&si, sizeof(si));
    si.cb = sizeof(si);
    
	printf("---Criando processo filho.\n");
	
    if(! CreateProcess("SOFibCalc.exe",NULL,NULL,NULL,FALSE,0,NULL,NULL,&si,&pi))
	{
		printf("\n---Desculpe! CreateProcess() falhou.\n\n");
		return 0;
	}
    
	printf("---Processo pai aguardando.\n");
	
	WaitForSingleObject(pi.hProcess, 300000);
	
	printf("---Processo pai imprimindo resposta.\n");
	
	printf("\nA sequencia de Fibonacci e: \n");

	FILE *arq;
	int c;
	arq = fopen ("Fibonacci.txt", "r");
	c = getc(arq);
	while (c != EOF) 
	{
		printf("%c",c);
		c = getc(arq);
	}
	fclose(arq);

	printf("\n\n---Encerrado processo pai\n");
	
	CloseHandle(pi.hProcess);
	CloseHandle(pi.hThread);

	system("pause");
	return 0;
}
