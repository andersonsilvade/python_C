#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

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

void remova(celula *lista){
    celula *lixo;
    lixo = lista->pc;
    lista->pc = lixo->pc;
    free(lixo);
}

celula *busca(int x, celula *lista){
    celula *aux;
    aux = lista->pc;
    while(aux!=NULL){
        if(aux->conteudo!=x && aux!=NULL){
            aux = aux->pc;
        }
    }
    return aux;
}

int compara(celula *lista1, celula *lista2){
    celula *p, *q;

    int controle = 0;

    p = lista1->pc;
    for(q = lista2->pc; q!=NULL && p!=NULL; q = q->pc){
        if(p->conteudo != q->conteudo){
            controle = 1;
            break;
            }
        p = p->pc;
        }
    return controle;
}

int main(void){

    setlocale(LC_ALL, "Portuguese");

    celula *lista1;
    celula cabeca1;

    lista1 = &cabeca1;
    cabeca1.pc = NULL;

    celula *lista2;
    celula cabeca2;

    lista2 = &cabeca2;
    cabeca2.pc = NULL;

    insere(1, lista1);
    insere(2, lista1);
    insere(3, lista1);
    insere(4, lista1);
    insere(5, lista1);

    insere(1, lista2);
    insere(2, lista2);
    insere(3, lista2);
    insere(4, lista2);
    insere(5, lista2);

    int a;

    a = compara(lista1, lista2);

    if(a==0) printf("\n As duas listas são iguais \n ");
    else printf("\n As duas listas não são iguais \n ");

    system("pause");
    return 0;

    }

