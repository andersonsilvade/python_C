#include <stdio.h>
#include <stdlib.h>
/*REMOVE DUPLICADOS. Escreva um código que remova elementos duplicados em uma lista encadeada não ordenada. Suponha a lista com cabeça.*/

struct lista_encadeada{
    int conteudo;
    struct lista_encadeada *pc;
};

typedef struct lista_encadeada celula;

void imprimir1(celula *lista){
    celula *aux;
    for(aux=lista->pc; aux!=NULL; aux=aux->pc){
        printf("%d->", aux->conteudo);
    }
    printf("NULL \n\n");
}

void inserir1(int x, celula *lista){
    celula *nova;
    nova = malloc(sizeof(celula));
    nova->conteudo = x;
    nova->pc = lista->pc;
    lista->pc = nova;
}

void repetidos(celula *lista){

    celula *aux,*p, *q, *r;

    p = lista->pc;

    while(p!=NULL){

        q = p->pc;
        r = p;

        while(q!=NULL){

                if(p->conteudo == q->conteudo && q->pc!=NULL ){
                    aux = q;
                    r->pc = aux->pc;
                    free(aux);
                    q = r;
                    }

                    if(q->pc==NULL && p->conteudo == q->conteudo){
                        r->pc = NULL;
                        break;
                    }
                    if(q->pc==NULL){
                        break;
                    }
        r = q;
        q = q->pc;
        }
        p = p->pc;
    }
}


int main(void){

    celula *lista;
    celula cabeca;

    lista = &cabeca;
    cabeca.pc = NULL;

    inserir1(1, lista);
    inserir1(2, lista);
    inserir1(1, lista);
    inserir1(2, lista);
    inserir1(3, lista);
    inserir1(4, lista);
    inserir1(4, lista);
    inserir1(5, lista);
    inserir1(6, lista);
    inserir1(7, lista);
    inserir1(8, lista);
    inserir1(9, lista);


    imprimir1(lista);

    repetidos(lista);

    imprimir1(lista);

    system("pause");

}

/*#include <stdio.h>
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

void imprimirA(celula *lista){
    celula *aux;
    for(aux=lista->pc; aux!=NULL; aux = aux->pc){
        if(aux->conteudo!=0)
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

void removerD(int x, celula *lista){

    celula *lixo, *p;

    for(p = lista->pc; p!=NULL; p = p->pc){

        if(p->pc->conteudo == x){
            //p->pc->pc = NULL;
            lixo = p->pc;
            p->pc = lixo->pc;
            free(lixo);
             break;
            }
    }
}

void duplicados(celula *lista){

    celula *p, *q, *r;

    int controle = 0;

    p = lista->pc;
    q = lista->pc;

    while(p!=NULL){
        while(q!=NULL){

            if(p!=q && p->conteudo == q->conteudo){
                q->conteudo = 0;
                }
            q = q->pc;
            }

        p = p->pc;
        q = lista->pc;
    }

    for(p = lista->pc; p!=NULL; p = p->pc){
            removerD(0, p);
            }

        }



/*void duplicados(celula *lista){

    celula *p, *q, *r;

    int controle = 0;

    p = lista->pc;
    q = lista->pc;

    while(p!=NULL){
        while(q!=NULL){

            if(p!=q && p->conteudo == q->conteudo){
                q->conteudo = 0;
                }
            q = q->pc;
            }

        p = p->pc;
        q = lista->pc;
    }

    for(p = lista->pc; p!=NULL; p = p->pc){
            removerD(0, p);
            }

        }

// precisa de alocação dinâmica pq lá em baixo vai ser declarado como ponteiro, e ponteiro aponta para alguma coisa, e se não houvr espaço reservado vai dar erro!

int main(void){

    celula cabeca;
    celula *lst;

    lst = &cabeca;
    cabeca.pc = NULL;

    inserir(1, lst);
    inserir(1, lst);
    inserir(2, lst);
    inserir(2, lst);
    inserir(3, lst);
    inserir(3, lst);
    inserir(4, lst);
    inserir(4, lst);
    inserir(5, lst);


    imprimir(lst);

    printf("\n");

    duplicados(lst);

    //removerD(2, lst);

    //duplicados(lst);

    imprimir(lst);


    system("pause");


    }*/
