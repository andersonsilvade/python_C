#include <stdio.h>
#include <stdlib.h>
#define TAM 6
int A[TAM][TAM] = {{0, 1, 0, 0, 0, 0}, //linha origem ,coluna destino 1 para onde posso chegar e zero para onde não posso chegar
                   {0, 0, 1, 0, 0, 0},
                   {0, 0, 0, 0, 1, 0},
                   {0, 0, 1, 0, 1, 0},
                   {1, 0, 0, 0, 0, 0},
                   {0, 1, 0, 0, 0, 0}};

int *Distancias (int n, int o) {
int *d, x, y;
int *f, s, t;
    d = malloc (n * sizeof (int));
    for (x = 0; x < n; x++) d[x] = -1;
    d[o] = 0;//origem (int o)
    f = malloc (n * sizeof (int));//fila
    s = 0; t = 1; f[s] = o; /* o entra na fila */
    while (s < t) {
        x = f[s++]; /* x sai da fila */
        for (y = 0; y < n; y++)
            if (A[x][y] == 1 && d[y] == -1) {//-1 cidade não visitada
                d[y] = d[x] + 1;
                f[t++] = y; /* y entra na fila */
            }
    }
    free (f);//devolvo para memoria o vetor f
    return d;
}

int main (void) {
    int i, j;
    int *resultado;

    printf ("Matriz de Distancias:\n");
    for (i = 0; i < 6; i++){
        for (j = 0; j < 6; j++) 
            printf ("%d ", A[i][j]);
        putchar ('\n');
    }

    resultado = Distancias (TAM, 5);
    printf ("Resultado: ");
    for (i = 0; i < 6; i++)
        printf ("%d ", resultado[i]);
    putchar('\n');
    system ("pause");
}
