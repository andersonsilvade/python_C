#include<conio.h>
#include<stdio.h>
#include<stdlib.h>

void apresentacao(){
	 printf("#####################\n");
	 printf("#                   #\n");
	 printf("# BEM VINDO AO JOGO #\n");
	 printf("#                   #\n");
	 printf("#####################\n");
	 }
	 
int chance = 9;
	 
main(){
	   
	   
	   apresentacao();
	    int num = (rand()%100);
	   int dig;
	   printf("Digite um numero: ");
	   scanf("%d",&dig);
	  // int t=num-dig;
   
	   printf("%d",num);
	   
	   while(chance !=0){
	   if(num!=dig){
	   				printf("Voce errou tente outra vez, voce tem mais %d chances\n ",(chance) );
	   				scanf("%d",&dig);
	   				chance = chance -1;   				
	   
		  }else {
		  		printf("voce ganhou parabens");
				}
				}
         
		 if(chance == 0){
		 		   printf("voce perdeu !!!! acabaram suas chances");
		 		   
				   }
		 		   
		  		
	   
	   
	   
	   getch();
	   }
	 
