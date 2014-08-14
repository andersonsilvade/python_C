#include <stdio.h>
#include <stdlib.h>

struct cel {
       int conteudo;
       struct cel *seg; /* seguinte */
};
typedef struct cel celula;

void insere(int x ,celula *p){
	 celula *nova;
	 nova =  malloc(sizeof(celula));
     nova->conteudo = x;
     nova->seg = p->seg;
     p->seg = nova;
	 }

void Imprima (celula *lst) {
    celula *p;
    for (p = lst->seg; p != NULL; p = p->seg)
        printf ("%d\n", p->conteudo);
}

void cocatena(celula *lst1,celula *lst2){
	 celula *p;
	 p = lst1->seg;
	 while(p->seg != NULL){
	      p = p->seg;
		  }
     p->seg = lst2->seg;
     
	 
	 }

int main(void){
	celula cabeca;
	celula *lst1,*lst2;
	celula *p;
    
    lst1 = malloc(sizeof(celula));
    lst1 -> seg = NULL;
    insere(2,lst1);
    insere(1,lst1);
    
    lst2 = malloc(sizeof(celula));
    lst2 -> seg = NULL;
    insere(5,lst2);
    insere(4,lst2);
    insere(3,lst2);
    Imprima(lst1);
    cocatena(lst1,lst2);
    //Imprima(lst1);

     
     
     system("pause");
	 }
  
    

	
