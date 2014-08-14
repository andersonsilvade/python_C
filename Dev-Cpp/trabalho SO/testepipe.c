#include <unistd.h>
#include <string.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <pthread.h>
 
int pipefd[2];
unsigned int threadid;
 
// Início da thread
void* PipeWriterThread(void* arg)
{
   char ch[32];
   strcpy(ch, "abcd");
   write(pipefd[1], ch, 4);
   return NULL;
}
 
void CreateThreadL()
{
   pthread_create(&threadid,(pthread_attr_t *)NULL,PipeWriterThread, NULL);
}
 
int main()
{
   if(0 == pipe(pipefd))
   {
       char ch[128];
       CreateThreadL();
       read(pipefd[0], ch, 10);
       close(pipefd[1]);
       close(pipefd[0]);
   }
   return 0;
}

