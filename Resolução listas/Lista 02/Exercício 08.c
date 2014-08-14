#include <stdio.h>
#include <stdlib.h>

typedef struct lista_encadeada{
    int conteudo;
    struct lista_encadeada *pc;
} celula;

void imprimir(celula *lista){
    celula *aux;
    for(aux=lista; aux!=NULL; aux=aux->pc){
        printf("%d ->", aux->conteudo);
        }
    printf("NULL");
    }

void insere(int x, celula **lista){
    celula *nova;
    nova = malloc(sizeof(celula));
    nova->conteudo = x;
    if(*lista==NULL){
        *lista   = nova;
        nova->pc = NULL;
        } else {
            nova->pc = *lista;
            *lista = nova;
        }
}

void insereSC(int x, int posi, celula **lista){

    celula *nova;
    nova = malloc(sizeof(celula));
    nova->conteudo = x;

    celula *p;
    p = *lista;

    int i = 0;

    if(*lista==NULL){
        *lista   = nova;
        nova->pc = NULL;
        } else {

             while(i<posi){
                p = p->pc;
                i = i + 1;
                }

            printf("Conteudo %d \n", p->conteudo);

            nova->pc = p->pc;
            p->pc = nova;

        }
            }


int main(void){

    celula *lista;
    celula *buscada;
    celula *lista1;

    lista = NULL;

    lista1 = NULL;

    insere(1, &lista);
    insere(2, &lista);
    insere(3, &lista);
    insere(5, &lista);
    insere(6, &lista);

    imprimir(lista);

    printf("\n\n ---------------- \n\n");

    insereSC(4, 1, &lista);

    insereSC(1, 15, &lista1);

    imprimir(lista);
    printf("\n");
    imprimir(lista1);

    printf("\n\n");

    system("pause");

}
