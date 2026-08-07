#include <stdio.h>

int main() {
    int matrix[10];
    int i;

    for (i = 0; i < 10; i++) {
        printf("Enter the value %d here: ", i + 1);
        scanf("%d", &matrix[i]);
    }


    printf("Values in array are: ");

    for (i = 0; i < 10; i++) {
        printf("%d", matrix[i]);

        if (i < 9) {
            printf(", ");
        }
    }

    printf("\n");

    return 0;
}