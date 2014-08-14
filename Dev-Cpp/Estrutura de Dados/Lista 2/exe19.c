#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
struct cel {
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

void Imprimir(celula *p){ 
      for (p = p->seg; p!=NULL; p = p->seg) printf("%d\n", p->conteudo);
}

celula *Inverter (celula *p){ //funcao ponteiro pq vai retornar ponteiro
     celula *p1, *p2;
     p = p->seg;
     p1 = p->seg;
     p2 = p->seg;
     p->seg = NULL;
     while (p1 != NULL){
           p1 = p1->seg;
           p2->seg = p;
           p = p2;
           p2 = p1;
     }
     
     return p;
}     
     
void main (){
     int i;
     celula *lst; //primeiro elemtento da lista - cabeça
     lst = malloc(sizeof(celula));
     lst->seg = NULL;
     
     for(i = 0; i < 3; i++) Inserir(i, lst);
     for(i = 0; i < 6; i++) Inserir(i, lst);
     
     Imprimir(lst);
     
     lst->seg = Inverter(lst);
     
     printf("\n\n");
     
     Imprimir(lst);
     
     system("pause");
     getch();

}
