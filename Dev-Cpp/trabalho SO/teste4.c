#include <sys/types.h>
#include <windows.h>
#include <stdio.h>
#define _WIN32_WINNT 0x0501
int main()
{
STARTUPINFO si;
PROCESS_INFORMATION pi;

int a=0, b=1, n=a+b,i,ii;
ZeroMemory(&si, sizeof(si));
si.cb = sizeof(si);



if(! CreateProcess("C:\\WINDOWS\\system32\\cmd.exe",NULL,NULL,NULL,FALSE,0,NULL,NULL,&si,&pi)){
printf("\nProcesso não criado\n\n");
}
else{

	
printf("Enter the number of a Fibonacci Sequence:\n");
scanf("%d", &ii);
if (ii < 0)
printf("Please enter a non-negative integer!\n");
else
{
{
printf("Processo filho criando a sequencia Fibonaccio\n");

printf("%d\n",pi.hThread);
printf("%d %d",a,b);
for (i=1;i<ii;i++)
{
n=a+b;
printf("..%d ", n);
a=b;
b=n;
}
printf("Processo Filho terminado\n");
}




{
printf("Processo pai esperando o processo filho\n");
printf("id do processo = %d\n",si);

printf("Processo pai finalizado\n");
}
}
}
WaitForSingleObject(pi.hProcess, 5000);
printf("\n");
// Close process and thread handles.
CloseHandle(pi.hProcess);
CloseHandle(pi.hThread);
return 0;
}
