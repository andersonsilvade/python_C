#include <stdio.h>
#include <conio.h>
int vetor[10];
int topo=0; /*topo da pilha*/

/*Inseri um elemento na pilha.*/
void push (int i)
{
     if (topo >= 10){
       printf ("Pilha Cheia \n");
       return;
       }
     vetor[topo]=i;
     topo++;
}

/*Recupera o elemento do topo da pilha */
pop ( )
{
    topo--;
    if (topo < 0){
       printf ("Pilha Vazia \n");
       return 0;
    }
   return vetor[topo];
}


void imprimir(){
  int i;
  printf("Pilha: \n");
  for(i = topo-1; i >= 0; i--){
    printf("%d \n",vetor[i]);
  }
}

     
     
main ()
{
    int recuperado1,recuperado2; 
    push (12);
    push (14);
    push (13);
    push (20);
    recuperado1=pop();
    recuperado2=pop();
    push(12);
    imprimir();
    printf ("\n");
    printf ("%d\n",recuperado1);
    printf ("%d\n",recuperado2);
    getch();
}    
       
                  
