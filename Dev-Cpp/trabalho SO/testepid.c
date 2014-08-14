#include <sys/types.h>
#include <stdio.h>
#include <unistd.h>

int main(){
	int  pid;
	pid = fork();
	if(pid < 0){
		   printf("Processo fork falhou");
		   system("pause");
		   exit(-1);
		   }else if(pid == 0){
		   		 execlp("/bin/ls","ls",NULL);
				 }else{
				 	   wait(NULL);
				 	   printf("filho Completo");
				 	   exit(0);
					   }
					   }
    
