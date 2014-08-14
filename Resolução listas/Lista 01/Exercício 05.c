# include <stdio.h>
# include <stdio.h>


int log(int n, int i){

    if(n==1){
        return i;
    }
    else{
        return log(n/2, i+1);
         }
}

int main(void){


/*    int cont = 0;
    while (malloc(10) != NULL)
     if(cont++ ==20000){
                        putchar('.');
                        cont = 0;
                        }*/


    printf("%d \n", log(32, 0));

    system("pause");

    }
