#include <stdio.h>
#include <windows.h>

int main(VOID){
	STARTUPINFO si;
	PROCESS_INFORMATION pi;
	
	/*alocando memoria*/
	ZeroMemory(&si,sizeof(si));
	si.cb = sizeof(si);
//	ZeroMemory(&pi,sizeof(pi);
	
	/*criando processo filho*/
	
	if(!CreateProcess(NULL, "C:\\WINDOWS\\system32\\mspaint.exe",NULL,NULL,FALSE,NULL,NULL,&si,&pi)){
						  fprintf(stderr,"Processo falhou");
						  return -1;
						  }
	WaitForSingleObject(pi.hProcess,INFINITE);
	printf("filho criado");
	
	CloseHandle(pi.hProcess);
	CloseHandle(pi.hThread);
}		  
	
