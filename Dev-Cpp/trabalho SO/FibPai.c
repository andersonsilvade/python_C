#include <sys/types.h>
#include <windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
int main()
{
    STARTUPINFO si;
    PROCESS_INFORMATION pi;
    
    int ii;
    
    
    printf("---Processo pai criado.\n");
    
    
   	
    printf("\nEntre com o numero de Fibonacci a ser calculado: ");
	scanf("%d", &ii);
	if(ii < 0){
		  printf("\nvoce digitou um numero negativo o programa sera encerrado bye bye");
		  return 0;
		  }
    CreatePipe(HANDLE *hRead,HANDLE *hWrite ,SECURITY_ATTRIBUTES *sa,DWORD SizePipe);
    
    ZeroMemory(&si, sizeof(si));
    si.cb = sizeof(si);
    
	printf("---Criando processo filho.\n");
	
    if(! CreateProcess("FibFilho.exe",NULL,NULL,NULL,FALSE,0,NULL,NULL,&si,&pi))
	{
		printf("\n---Desculpe! CreateProcess() falhou.\n\n");
		return 0;
	}
	   
		  
    
	printf("---Processo pai aguardando.\n");
	
	WaitForSingleObject(pi.hProcess, 5000);
	
	printf("---Processo pai imprimindo resposta.\n");
	
	printf("\nA sequencia de Fibonacci e: \n");
      

	printf("\n\n---Encerrado processo pai\n");
	
	CloseHandle(pi.hProcess);
	CloseHandle(pi.hThread);

	system("pause");
	return 0;
}
