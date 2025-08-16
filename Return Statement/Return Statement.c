#include <stdio.h>

double square(double x){

    return x * x;       //return variable type must be function name type
}

int main(){

    //return = return a value back to a calling to a calling function

    double x = square(3.14);
    printf("%lf", x);


    return 0;
}
