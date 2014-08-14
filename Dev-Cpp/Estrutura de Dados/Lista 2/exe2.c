#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

struct cel{
	int conteudo;
	struct cel *seg;
}; typedef struct cel celula;

void Inserir(int y, celula *p){
     celula *nova;
     nova = malloc(sizeof(celula));
     nova->conteudo = y;
     nova->seg = p->seg;
     p->seg=nova;
}

void Imprimir(celula *lst){
	celula *p;
	p = lst->seg;
	while (p != NULL){
	
		printf("%d\n", p->conteudo);
		p = p->seg;
		
	}
}

void SomaInsere(celula *lst){
	celula *p, *soma;
	
	soma = malloc(sizeof(celula));
	
	p = lst->seg;	
	
	oma->conteudo = (p->conteudo)+(p->seg->conteudo);
	soma->seg = NULL;	
	
	while (p->seg != NULL) p = p->seg;
	
	p->seg = soma;	
}

void main(){
	celula *lst;
	lst = malloc(sizeof(celula));
	lst->seg = NULL;
	
	int i;
	
	Inserir(1, lst);
	Inserir(2, lst);
	Imprimir(lst);
	
	SomaInsere(lst);
	Imprimir(lst);
	system("pause");
	
	
}
