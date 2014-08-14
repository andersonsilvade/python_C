#include <sys/types.h>
#include <windows.h>
#include <stdio.h>
//#define _WIN32_WINNT 0x0501
int main()
{
	int a=0, b=1, n=a+b, i, ii;
	
	printf("---Processo filho criado.\n");
	
	printf("\nEntre com o numero de Fibonacci a ser calculado: ");
	scanf("%d", &ii);
	
	if (ii < 0)
		printf("Por favor, entre com um numero positivo.\n");
	else
	{
		{
			printf("\n---Processo filho calculando sequencia de Fibonacci.\n");
			FILE *arq;
			arq = fopen ("Fibonacci.txt", "w");
			
			fprintf(arq, "%d %d ",a,b);
			for (i=1;i<ii;i++)
			{
				n=a+b;
				fprintf(arq, "%d ", n);
				a=b;
				b=n;
			}
			fclose(arq);
			
		}
	}
	
	printf("---Processo filho terminado.\n");
	return 0;
}
