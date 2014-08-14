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
    printf("\n");
    }

void inserir(int x, celula *lista){
    celula *nova;
    nova = malloc(sizeof(celula));
    nova->conteudo = x;
    nova->pc = lista->pc;
    lista->pc = nova;
    }
int conta(celula *lista){
    celula *p;
    int contador = 0;
    for(p = lista->pc; p!=NULL; p = p->pc){
        contador = contador + 1;
        }
    return contador;
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
    inserir(5, lista);

    imprimir(lista);

    int n;

    n = conta(lista);

    printf("\n Numero de celulas: %d \n", n);

    system("pause");
}
