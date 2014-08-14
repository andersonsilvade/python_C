#include <stdio.h>
#include <stdlib.h>
#include<conio.h>

struct cel {
       int conteudo;
       struct cel *seg; /* seguinte */
};

typedef struct cel celula;

int n = 50;
int m = 3;

int main (){
    int i;
    celula *lst; celula *p_aux;
    lst = malloc (sizeof(celula));
    lst->seg = NULL;
    
    Insere (n, lst);
