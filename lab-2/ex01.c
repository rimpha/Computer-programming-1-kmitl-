#include<stdio.h>
int main () {
    int interger;
    float floats;
    char characters;
    printf("Please enter an integer value: ");
    scanf("%d", &interger);
    printf("You entered: %d\n ",interger);
    printf("Please enter a float value: ");
    scanf("%f", &floats);
    printf("You entered: %.2f\n",floats);
    printf("Please enter a character: ");
    scanf(" %c", &characters);
    printf("You entered: %c \n",characters);
    return 0;
}   