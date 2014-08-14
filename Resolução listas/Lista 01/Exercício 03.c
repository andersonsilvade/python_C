# include <stdio.h>

int somaR(int v[], int n){
    if (n==1){
        return v[0];
        }
    else{
        if(v[n-1]>=0){
            return somaR(v, n-1) + v[n-1];
        }
        else{
            return somaR(v, n-1);
            }
        }
}

int main(void){


    int v[1];
    int n = 0;
    printf("%d", somaR(v, n));
    printf("\n");

    system("pause");

    }

