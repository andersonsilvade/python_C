#include <stdlib.h>
#include <stdio.h>
#include <string.h>

main (void)
{
   char *s;
   int t;
   s=malloc(900);
   
   if (s==NULL){
      printf ("Falha na solicitação de memória. \n");
      exit (1);
   }
   
   gets (s);
   for (t=strlen(s)-1; t>=0; t--)
     putchar(s[t]);
   getch();
   free(s);
}   
    
