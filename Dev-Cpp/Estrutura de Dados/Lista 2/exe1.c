#include<stdio.h>
#include <stdlib.h>

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

void RemoverDup(celula *lst){
     celula *lixo, *q, *r, *p;      
     
     for (p = lst->seg; p!=NULL; p = p->seg){
         r = p;
         for (q = p->seg; q!=NULL; q = q->seg){
             if (p->conteudo == q->conteudo){
                        lixo = q;
                        r->seg = lixo->seg;
                        free(lixo);
                        q = r;
             }
         r = q;
         }    
     }  
}

void main (){
     int i;
     celula *lst; //primeiro elemtento da lista - cabeça
     lst = malloc(sizeof(celula));
     lst->seg = NULL;
     
     for(i = 0; i <= 6; i++) Inserir(i, lst);
     for(i = 0; i <= 10; i++) Inserir(i, lst);
          
     Imprimir(lst);
     RemoverDup(lst);
     
     printf("Sem duplicados:\n");
     Imprimir(lst);     
     
     getch();
}
