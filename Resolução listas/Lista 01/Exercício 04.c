# include <stdio.h>
# include <stdlib.h>

int somaR(int n){
    if(n<10){
        return n;
        }
    else{
        return somaR(n/10) + n%10;
        }
}


int main(void){

    printf("%d", somaR(132));
    printf("\n");
    system("pause");

    }
