#include <stdio.h>
#include <stdlib.h>

// tem que dar uma olhada

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

void l_v(celula *lista, int *v[]){

    celula *p;
    int i = 4;

    for(p = lista->pc; p!=NULL; p = p->pc){
        v[i - 1] = p->conteudo;
        i--;
        }
}


int main(void){

    celula *lista;
    celula cabeca;

    lista = &cabeca;
    cabeca.pc = NULL;

    inserir(1, lista);
    inserir(2, lista);
    inserir(3, lista);
    inserir(4, lista);

    int v[4], i=0;

    l_v(lista, v);

    for(i = 0; i<4; i++) printf("%d \n", v[i]);

    imprimir(lista);

    system("pause");

    }
