
#include <stdio.h>
#include <conio.h>
#include <stdlib.h> /* malloc*/

int *p; /*apontar� para uma regi�o de mem�ria livre*/
int *topo; /*apontar� para o/ topo da pilha*/
int *fim; /*apontar� para o final da pilha*

/*Inseri um elemento na pilha.*/
void push (int i)
{
     if (p > fim){
       printf ("Pilha Cheia \n");
      // return;
       }
     *p=i;
     p++;
}

/*Recupera o elemento do topo da pilha */
int pop ( )
{
    p--;
    if (p < topo){
 	
	  
       printf ("Pilha Vazia \n");
        printf("\n");
       return 0;
    }
   return *p;
}


void imprimir(){
  int i;
  int *aux=topo;
  int *aux2=p;
  printf("Pilha: \n\n");

    while (aux < aux2){
         printf ("%d",*(aux++));
         printf ("\n");
  }
 
}

 

void menu()
{
    int opcao,num1;
    printf ("Digite um op��o:\n");
    printf ("1:para inserir\n2:para retirar elementos da pilha\n3:Para imprimir\n4:Sair \n");
    scanf("%d", &opcao);
     while (opcao!=4) 
      {
        if (opcao == 1){
  		  printf("Digite um numero: ");
  		  
          scanf ("%d",&num1);
          push(num1);
       }
     if (opcao == 2){
        pop();
     }
     if (opcao == 3){
         imprimir();  
     }
     printf ("1:para inserir\n2:para retirar elementos da pilha\n3:Para imprimir\n4:Sair \n");
     scanf("%d", &opcao);
      } 
}          
          
     
     
main( )
{
    p= (int *) malloc (1000); /*ob�m mem�ria da pilha*/
    if (!p){
             printf ("Falha de aloca��o \n");
             exit(1);
             }
    topo=p;
    fim=p+1000-1;  
    menu();
    return 0;
}    


        
