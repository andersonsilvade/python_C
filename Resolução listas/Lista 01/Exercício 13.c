# include <stdio.h>

int MDC(int m, int n){
    if(m%n==0) return n;
    else return MDC(n, m%n);
    }

int main(void){

    printf("%d \n", MDC(7, 21));

    system("pause");
}
