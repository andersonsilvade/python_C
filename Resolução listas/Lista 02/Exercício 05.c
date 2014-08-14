#include <stdio.h>
#include <stdlib.h>

// tem que arrumar a recursiva

typedef struct lista_encadeada{
    int conteudo;
    struct lista_encadeada *pc;
} celula;

void imprimir(celula *lista){
    celula *aux;
    for(aux=lista->pc; aux!=NULL; aux=aux->pc){
        printf("%d \n", aux->conteudo);
        }
    }

void insere(int x, celula *lista){
    celula *nova;
    nova = malloc(sizeof(celula));
    nova->conteudo = x;
    nova->pc = lista->pc;
    lista->pc = nova;
    }


celula *buscaCI(int x, celula *lista){
    celula *aux;
    for(aux=lista->pc; aux!=NULL; aux=aux->pc){
        if(aux->conteudo==x){
            return aux;}
    }
}

celula *buscaCR(int x, celula *lista){
    if(lista->pc==NULL){
        return lista;
    } else{
        return buscaCR(x, lista->pc);
        }
}




int main(void){

    celula *lista;
    celula cabeca;
    celula *buscadaCI;
    celula *buscadaCR;

    lista = &cabeca;
    cabeca.pc = NULL;

    insere(1, lista);
    insere(2, lista);
    insere(3, lista);
    insere(4, lista);
    insere(5, lista);

    imprimir(lista);

    buscadaCI = buscaCI(3, lista);

    printf("\n BuscaCI %d \n", buscadaCI->conteudo);

    buscadaCR = buscaCR(3, lista);

    printf("\n BuscaCR %d \n", buscadaCR->conteudo);

    system("pause");
}
