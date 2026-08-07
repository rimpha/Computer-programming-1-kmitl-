#include <stdio.h>

int main() {
    int matrix[3][3];
    int i, j;

    // Input matrix elements
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Enter numbers [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    // Display the matrix
    printf("\n*** Matrix ***\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%4d", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}