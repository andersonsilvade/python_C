#include <sys/types.h>
#include <windows.h>
#include <stdio.h>
#include <stdlib.h>
//#define _WIN32_WINNT 0x0501



int main()
{
STARTUPINFO si;
PROCESS_INFORMATION pi;
int a=0, b=1, n=a+b,i;
int valor = 10;
FILE *fibE;
FILE *fibL;

fibE = fopen("FIBONACCI.txt","wt");
fibL = fopen("FIBONACCI.txt","rt");


if(fibE == NULL){
	printf("Erro de gravação");
	system("pause");
	return 0;
}
if(fibL == NULL){
	printf("Erro de leitura \n");
	system("pause");
	return 0;
}
ZeroMemory(&si, sizeof(si));
si.cb = sizeof(si);
if(! CreateProcess("C:\\WINDOWS\\system32\\cmd.exe",NULL,NULL,NULL,FALSE,0,NULL,NULL,&si,&pi)){
printf("\nProcesso não criado\n\n");
}


printf("Processo filho criando a sequencia Fibonaccio\n");
fprintf(fibE,"%d %d ",a,b);

for (i=1;i<valor;i++){
n=a+b;
fprintf(fibE,"%d ",n);
a=b;
b=n;
}
printf("Processo Filho terminado\n");


printf("Processo pai esperando o processo filho\n");


printf("\nProcesso pai finalizado\n");
 fclose(fibE);
 fclose(fibL);


system("pause");
return 0;
}

