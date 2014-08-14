#include <stdio.h>
#include <stdlib.h>

typedef struct lista_encadeada{
    int conteudo;
    struct lista_encadeada *pc;
} celula;

void imprimir(celula *lista){
    celula *aux;
    for(aux=lista; aux!=NULL; aux=aux->pc){
        printf("%d->", aux->conteudo);
        }
    }

void insere(int x, celula **lista){
    celula *nova;
    nova = malloc(sizeof(celula));
    nova->conteudo = x;
    if(*lista == NULL){
        *lista = nova;
        nova->pc = NULL;
    } else{
        nova->pc = *lista;
        *lista = nova;
        }
    }

void remover(int x, celula *lista){
    celula *aux;
    celula *lixo;
    for(aux = lista; aux!=NULL; aux = aux->pc){
        if(aux->pc->conteudo == x){
            lixo = aux->pc;
            aux->pc = lixo->pc;
            free(lixo);
            break;
            }
    }
}


int main(void){

    celula *lista;

    lista = NULL;

    insere(1, &lista);
    insere(2, &lista);
    insere(3, &lista);
    insere(4, &lista);
    insere(5, &lista);


    imprimir(lista);

    remover(4, lista);

    printf("\n ------------------ \n");
    printf("\n Removeu 4 \n \n");

    imprimir(lista);


    }
