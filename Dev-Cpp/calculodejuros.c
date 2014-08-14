#include<stdio.h>
#include<conio.h>
#include<locale.h>
main()
{
      setlocale(LC_ALL,"Portuguese");
      float vlv; //valor do veiculo
      float vlent;//valor de entrada
      float qtpar;//quantidade de parcelas
      float vlpar;//valor das parcelas
      float vlfin;//valor do financiamento
      float ttfin;//total financiado
      float vljuros;//valor de juros pagos
      float perjuros;//percentual de juros
      float jurosmen;//juros mensal
      char p = '%';
      
      printf("Digite o valor do veiculo: ");
      scanf("%f",&vlv);
      printf("Digite o valor da entrada: ");
      scanf("%f",&vlent);
      printf("Digite a quantidade de parcelas: ");
      scanf("%f",&qtpar);
      printf("Digite o valor da parcela: ");
      scanf("%f",&vlpar);
       printf("\n");
      vlfin = vlv - vlent;
      ttfin = (qtpar*vlpar)+vlent;
      vljuros = ttfin-vlv;
      perjuros = (vljuros/vlv)*100;
      jurosmen = (perjuros/qtpar);
      printf("Dados do seu financiamento");
       printf("\n");
      printf("\n");
      printf("O valor finaciado é de %0.2f \n " ,vlfin);
     printf("\n");
      printf("O total do fincanciamento é de %0.2f \n",ttfin);
      printf("\n");
      printf("O valor de juros pago é de %0.2f \n",vljuros);
      printf("\n");
      printf("O total de juros é de %0.2f %c \n",perjuros,p);
     printf("\n");
      printf("O juros mensal é de %0.2f %c\n",jurosmen,p);
      
      getch();
      }
