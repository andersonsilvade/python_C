#include <stdio.h>
#include <stdlib.h>

typedef struct lista_encadeada{
    int conteudo;
    struct lista_encadeada *pc;
} celula;

celula *minimoI(celula *lista){
    celula *menor, *q;
    menor = lista->pc;
    for(q = lista->pc->pc; q!=NULL; q = q->pc){
        if(menor->conteudo > q->conteudo){
            menor = q;
            }
        }
    return menor;
}

celula *minimoR(celula *lista){

    if(lista->pc == NULL){
        return lista;
    } else {
        celula *x;
        x = minimoR(lista->pc);
        if(x->conteudo < lista->conteudo){
            return x;
        }
        return lista;
    }

}


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

int main(void){

    celula *lista;
    celula cabeca;
    celula *menorI;
    celula *menorR;

    lista = &cabeca;
    cabeca.pc = NULL;

    insere(1, lista);
    insere(2, lista);
    insere(-2, lista);
    insere(0, lista);
    insere(-1, lista);

    imprimir(lista);

    menorI = minimoI(lista);
    menorR = minimoR(lista);

    printf("\n MenorI %d \n", menorI->conteudo);
    printf("\n MenorR %d \n", menorR->conteudo);
    system("pause");

    }
