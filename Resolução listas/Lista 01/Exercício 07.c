# include <stdio.h>

float F(float x, float y){
    if(x>=y){
        return (x+y)/2;
        }
    else{
        return F(x+1, y-1);
        }
    }


double f(double x, double y) {

if (x >= y) return (x + y)/2;
else return f (f (x+2, y-1), f (x+1, y-2));
}

int main(void){

printf("%f", f(1, 10));

}
