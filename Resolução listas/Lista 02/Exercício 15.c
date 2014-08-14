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

void *media(celula *lista){
    celula *aux;
    for(aux = lista->pc; aux!=NULL; aux = aux->pc){
        printf("%p ->", aux);
        }
    printf("NULL\n");
}

int main(void){

    setlocale(LC_ALL, "Portuguese");

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

    media(lista);

    imp(lista);

    system("pause");

    }
