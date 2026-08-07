#include <stdio.h>

int main(){
    int original[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int reverse[9];
    int i, j, temp;

    for (i = 0; i < 9; i++) {
        reverse[i] = original[8 - i];
    }


    printf("Reversed Array : ");
    for (i = 0; i < 9; i++) {
        printf("%d ", reverse[i]);
    }
    printf("\n");

    return 0;
}