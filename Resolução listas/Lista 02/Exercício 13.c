#include <stdio.h>
#include <stdlib.h>

typedef struct lista_encadeada{
    int conteudo;
    struct lista_encadeada *pc;
} celula;

void imprima(celula *lista){
    celula *aux;
    for(aux = lista; aux!=NULL; aux = aux->pc){
        printf("%d \n", aux->conteudo);
        }
    printf("\n");
}

void insira(int x, celula **lista){
    celula *nova;
    nova = malloc(sizeof(celula));
    nova->conteudo = x;
    if(*lista==NULL){
        *lista = nova;
        nova->pc = NULL;
     } else {
        nova->pc = *lista;
        *lista = nova;
        }
    }

void concatena(celula **lista1, celula **lista2){
    celula *p;
    p = *lista2;
    while(p->pc!=NULL){
         p = p->pc;
    }

    p->pc = *lista1;
    *lista1 = *lista2;
}

int main(void){

    celula *lst1;

    lst1 = NULL;

    insira(1, &lst1);
    insira(2, &lst1);
    insira(3, &lst1);

    celula *lst2;

    lst2 = NULL;

    insira(4, &lst2);
    insira(5, &lst2);
    insira(6, &lst2);
    insira(7, &lst2);

    concatena(&lst1, &lst2);

    imprima(lst1);



    system("pause");

}
