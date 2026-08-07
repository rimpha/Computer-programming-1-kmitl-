#include <stdio.h>

int main() {
    int n;
    int i, j, count, temp;

// |   Name   |       Use for      |
// | -------- | ------------------ |
// | `n`      | `numberOfElements` |
// | `i`      | `currentIndex`     | 
// | `j`      | `compareIndex`     | 
// | `count`  | `occurrenceCount`  | 
// | `temp`   | `currentElement`   | 



    printf("Enter number of elements: ");
    scanf("%d", &n);

    int numbers[n];

    printf("Enter %d integers: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }

    printf("\nOutput:\n");

    for (i = 0; i < n; i++) {
        temp = numbers[i];
        count = 0;

        for (j = 0; j < i; j++) {
            if (temp == numbers[j]) {
                break;
            }
        }

        if (j == i) {
            for (j = 0; j < n; j++) {
                if (temp == numbers[j]) {
                    count++;
                }
            }

            printf("Element %d occurs %d times\n", temp, count);
        }
    }

    return 0;
}