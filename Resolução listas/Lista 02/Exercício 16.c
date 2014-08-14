#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

typedef struct lista_encadeada{
    int conteudo;
    struct lista_encadeada *pc;
} celula;

void imp(celula *lista){
    celula *aux;
    for(aux = lista->pc; aux!=NULL; aux = aux->pc){
        printf("%d->", aux->conteudo);
        }
    printf("NULL\n");
}

void ins(int x, celula *lista){
    celula *nova;
    nova = malloc(sizeof(celula));
    nova->conteudo = x;
    nova->pc = lista->pc;
    lista->pc = nova;
}

void remov(int k, celula *lista){
    celula *aux;
    int i = 0;
    aux = lista->pc;
    while(aux!=NULL){
        i = i + 1;
        aux = aux->pc;
        }

    int posicao_k = i - k;

    i = 1;
    aux = lista->pc;
    while(i<posicao_k){
        aux = aux->pc;
        i = i + 1;
    }

    celula *lixo;
    lixo = aux->pc;
    aux->pc = lixo->pc;
    free(lixo);

    printf("Tamanho %d \n", i);
    printf("posicao_k %d \n", posicao_k);

}



int main(void){
    celula *lista;
    celula cabeca;
    celula *invertida;

    lista = &cabeca;
    cabeca.pc = NULL;

    ins(1, lista);
    ins(2, lista);
    ins(3, lista);
    ins(4, lista);

    imp(lista);

    remov(2, lista);

    imp(lista);

    }
