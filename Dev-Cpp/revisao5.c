#include<conio.h>
#include <string.h>

struct endereco{
	   char rua[50];
	   int num;
	   char complemento[50];
	   char bairro[50];
	   int cep;
	   char cidade[50];
	   char estado[50];
	   char pais[50];
	   };
struct data{
	   int dia;
	   int mes;
	   int ano;
	   };
struct telefone{
	   int ddd;
	   int num;
	   };

struct dados{
	   char nome[50];
	   char email [60];
	   struct telefone tel;
	   struct endereco end;
	   struct data dt;
	   };

int a;	   
struct dados agenda[100];
void ler();
void imprimir();
main(){
	   printf("Digite a quantidade de nomes a serem inseridos: ");
	   scanf("%d",&a);
	   ler();
	   getch();
	   }
void ler(){
	 int i;
	 for(i = 0;i < a;i++){
	 	   
	 	   printf("Digite o nome: ");
	 	   scanf("%s",&agenda[i].nome);
	 	   printf("Digite sua idade:\n");
	 	   printf("Dia: \n");
	 	   scanf("%s",&agenda[i].dt.dia);
	 	   printf("Mes: \n");
	 	   scanf("%s",&agenda[i].dt.mes);
	 	   printf("Dia: \n");
	 	   scanf("%s",&agenda[i].dt.ano);
	 	   printf("\nDigite o email: ");
	 	   scanf("%s",&agenda[i].email);
	 	   printf("\nDigite o DDD: ");
	 	   scanf("%d",&agenda[i].tel.ddd);
	 	   printf("\nDigite o telefone: ");
	 	   scanf("%d",&agenda[i].tel.num);
	 	   printf("\nDigite o endereço: \n");
	 	   printf("Cep: ");
	 	   scanf("%s",&agenda[i].end.cep);
	 	   printf("\nRua:");
	 	   scanf("%s",&agenda[i].end.rua);
	 	   printf("\nNumero:");
	 	   scanf("%d",&agenda[i].end.num);
	 	   printf("\nComplemento:");
	 	   scanf("%s",&agenda[i].end.complemento);
	 	   printf("\nCidade:");
	 	   scanf("%s",&agenda[i].end.cidade);
	 	   printf("\nEstado:");
	 	   scanf("%s",&agenda[i].end.estado);
	 	   printf("\nPais:");
	 	   scanf("%s",&agenda[i].end.pais);
		   }
		   }
	   
	   
	   
