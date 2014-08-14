# include <stdio.h>
# include <stdlib.h>

typedef struct lista_encadeada{
    int conteudo;
    struct lista_encadeada *pc;
}celula;

void imprimir(celula *lista){
    celula *aux;
    for(aux=lista;aux!=NULL;aux=aux->pc){
        printf("%d \n", aux->conteudo);
        }
    }

celula *buscaR(int x, celula *lista){

    celula *aux;
    aux = lista->pc;

    if(aux->conteudo == x){
        return aux;
        } else {
            return buscaR(x, lista->pc);
        }
    }

void inserir(int x, celula **lista){
    celula *nova;
    nova = malloc(sizeof(celula));
    nova->conteudo = x;

    if (*lista == NULL) {
        *lista = nova;
        nova->pc = NULL;
    } else {
        nova->pc = *lista;
        *lista = nova;
    }
}

int main(void){

    celula *lista;
    celula *buscada;

    lista = NULL;

    inserir(1, &lista);
    inserir(2, &lista);
    inserir(3, &lista);
    inserir(4, &lista);

    imprimir(lista);

    buscada = buscaR(3, lista);

    printf("\n Buscou %d \n", buscada->conteudo);

    system("pause");

    }
