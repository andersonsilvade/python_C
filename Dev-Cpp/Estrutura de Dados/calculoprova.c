#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <locale.h>
    float p1;
    float p2;
    float t1;
    float t2;
    float pp;
    float pt;
    float t;
    float bim1;
    float preprova = 0;
    float pretrab = 0;
    float pprova;
    float ptrab;
	float previsao ;
void minimo(){
	float minimo = 6;
	while((bim1 + previsao) <= minimo ){
		
		pprova = preprova * pp;
		ptrab = pretrab * pt;
		float previsao = pprova + ptrab;
		preprova = preprova + 0.1;
		pretrab = pretrab + 0.1 ;
		
	}
		printf("prova %.2f \n",preprova);
		
		printf("trabalho %.2f \n",pretrab);
	
}
    
    
    
    
    
void eng(){
    
    
    printf("Digite o valor da prova 1: "); 
    scanf("%f",&p1);
    printf("Digite o valor da prova 2: ");
    scanf("%f",&p2);
    printf("Digite o valor da Trabalho 1: ");
    scanf("%f",&t1);
    printf("Digite o valor da Trabalho 2: ");
    scanf("%f",&t2);
    printf("Digite o peso da prova : ");
    scanf("%f",&pp);
    printf("Digite o peso do trabalho: ");
    scanf("%f",&pt);
    
    float prova1 = p1 * pp;
    float trabalho1 = t1 * pt;
     bim1 = prova1 + trabalho1;
    
    
    float prova2 = p2 * pp;
    float trabalho2 = t2 * pt;
    float bim2 = prova2 + trabalho2;
    if(bim2 == 0){
            printf("Voce tem a media %.2f no primeiro Bimestre \n",bim1);
            printf("Voce precisa de %.2f para passar \n",(6 - bim1));
            }else{
    
    printf("Voce tem a media %.2f no segundo Bimestre \n",bim2);
    
    printf("Voce ficou com media %.2f no semestre \n",((bim2 + bim1)/2));
    
     float mediafinal = (bim1 + bim2)/2;
     
    
    if(mediafinal >= 6 ){
             printf("Voce passou!!!\n");
             }
    if((mediafinal >= 4) && ( mediafinal < 6)){
             printf("Voce Ficou para exame!!!\n");
             }
     if(mediafinal <  4 ){
             printf("Voce Foi reprovado!!!\n");
             }
             }
}
void so(){
    
    printf("Digite o valor da prova 1: "); 
    scanf("%f",&p1);
    printf("Digite o valor da prova 2: ");
    scanf("%f",&p2);
    printf("Digite o valor da Trabalho : ");
    scanf("%f",&t);
    printf("Digite o peso da prova : ");
    scanf("%f",&pp);
    printf("Digite o peso do trabalho: ");
    scanf("%f",&pt);
    
    float prova1 = p1 * pp;
    float trabalho = t * pt;
    float bim1 = prova1 ;
    
    
    float prova2 = p2 * pp;
    float bim2 = prova2 ;
    if(bim2 == 0){
            printf("Voce tem a media %.2f no primeiro Bimestre \n",bim1);
            printf("Voce precisa de %.2f para passar \n",(6 - bim1));
            }else{
    
             printf("Voce tem a media %.2f no segundo Bimestre \n",bim2);
    
             printf("Voce ficou com media %.2f no semestre \n",(bim2 + bim1));
    
     float mediafinal = bim1 + bim2 + trabalho;
    
    if(mediafinal >= 6 ){
             printf("Voce passou!!!\n");
             }
    if((mediafinal >= 4) && ( mediafinal < 6)){
             printf("Voce Ficou para exame!!!\n");
             }
     if(mediafinal <  4 ){
             printf("Voce Foi reprovado!!!\n");
             }
             }
}
      


 main(){
     setlocale(LC_ALL,"Portuguese");
     
     char escolha;
     
     printf("Escolha qual matéria você quer calcular\n");
     printf("Digite (S)istema operacionais e (E)ngernharia de software II:\n ");
     scanf("%s", &escolha);
     
    /* while((escolha != 'S')&&(escolha != 's')||(escolha != 'E')&&(escolha !='e')){
                    printf("Opção inválida !!!!\n");
                    printf("Digite (S)istema operacionais e (E)ngernharia de software II:\n ");
                    scanf("%s", &escolha);
                    }
                    */
                    
     
     if((escolha == 'S')||(escolha == 's')){
                 so();
                 }
     if ((escolha == 'E')||(escolha =='e')){
                  eng();
                  }
     
      minimo();
     
    
             
     system("pause");
     }
            
    
    
    
    
    
    
    
    
    
