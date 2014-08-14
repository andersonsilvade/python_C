#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <locale.h>

typedef struct lista_encadeada{
    int conteudo;
    struct lista_encadeada *pc;
} celula;

void imp(celula *lista){
    celula *aux;
    for(aux = lista->pc; aux!=NULL; aux = aux->pc){
        printf("%d", aux->conteudo);
        }
    //printf("NULL\n");
}

void ins(int x, celula *lista){
    celula *nova;
    nova = malloc(sizeof(celula));
    nova->conteudo = x;
    nova->pc = lista->pc;
    lista->pc = nova;
}
void soma(celula *l1, celula *l2){

    celula *p, *lista;
    celula cabeca;


    float soma1 = 0;
    int i = 0;

    p = l1->pc;
    while(p!=NULL){
        soma1 = soma1 + (p->conteudo*pow(10, i));
        printf("a %f \n",p->conteudo*pow(10, i));
        i++;
        p = p->pc;
    }

    float soma2 = 0;
    i = 0;

    p = l2->pc;
    while(p!=NULL){
        //soma2 = soma2 + (p->conteudo*pow(10, i));
        soma1 = soma1 + (p->conteudo*pow(10, i));
        //printf("a %f \n",p->conteudo*pow(10, i));
        i++;
        p = p->pc;

    }

    lista = &cabeca;
    cabeca.pc = NULL;



printf("Soma l1 %.0f \n", soma1);
printf("Soma l2 %.0f \n", soma2);

    }

int main(void){

    celula *l1;
    celula cabeca1;
    celula *l2;
    celula cabeca2;

    l1 = &cabeca1;
    cabeca1.pc = NULL;

    l2 = &cabeca2;
    cabeca2.pc = NULL;

    ins(1, l1);
    ins(2, l1);
    ins(3, l1);

    ins(1, l2);
    ins(2, l2);
    ins(3, l2);
    ins(4, l2);



    soma(l1, l2);

    //imp(lista);
    }
