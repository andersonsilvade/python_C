#include <stdio.h>
#include <stdlib.h>

struct cel {
       int conteudo;
       struct cel *seg; /* seguinte */
};typedef struct cel celula;


void Insere (int y, celula *p) {
    celula *nova;
    nova = malloc (sizeof (celula));
    nova->conteudo = y;
    nova->seg = p->seg;
    p->seg = nova;
}


void Imprima (celula *lst) {
    celula *p;
    for (p = lst->seg; p != NULL; p = p->seg)
        printf ("%d\n", p->conteudo);
}

int main(void){
	celula cabeca;
	celula *lst;
	celula *p;
	int vetor[10]={1,2,3,4,5,6,7,8,9,10};
    lst = &cabeca;
    int n = sizeof(vetor);
	cabeca.seg = NULL;
	int i ;
	for(i = (n-1);i >=0 ;i--){
	Insere(vetor[i],lst);
      }
      Imprima(lst);
      
      system("pause");
	  }
