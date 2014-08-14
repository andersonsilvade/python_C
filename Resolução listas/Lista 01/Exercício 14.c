# include <stdio.h>

int pot(int k, int n){
    if(n==0) return 1;

    else{
        printf("1 \n");
        return pot(k, n-1) * k;
    }
}

int main(void){

    printf("%d \n",pot(2, 6));

    system("pause");

}
