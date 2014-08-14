#include <stdio.h>
#include <locale.h>


main() {
  setlocale(LC_ALL,"Portuguese");
  int nalunos;
  printf("Digite a quantidade de aluno(s): ");
  scanf("%d",&nalunos);
  
  int x=1 ; 
  int i ;
  char nomealunos[nalunos][1000];
  float nota1[nalunos];
  float nota2[nalunos];
  float nota3[nalunos];
  float media[nalunos];
  int cont=0;
  for(i = 0; i<nalunos;i++){         
                   printf("digite o nome do %dº aluno : ",x);
                   scanf("%s",& nomealunos[i]);//pede o nome dos alunos
                   printf("Entre a primeira nota deste aluno: ");
                   scanf("%f", &nota1[i]);
                   printf("Entre a segunda nota deste aluno: ");
                   scanf("%f", &nota2[i]);
                   printf("Entre a terceira nota deste aluno: ");
                   scanf("%f", &nota3[i]);
                   media[i]=(nota1[i]+nota2[i]+nota3[i])/3;
                   x++;
                   printf("\n");
                   }
                   for (i=0;i<nalunos;i++){
                       if(media[i]>=5){
                                    cont++;
                                    }
                                    }
                   if (cont>0){
                               printf("temos %d aluno(s) acima da média!!",cont);
                               }
                               else{
                                    printf("não temos alunos com a nota acima da média!!");
                                    }
                   
                  
                   getch();
                   }
                   
