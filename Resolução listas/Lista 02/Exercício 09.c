#include <stdio.h>
#include <stdlib.h>

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

celula *v_l(int v[], int n){

    celula *lista;
    celula cabeca;

    lista = &cabeca;
    cabeca.pc = NULL;

    int i;

    for(i = 0; i<n; i++){

        celula *nova;
        nova = malloc(sizeof(celula));
        nova->conteudo = v[i];
        nova->pc = lista->pc;
        lista->pc = nova;
    }

    return lista;
}

int main(void){


    int v[] = {1, 2, 3, 4, 5};

    celula *lst;

    lst = v_l(v, 5);

    imprimir(lst);

    system("pause");

    }
