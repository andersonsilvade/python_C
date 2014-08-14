#include <stdio.h>
#include <stdlib.h>

typedef struct lista_encadeada{
    int conteudo;
    struct lista_encadeada *pc;
} celula;

void imprimir(celula *lista){
    celula *aux;
    for(aux=lista->pc; aux!=NULL; aux=aux->pc){
        printf("%d ->", aux->conteudo);
        }
    printf("NULL");
    }

void insere(int x, celula *lista){
    celula *nova;
    nova = malloc(sizeof(celula));
    nova->conteudo = x;
    nova->pc = lista->pc;
    lista->pc = nova;
    }

void insereC(int x, celula *p, celula *lista){
    celula *nova;
    nova = malloc(sizeof(celula));
    nova->conteudo = x;
    nova->pc = p->pc;
    p->pc = nova;

}

/*void insereC(int x, celula *p, celula *lista){
    celula *nova;
    celula *aux;
    nova = malloc(sizeof(celula));
    nova->conteudo = x;
    for(aux=lista->pc; aux!=NULL; aux=aux->pc){
        if(aux->pc == p){
            nova->pc = p;
            aux->pc = nova;
            break;
            }
     }
} */

celula *busca(int x, celula *lista){
    celula *aux;
    aux = lista->pc;
    while(aux!=NULL){
        if(aux->conteudo!=x && aux!=NULL){
            aux = aux->pc;
            }

        return aux;
    }
}

int main(void){

    celula cabeca;
    celula *lista;
    celula *buscada;

    lista = &cabeca;
    cabeca.pc = NULL;

    insere(1, lista);
    insere(2, lista);
    insere(5, lista);
    insere(6, lista);

    imprimir(lista);

    printf("\n\n ---------------- \n\n");

    buscada = busca(5, lista);

    insereC(3, buscada, lista);

    buscada = busca(5, lista);

    insereC(4, buscada, lista);


    imprimir(lista);

    printf("\n\n");

    system("pause");

}
