#include <stdio.h>
#include <math.h>

int main(){

    double A = sqrt(9);    //it finds squire root of 9
    double B = pow(2, 4);  //here 2^4
    int C = round(3.14);   //3.14 is rounded to 3
    int D = ceil(3.14);    //to round the number up, celi means ceiling function
    int E = floor(3.99);    //to round the number down
    double F = fabs(-100);  //absolute value of a number, shows how far the number is from 0, it will take any negative numbers and make them positive.
    double G = log(3);      //to logarithm
    double H = sin(45);     //to trigionomitri
    double I = cos(45);     //to trigionomitri
    double J = tan(45);     //to trigionomitri

    printf("\n%lf", A);
    printf("\n%lf", B);
    printf("\n%d", C);
    printf("\n%d", D);
    printf("\n%d", E);
    printf("\n%lf", F);
    printf("\n%lf", G);
    printf("\n%lf", H);
    printf("\n%lf", I);
    printf("\n%lf", J);


    return 0;
}
