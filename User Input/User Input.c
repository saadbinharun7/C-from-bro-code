#include <stdio.h>
#include <string.h>

int main(){

    char name[25];  //bytes
    int age;

    printf("\nWhat is your name?");
    //scanf("%s", &name);       //it cannot take white spaces
    fgets(name, 25, stdin);     //to get white spaces: variable,size,stdin
    name[strlen(name)-1] = '\0';    //to remove auto new line after fgets

    printf("How old are you?");
    scanf("%d", &age);

    printf("\nHello %s, how are you?", name);
    printf("\nYou are %d years old", age);


    return 0;
}
