#include<math.h>
#include<stdio.h>
#include<locale.h>
#include<conio.h>
#include<stdlib.h>

struct produtos{
       char nome[15];
       char setor[15];
       int quantidade;
       float preco;
       };
//RESPOSTA B
int a;
int i;
char setor[10];
char menu1; 
float capitalInvestido = 0;
struct produtos estoque[100];
void ler();
void menu();
void imprime();
void imprimeSetor();
void valorEstoque();
void sair();

main(){
       setlocale(LC_ALL,"Portuguese");
       printf("DIGITE A QUANTIDADE DE PRODUTOS A SEREM CADASTRADOS\n");
       scanf("%d",&a);
       ler();
       while(menu){
       menu();
       }
       getch();
       }
void ler(){
     for(i = 0;i < a ;i++){
           printf("Digite o nome do produto[%d]:  ",(i+1));
           scanf("%s",&estoque[i].nome);
           printf("\nDigite o setor:  ");
           scanf("%s",&estoque[i].setor);
           printf("\nDigite a Quantidade: ");
           scanf("%d",&estoque[i].quantidade);
           printf("\nDigite o preço: ");
           scanf("%f",&estoque[i].preco);
           printf("\n");
           }
           }
void menu(){
       
     do{
            printf("ESCOLHA UMA OPÇÃO ABAIXO\n");
            printf("(1)Imprimir todos os produtos\n(2)Imprimir produtos por setor\n(3)Valor total do estoque\n(4)Sair do programa\n");
            scanf("%s",&menu1);
            if(menu1 == '2'){
                    printf("digite o setor: ");
                    scanf("%s",&setor);
                            }
            }
            while((menu1 != '1')&&(menu1 != '2')&&(menu1 != '3')&&(menu1 != '4'));
            switch(menu1){
                         case '1': imprime();
                         break;
                         case '2':imprimeSetor();
                         break;
                         case'3':valorEstoque();
                         break;
                         case'4':sair();
                         break;
                         }
                         }
                         
void imprime(){
     for(i = 0;i < a;i++){
           
           printf("\n###########\n");
           printf("Produto: %s\n",estoque[i].nome);
           printf("Setor: %s\n",estoque[i].setor);
           printf("Quantidade: %d\n",estoque[i].quantidade);
           printf("Preço: %.2f\n",estoque[i].preco);
          
           }
           }
           
void imprimeSetor(){
     for(i = 0;i < a; i++){
           if(strcmp(setor,estoque[i].setor)==0){
           printf("%s\n",estoque[i].nome);
           }
           }
           }
           
void valorEstoque(){
     
     for(i = 0;i < a; i++){
           capitalInvestido = (capitalInvestido + estoque[i].preco);
           }
           printf("Valor total do estoque é %.2f \n", capitalInvestido);
           }
           
void sair(){
     exit(0);
     }
     
           
            
     
     
       
