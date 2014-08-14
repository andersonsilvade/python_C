#include <stdio.h>
#include <stdlib.h>

void troca2(int p,int q){
	int temp;
	temp = p;
	p = q;
	q = temp;
	printf("@@@@    %d %d \n",p,q);
}
	
void troca(int*p, int *q){
	int temp;
	temp = *p;
	*p = *q;
	*q = temp;

}

void main(void){
	int a = 33 ,b = 77;
	printf("Antes a = %d, b = %d \n ",a , b);
	
	troca2(a,b);
	
	printf("Depois a = %d , b = %d \n",a , b);
	
	int *v;// vetor dinamico
	int i;
	int f = 100;
	v = malloc(10 * sizeof(int));
	
	for(i = 0; i < 10; i++){
	
	v[i] = f;
	f = f + 10;
	
}
	for(i = 0;i < 10; i++)
	printf("%d ",v[i]);
	putchar('\n');
	system("pause");
	
	
}



