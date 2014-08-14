#include <sys/types.h>
#include <windows.h>
#include <stdio.h>
//#define _WIN32_WINNT 0x0501

int main()
{
    STARTUPINFO si;
    PROCESS_INFORMATION pi;
    
    int a=0, b=1, n=a+b,i,ii;
    
    ZeroMemory(&si, sizeof(si));
    si.cb = sizeof(si);
    
    if(! CreateProcess("C:\\WINDOWS\\system32\\cmd.exe",NULL,NULL,NULL,FALSE,0,NULL,NULL,&si,&pi))
                      printf("\n Desculpe! CreateProcess() falhou.\n\n");
    else{
                      printf("Entre com o numero de fibonacci:\n");
                      scanf("%d", &ii);
    if (ii < 0)
                      printf("Por favor, somente numeros positivos!\n");
    else
{
{
      printf("Processo filho produzindo sequencia de Fibonacci...\n");
      
      //fprintf(arq,"%d %d ",a,b);
      
      
      for (i=1;i<ii;i++)
      {
        FILE *arq;
        arq = fopen ("Fibonacci.txt", "w");
        
        n = a+b;         
        //printf("%d ", n);
        fprintf(arq, "%d", n);
        a = b;
        b = n;
        fclose(arq);
        }
      printf("Encerrado processo filho\n");
    }
    {
      printf(" Processo pai esperando processo filho terminar e imprimindo resposta...\n");
      FILE *arq;
      char c;
      arq = fopen ("Fibonacci.txt", "r");
      c = getc(arq);
      while (c != EOF) 
      {
            printf("%c",c);
            c = getc(arq);
      }
      fclose(arq);
      
      printf(" Encerrado processo pai\n");
    }
    }
    }
    WaitForSingleObject(pi.hProcess, 5000);
    printf("\n");
    // Close process and thread handles.
    CloseHandle(pi.hProcess);
    CloseHandle(pi.hThread);
    
    system("pause");
    return 0;
    }
