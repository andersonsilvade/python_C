#include<math.h>
#include<stdio.h>

int main(){
    struct ponto{
           int x;
           int y;
           } ponto1;
struct ponto pont ;
ponto1 = pont;
  
printf("digite o valor de x1: ");
scanf("%d",&pont.x);
printf("Digite o valor de y1: ");
scanf("%d",&pont.y);
printf("Digite o valor de x2: ");
scanf("%d",&ponto1.x);
printf("Digite o valor de y2: ");
scanf("%d",&ponto1.y);

int quadx;
int quady;
quadx = pow((ponto1.x - pont.x),2);
quady = pow((ponto1.y - pont.y),2);
int raiz;
raiz = sqrt(quadx + quady);

printf("O calculo da distancia é %d",raiz);
getch();
}
