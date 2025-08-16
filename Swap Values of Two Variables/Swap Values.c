#include <stdio.h>
#include <string.h>

int main(){

    char x[15] = "Water";
    char y[15] = "Lemonade";
    char temp[15];

    strcpy(temp, x);
    strcpy(x, y);       //if y is less than x will show some unexpected value, to solve that, predefine array size.
    strcpy(y, temp);

    printf("x = %s\n", x);
    printf("y = %s\n", y);


    return 0;
}
