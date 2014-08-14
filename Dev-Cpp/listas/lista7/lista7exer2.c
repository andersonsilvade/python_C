#include<math.h>
#include<stdio.h>
#include<locale.h>
#include<conio.h>
#include<stdlib.h>
struct data{
       int mes;
       int ano;
       };
struct gado{
       int codigo;
       int leite;
       int alimento;
       char abate[1];
      struct data nasc;
       };
 int a ;
 struct gado vetgado[20];
 int leite = 0;
 int previsao = 0;
 int previsaoA = 0;
 int contagado = 0;
 int alimentoSemanal = 0;
 
void menu();
void ler();  
void abate();  
void leiteSemanal();
void consumoAlimento();
void previsaoLeite();
void previsaoAlimento();
void contaGado();
void sair();
void imprimirLeite();
void imprimirAlimento();
       

main(){
       setlocale(LC_ALL,"Portuguese");
       
       printf("Digite a quantidade de gado a ser cadastrado: \n");
       scanf("%d",&a);
       
      
       ler();
       leiteSemanal();
       consumoAlimento();
       abate();
       while(menu){
       menu();
       }
       getch();
       }
  //RESPOSTA A     
void ler(){
        int i;
        for(i = 0;i < a ; i++){
              printf("Digite o codigo do gado [%d]: \n",i+1);
              scanf("%d",&vetgado[i].codigo);
              
              printf("Quantidade de litros de leite produzido por semana L: \n");
              scanf("%d",&vetgado[i].leite);
              
              printf("Quantidade de alimento ingerido por semana em Kg: \n");
              scanf("%d",&vetgado[i].alimento);
              
              printf("Digite o mes de nascimento: \n");
              scanf("%d",&vetgado[i].nasc.mes);
              
              printf("Digite o ano de nascimento: \n");
              scanf("%d",&vetgado[i].nasc.ano);
              }
              }
//RESPOSTA B
void abate(){
     int i;
     int anoatual = 2013;
     int idade = 0 ;
     

     for (i = 0; i < a; i++){   
         idade = anoatual-vetgado[i].nasc.ano ; 

      if((idade > 5) ||(vetgado[i].leite <40)||(((vetgado[i].leite > 50) && (vetgado[i].leite <=70)) && (vetgado[i].alimento >50))){
               
               contagado++;
               previsao = previsao - vetgado[i].leite;
               previsaoA = previsaoA - vetgado[i].alimento;
               } 
               }     
               }
       
  //RESPOSTA C1   
void leiteSemanal(){
     int i;
    
     for(i = 0 ; i < a; i++){
           leite = leite + vetgado[i].leite;
           previsao = leite;
           }
          
           }
     
//RESPOSTA C2   
void consumoAlimento(){
     int i;
    
     for(i = 0; i < a;i++){
           alimentoSemanal = alimentoSemanal + vetgado[i].alimento;
           previsaoA = alimentoSemanal;
           }
          
           }
//RESPOSTA C3
void previsaoLeite(){
     printf("\n\n Previsão de produção de leita para proxima semana: %d litros\n\n",previsao);
     }
//RESPOSTA C4
void previsaoAlimento(){
     printf("\n\n Previsão de consumo de alimento para proxima semana:  %d Kg\n\n" ,previsaoA);
     }
//RESPOSTA C5
void contaGado(){
     if(contagado==0){
                      printf("\nNão temos gado para abate\n\n");
                      
                      }else{
                            printf("\nTeremos %d gados para abate\n\n",contagado);
                            }
                            }
//RESPOSTA C6
void sair(){
     exit(0);
     }
  //RESPOSTA C   
void menu(){
     char menu;
     do{
        printf("\nESCOLHA A OPÇÃO DESEJADA \n");
        printf("\n(1)Quatidade semanal de leite\n(2)Consumo semanal de alimento\n(3)Previsão de produção de leite após abate\n(4)Previsão de consumo de alimento após abate\n(5)Quatidade de gado para abate\n(6)Finalizar programa\n");
        scanf("%s",&menu);
        }
        while((menu != '1')&&(menu != '2')&&(menu != '3') && (menu != '4') && (menu != '5') && (menu != '6'));
        switch(menu){
                     case '1': imprimirLeite();
                     break;
                     case '2': imprimirAlimento();
                     break;
                     case '3': previsaoLeite();
                     break;
                     case '4': previsaoAlimento();
                     break;
                     case '5': contaGado();
                     break;
                     case '6': sair();
                     break;
                     }
                     }
void imprimirLeite(){
      printf("\n\nQuantidade semanal de leite produzido %d Litros\n\n",leite);
      }
      
void imprimirAlimento(){
      printf("\n\n A quantidade de alimento consumido semanalmente %d Kg\n\n",alimentoSemanal);
      }
     
                  
