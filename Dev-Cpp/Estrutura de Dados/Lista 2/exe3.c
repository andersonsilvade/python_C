#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

struct cel {
       int cont;
       struct cel *seg; /* seguinte */
};

typedef struct cel celula;

void Imprimir(celula *lst) {
     celula *p;
     p = lst;
     if (p == NULL) printf("Lista Vazia.\n");
     else {
			while (p != NULL){
				printf ("%d\n", p->cont);
				p = p->seg;
			} 
     }     
}

void Inserir(int y, celula **lst){ 
    celula *nova;
    nova = malloc(sizeof(celula));
    nova->cont = y;

    if (*lst == NULL) {
        *lst = nova;
        nova->seg = NULL;
    } else {
        nova->seg = *lst;
        *lst = nova;
    }
}

celula *Buscar (int x, celula *lst) {
    celula *p;
    p = lst;
    while (p != NULL && p->cont != x)
        p = p->seg;
    return p;
}

celula *Buscar2 (int x, celula *lst) {
    if (lst == NULL)
        return NULL;
    if (lst->seg->cont == x)
        return lst->seg;
    return Buscar2 (x, lst->seg);
}

int main(void){
    int i;
    celula *lst;
    lst = NULL;/*lista sem cabeça nao tem inicio*/
	
	Imprimir(lst);
	
    for (i = 0; i < 10; i++)
        Inserir(i, &lst);
    Imprimir(lst);
    
    celula *p;
    p = Buscar (5, lst);
    if (p != NULL)
        printf ("\nBuscou %d\n", p->cont);
        
    p = Buscar2 (11, lst);
    if (p != NULL)
    	printf ("\nBuscou %d\n", p->cont);
    
    system("pause");
}
