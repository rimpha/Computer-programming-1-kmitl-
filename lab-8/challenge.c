#include <stdio.h>

int main() {
    int arr[5];
    int i, j;
    int temp;

    printf("Enter 5 integers: ");

    for (i = 0; i < 5; i++) {
        scanf("%d", arr + i);
    }

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4 - i; j++) {
            if (*(arr + j) > *(arr + j + 1)) {
                temp = *(arr + j);
                *(arr + j) = *(arr + j + 1);
                *(arr + j + 1) = temp;
            }
        }
    }

    printf("Sorted: ");

    for (i = 0; i < 5; i++) {
        printf("%d", *(arr + i));

        if (i < 4) {
            printf(" ");
        }
    }

    printf("\n");

    return 0;
}