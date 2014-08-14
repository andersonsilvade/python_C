#include <stdio.h>
#include <stdlib.h>

// refazer

typedef struct lista_encadeada{
    int conteudo;
    struct lista_encadeada *pc;
} celula;

void imprimir(celula *lista){
    celula *aux;
    for(aux = lista->pc; aux!=NULL; aux = aux->pc){
        printf("%d \n", aux->conteudo);
        }
    }

void inserir(int x, celula *lista){
    celula *nova;
    nova = malloc(sizeof(celula));
    nova->conteudo = x;
    nova->pc = lista->pc;
    lista->pc = nova;
    }

void remover(celula *lista){
    celula *lixo;
    lixo = lista->pc;
    lista->pc = lixo->pc;
    free(lixo);
    }

celula *copia(celula *lista){

    celula *cop;
    celula cabeca;

    cop = &cabeca;
    cabeca.pc = NULL;

    celula *p;
    celula *q;

    p = lista->pc;

    // aqui acha a primeira célula da lista_encadeada

    while(p->pc!=NULL){
        p = p->pc;
    }

    cop = NULL;

    cop->pc->conteudo = p->conteudo;
    cop = cop->pc;

    printf("\nConteudo %d \n", cop->conteudo);

    // aqui copia a primeira célula da lista_encadeada

        while(q->pc!=p){
        q = q->pc;
        }



        }

int main(void){


    celula *lista;
    celula cabeca;

    lista = &cabeca;
    cabeca.pc = NULL;

    celula *c;

    inserir(1, lista);
    inserir(2, lista);
    inserir(3, lista);

    imprimir(lista);

    c = copia(lista);

    imprimir(c);

    }
