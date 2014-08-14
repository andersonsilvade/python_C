#include <stdio.h>
#include <stdlib.h>

struct cel {
       int conteudo;
       struct cel *seg; /* seguinte */
};
typedef struct cel celula;

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
void *Inverte(celula *lst){
	 celula *p;
	 celula *p1;
	 celula *p2;
	 p = lst->seg;
     p1 = p->seg;
	 p2 = p->seg;
	 p->seg = NULL;
	 while(p1 != NULL){
	 		  p1 = p1->seg;
	 		  p2->seg = p;
	 		  p = p2;
	 		  p2 = p1;
			  }
			  return p;
	 }

int main(void){
	celula cabeca;
	celula *lst;
	celula *p;
    lst = &cabeca;
	cabeca.seg = NULL;
	int i;
	for(i = 0;i < 10;i++){
	Insere(i,lst);
      }

	printf("Antes\n");
	Imprima(lst);
   
	printf("Depois\n");
    lst->seg = Inverte(lst);
	Imprima(lst);
	
	system("pause");
}
	
	
