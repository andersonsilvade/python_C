#include <stdio.h>
#include <stdlib.h>

int minmaxR (int v[], int n, int *min, int *max, int *diferenca){

    printf("passou aqui ! \n");

    if (n == 0){
        return v[0];
    } else {
        int x;

        x = minmaxR (v, n - 1, min, max, diferenca);

        printf("\n %d = %d - %d",v[0] - v[n-1], v[0], v[n-1] );

        if(*diferenca < v[0] - v[n-1]) {
            *diferenca = v[0] - v[n-1];
        }

        if (x > v[n-1]) {
            *max = x;
            *min = v[0] - *diferenca;
            return x;
        } else {
            return v[n-1];
        }
    }
}
/*
void mmR(int *v, int n, int *min, int *max) {
    if (n == 0) {
        return v[0];
    } else {
        if (v[n] > v[n-1]) {
            *max = v[n];
        } else {
            *min = v[n];
        }

        mmR(v, n-1, min, max);
    }
}
*/

int main(void) {
    int a = 0;
    int min, max, dif = 0;
    int v [] = {1, -5, 10, -3, 5, 0, -6, 7, -4};

    struct pessoa {
        char *nome;
        int idade;
    };

    struct pessoa juh = malloc(sizeof(struct pessoa));
    pessoa->idade = 18;
    (*pessoa).idade = 18;

    minmaxR(v, 9, &min, &max, &dif);
    printf("\nMax %d \n", max);
    printf("\nMin %d \n", min);

    return 0;
}

/* int minmaxR(int v[], int n, int *min, int *max, int *diferenca) {

    if (n == 0){
        return v[0];
    }
    else {
        int x;

        x = minmaxR (v, n - 1, min, max, diferenca);

        if(*diferenca < x - v[n-1]){
            *diferenca = x - v[n-1];
        }

        if (x > v[n-1]){
            *max = x;
            *min =  *max - *diferenca;
            return x;
            }
        else{
            return v[n-1];
            }
    }
}
*/

