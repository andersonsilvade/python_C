#include <stdio.h> 
#include <stdlib.h> 
#include <unistd.h>
 #define MAXLINE 4096 
 int main (void) {
 	  int n, fd[2];
	    pid_t pid;
		 char line[MAXLINE];
		  if (pipe (fd) < 0) { 
		  	 	   printf ("!!Erro no Pipe""\n");
		   exit(0); 
		   }
		    if ((pid = fork()) < 0) {
			   		  printf("!!Erro no Pipe!!\n");
						  exit(0);
						   }
		    else if (pid>0) 
			{ 
			  	 close (fd[0]); 
				   write (1, "O pai mandou a mensagem para o filho\n", 38);
				    write (fd[1], "Bom dia meu filho\n", 18); 
					} else {
					  	    close (fd[1]);
							   write(1, "Filho esperando ....\n", 20);
							    n = read (fd[0], line, MAXLINE);
								 write (1, line, n);
								  }
								   exit(0); 
								   }

