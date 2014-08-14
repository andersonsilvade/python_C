#include <stdio.h>
 
 int main()
 {
    FILE *fp;
    FILE *lt;
    int resul;
    fp = fopen ("SOMA.txt", "wt");
    lt = fopen("SOMA.txt","rt");
    int a = 2;
    int b = 3;
    int c = a+b;
    int d = c;
    if (fp == NULL) {
    	
       printf ("Houve um erro ao abrir o arquivo.\n");
       return 1;
    }
    	
    resul =  fprintf(fp,"%d",c);
    if(resul == EOF){
    	printf("erro na gravaçã");
    }
    
    fscanf(lt,"%d",&d);
    printf ("Arquivo soma criado com sucesso.\n ");
    fclose (fp);
    return 0;
 }
