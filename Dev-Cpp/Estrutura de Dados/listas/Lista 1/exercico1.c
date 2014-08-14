#include<stdio.h>
#include<conio.h>
#include<locale.h>

int fat(int n);

main(){
   setlocale(LC_ALL,"Portuguese");
   int num;
   printf("Digite uma número inteiro positivo: ");
   scanf("%d",&num); 
  
  fat(num);
  printf("%d",fat(num));
  getch();
}
int fat(int n){
	if((n == 1) || (n == 0)){
		  return 1;
		  }else{
		  		return n * fat(n - 1);
				}
				}
