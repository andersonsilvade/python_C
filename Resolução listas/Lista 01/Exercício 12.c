# include <stdio.h>

int fibR(int x){
    printf("fibR(%d)\n", x);
    if(x<=2)
        return 1;
    else
        return fibR(x-1) + fibR(x-2);
}

int main(void){

 printf("%d \n", fibR(5));

 system("pause");

}
