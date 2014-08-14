# include <stdio.h>
# include <locale.h>

int fibI(int x){

    int a, b, i;
        i = 0;
        a = 1;
        b = 0;

        while(x!=i){
            a = a + b;
            i = i + 1;
            if(x!=i){
                b = b + a;
                i = i + 1;}
            else return a;
            }

            return b;
    }

int fibR(int x){
    if(x==1 || x==2)
        return 1;
    else
        return fibR(x-1) + fibR(x-2);
}

int main(void){

    setlocale(LC_ALL, "Portuguese");

    int i;
    printf("Função fibbonanci iterativa \n\n");
    for(i=0;i<12;i++) printf("fib %d = %d \n", i, fibI(i));

    printf("Função fibbonanci recursiva \n\n");
    for(i=1;i<12;i++) printf("fib %d = %d \n", i, fibR(i));

    system("pause");
}
