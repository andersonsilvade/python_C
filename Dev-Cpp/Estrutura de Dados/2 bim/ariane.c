#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <time.h>

double tempo() {
    return (double) clock()/CLOCKS_PER_SEC;
}

double abst(double x){
	if(x<0)
		return (x * (-1));
	else
		return(x);
}

int RandomInteger (int low, int high)
{
    int k;
    double d;
    d = (double) rand () / ((double) RAND_MAX + 1);
    k = d * (high - low + 1);
    return (low + k);
}

void vetor_rand(int v[], int n){
    int i;
    for (i=0; i < n; i++){
        v[i] = rand();
    }
}

void vetor_copy(int v[], int vetor_aux[], int n){
    int i;
    int c = 0;
    for(i=0; i < n; i++){
      vetor_aux[c] = *(v+i);
      c++;
    }
    
}

void Insercao (int n, int v[]) {
    int i, j, k, x;
    for (j = 1; j < n; j++) {
        for (k = 0; k < n; k++) 
        
        x = v[j];
        for (i = j-1; i >= 0 && v[i] > x; i--)
            v[i+1] = v[i];
        v[i+1] = x;
    }
}
void Selecao (int n, int v[]) {
    int i, j, k, min, x;
    for (i = 0; i < n-1; i++) {
        for (k = 0; k < n; k++) 
        
        min = i;
        for (j = i+1; j < n; j++)
            if (v[j] < v[min]) min = j;
        x = v[i]; v[i] = v[min]; v[min] = x;
    }
}
void Intercala (int p, int q, int r, int v[]) {
int i, j, k, *w;
     w = malloc ((r-p) * sizeof (int));
     i = p; j = q; k = 0;
     while (i < q && j < r) {
           if (v[i] <= v[j]) w[k++] = v[i++];
           else w[k++] = v[j++];
     }
     while (i < q) w[k++] = v[i++];
     while (j < r) w[k++] = v[j++];
     for (i = p; i < r; i++) v[i] = w[i-p];
     free (w);
}
void Mergesort (int p, int r, int v[]) {
     if (p < r - 1) {
        int q = (p + r)/2;
        Mergesort (p, q, v);
        Mergesort (q, r, v);
        Intercala (p, q, r, v);
     }
}

int Separa (int p, int r, int v[]) {
    int c, j, k, t;
    c = v[r]; j = p;
    for (k = p;k < r; k++)
        if (v[k] <= c) {
           t = v[j], v[j] = v[k], v[k] = t;
           j++;
        }
    v[r] = v[j], v[j] = c;
    return (j);
}

void Quicksort (int p, int r, int v[]) {
     int j;
     if (p < r) {
        j = Separa (p, r, v);
        Quicksort (p, j - 1, v);
        Quicksort (j + 1, r, v);
     }
}

int BuscaBinaria (int x, int n, int v[]) {
	int e, m, d;
	e = -1; d = n;
	while (e < d - 1) {
		m = (e + d)/2;
		if (v[m] < x)
			e = m;
		else 	
			d = m;
	}
	return d;
}

int BuscaSequencial(int x, int n, int v[]){
    int i;
    
    for(i = 0; i < n; i++)
        if( v[i] == x )
            return v[i];
}
int num_buscas(int v[],int v_aux[],int n, double tempo_ordenacao){
	int i=0;
	double inicio_temp1, inicio_temp2,tempo_buscaSeq = 0;
    double tempo_buscaBin = tempo_ordenacao; 
    int  x = rand();
	
	
	inicio_temp1 = tempo();
	BuscaSequencial(x, n, v);
	tempo_buscaSeq = abst(tempo() - inicio_temp1);

	inicio_temp2 = tempo();
	BuscaBinaria (x, n ,v_aux);
	tempo_buscaBin += abst(tempo() - inicio_temp2);
	
	
    while(tempo_buscaBin >= tempo_buscaSeq){
        x = rand();

        inicio_temp1 = tempo();
        BuscaSequencial(x, n, v);
        tempo_buscaSeq += abst(tempo() - inicio_temp1);

        inicio_temp2 = tempo();
        BuscaBinaria (x, n ,v_aux);
        tempo_buscaBin += abst(tempo() - inicio_temp2);    
        i++;    
    }
    
	return (i);
}



	
int main(int argc,char **argv) {
    double duracao, tempo_inicial, tempo_total, inicio_temp,
        tempo_ordenacao_sel, tempo_ordenacao_ins, tempo_ordenacao_merge,
    	tempo_ordenacao_quick;
    int n, *v, *v_aux, buscas_sel, buscas_ins, buscas_merge, buscas_quick;
    char algoritmo;
    
    

    srand(time(NULL));
 
    if (argc != 3){
        printf("Uso: %s tipo duracao\n", argv[0]);
        printf("   tipo: s(elecao) ou i(nsercao) ou m(ergesort) ou q(uicksort) ou t(odos)\n");
        printf("   duracao: duracao em segundos\n");
        return(0);
    }
 
    algoritmo = argv[1][0];
 
    if (algoritmo != 's' && algoritmo != 'i' && algoritmo != 'm' && algoritmo != 'q' && algoritmo != 't') {
        printf("opcao nao valida\n");
         return(-1);
    }
 
    sscanf(argv[2], "%lf", &duracao);

    printf("|-------------------------[EP1 - Vale a pena ordenar?]--------------------|\n"
        "|  Algoritmo escolhido: %10s     Duracao dos testes: %9.2f      |\n"
        "|            Tempos de Ordenacao                 Numero de Buscas         |\n"
        "|            Nome: Ariane Prado                                           |\n"
        "|-------------------------------------------------------------------------|\n"
        "|   n   | Insercao Selecao Merge. Quick. | Insercao Selecao Merge. Quick. |\n"
        "|-------|-----------------------------------------------------------------|\n",
         algoritmo=='s'?"selecao":algoritmo=='i'?"insercao":algoritmo=='m'?"mergesort"
         :algoritmo=='q'?"quicksort":"todos", duracao);
 
    tempo_inicial = tempo();
    tempo_total = 0;
  
    for (n=2000; tempo_total < duracao; n += 2000) {
        v = malloc(n * sizeof(int));
        if (v == NULL) {
            printf("Erro na alocacao de memoria para o vetor v com %d elementos.\n",n);
            return(-1);
        }
  
        v_aux = malloc(n * sizeof(int));
        if (v_aux == NULL) {
            printf("Erro na alocacao de memoria para o vetor v_aux com %d elementos.\n",n);
            return(-1);
        }
 
        vetor_rand(v, n);
        vetor_copy(v, v_aux, n);
    
        if (algoritmo == 's' || algoritmo == 't') {
            inicio_temp = tempo();
            Selecao(n, v_aux);
            tempo_ordenacao_sel = abst (tempo() - inicio_temp);
            buscas_sel = num_buscas(v, v_aux, n, tempo_ordenacao_sel);
            if (algoritmo != 't')   
            printf ("%d  \t            %4.2f                              %d\t\n", n, tempo_ordenacao_sel, buscas_sel);
            if (algoritmo != 's')
                vetor_copy(v, v_aux, n);
        }
 
        if (algoritmo == 'i' || algoritmo == 't') {
            inicio_temp = tempo();
            Insercao(n, v_aux);
            tempo_ordenacao_ins = abst (tempo() - inicio_temp);
            buscas_ins = num_buscas(v, v_aux, n, tempo_ordenacao_ins);
            if (algoritmo != 't')
            printf ("%d  \t    %4.2f                              %d\t\n", n, tempo_ordenacao_ins, buscas_ins);
            if (algoritmo != 'i')
                vetor_copy(v, v_aux, n);
        }
  
        if (algoritmo == 'm' || algoritmo == 't') {
            inicio_temp = tempo();
            Mergesort(0, n-1, v_aux);
            tempo_ordenacao_merge = abst(tempo() - inicio_temp);
            buscas_merge = num_buscas(v, v_aux, n, tempo_ordenacao_merge);
            if (algoritmo != 't')
            printf ("%d\t\t\t   %4.2f\t\t\t\t    %d\t\n", n, tempo_ordenacao_merge, buscas_merge);
            if (algoritmo != 'm')
                vetor_copy(v, v_aux, n);
        }
   
        if (algoritmo == 'q' || algoritmo == 't') {
            inicio_temp = tempo();
            Quicksort(0, n-1, v_aux);
            tempo_ordenacao_quick = abst(tempo() - inicio_temp);
            buscas_quick = num_buscas(v, v_aux,n, tempo_ordenacao_quick);
            if (algoritmo != 't')
                printf ("%d \t\t                   %4.2f                \t           %d\t\n", n, tempo_ordenacao_quick, buscas_quick);
        }
        if (algoritmo == 't'){
  		 printf("%d\t   %4.2f\t   %4.2f\t   %4.2f\t   %4.2f",n, tempo_ordenacao_ins, tempo_ordenacao_sel, tempo_ordenacao_merge, tempo_ordenacao_quick );
         printf("\t %d\t %d\t %d\t %d\n", buscas_ins,buscas_sel, buscas_merge, buscas_quick);
         }   
        free(v);
        free(v_aux);
        tempo_total = tempo() - tempo_inicial;
        
    }
    return(0);
    
    
}

