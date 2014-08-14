
#include <stdio.h>
#include <windows.h>
#include <sys/types.h>
#include <unistd.h>


int main(void){
	
	pid_t  pid;
	
	pid = fork();/*criando processo filho*/
	
	if(pid < 0){
		   printf("Erro ao criar processo filho!!!");
		   exit(-1);
		   }
 if(pid == 0){
		 printf("Processo filho criado : %d valor do pid %d",getpid(),pid);
		 
		 }else{
		 	   printf("PAI: id %d,pid %d ",getpid(),pid);
			   }
		   system("date");
		   }
	
	
