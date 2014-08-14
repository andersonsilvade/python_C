#include<math.h>
#include<stdio.h>
#include<locale.h>
#include<conio.h>
#include<stdlib.h>
struct carro{
              char nome[15];
              int ano;
              char cor [10];
              float preco;
              };

int a ;
int i;
char menu1;
float oppreco;
char opmarca[10];
char opcor[10];
int opano[4];
struct carro vetcarro[20];
void ler();      
void menu();
void imprimeTodos();
void imprimePorPreco();
void imprimePorMarca();
void imprimePreco();



main(){
       setlocale(LC_ALL,"Portuguese");

        printf("Digite quantos carros serão cadastrado: ");
        scanf("%d",& a); 
           ler();
           while(menu){
           menu();
                  }
      
       getch();
       }
       
void ler(){
      for(i = 0;i < a;i++){
       printf("Digite  nome e marca  do carro %d: \n",i+1);
       scanf("%s",&vetcarro[i].nome);
       
       printf("Digite o ano do carro %d: \n" ,i+1);
       scanf("%d",&vetcarro[i].ano);
       
       printf("Digite a cor do carro %d: \n",i+1);
       scanf("%s",&vetcarro[i].cor);
       
       printf("Digite o valor do carro %d: \n",i+1);
       scanf("%f",&vetcarro[i].preco);
       }
       }
       
void menu(){
      do{
           printf("Escolha uma opção \n");
          printf("(1)Para imprimir todos os carros\n(2)Para carros com preço desejado\n(3)Por marcas\n(4)por marca cor e ano\n(5)sair do programa \n");
          scanf("%s",&menu1);
          if (menu1 == '2'){
                   printf("Digite o preço: ");
                   scanf("%f",&oppreco);
                   }
          if (menu1 == '3'){
                   printf("Digite a marca: ");
                   scanf("%s",&opmarca);
                   }
          if (menu1 == '4'){
                   printf("Digite a marca: ");
                   scanf("%s",&opmarca);
                   printf("Digite a cor: ");
                   scanf("%s",opcor);
                   printf("Digite o ano: ");
                   scanf("%d",&opano);
                   }
          }
          
          while((menu1 != '1') && (menu1 != '2') && (menu1 != '3') && (menu1 != '4') && (menu1 != '5'));
          switch(menu1){
                       case '1' : imprimeTodos(); 
                                  break;
                       case '2' :imprimePorPreco();
                                  break;
                       case '3' :imprimePorMarca();  
                                 break;
                       case '4' :imprimePreco(); 
                                 break;
                        case '5' : exit(0);
                            break ;
                            }
                            }
void imprimeTodos(){
          for(i = 0; i < a; i++){
                                  printf("Nome carro : %s \n",vetcarro[i].nome);
                                  printf("Ano carro : %d \n",vetcarro[i].ano);
                                  printf("Cor carro : %s \n",vetcarro[i].cor);
                                  printf("Preço carro : %.2f \n",vetcarro[i].preco);
                                  printf("\n");
                                  }
                  }
void imprimePorPreco(){
             for(i = 0 ; i <a; i++){
                                 
                                  if(vetcarro[i].preco <= oppreco){
                                  printf("Nome carro: %s \n",vetcarro[i].nome);
                                  printf("Ano carro: %d \n",vetcarro[i].ano);
                                  printf("Cor carro: %s \n",vetcarro[i].cor);
                                  printf("\n");
                                  }
                                          }
                                          }
void imprimePorMarca(){
             for(i = 0 ; i <a; i++){
                                  if(strcmp(opmarca, vetcarro[i].nome)==0){
                                  printf("\n");
                                  printf("Ano carro : %d \n",vetcarro[i].ano);
                                  printf("Cor carro : %s \n",vetcarro[i].cor);  
                                  printf("Preço carro: %.2f \n ", vetcarro[i].preco);
                                  }
                                  } 
                                  }
void imprimePreco(){   
               for(i = 0 ;i <a ;i++){
                                  int z = 0;
                                  if((strcmp(opmarca,vetcarro[i].nome)== 0)&&(strcmp(opcor,vetcarro[i].cor)== 0)&&(opano [z]==vetcarro[i].ano)){
                            
                                  printf("\nPreço carro: %.2f \n ", vetcarro[i].preco);
                            }
                            }  
                            }                  
     
       
     
          
              
