#include <stdio.h>

int main() {
    int num1, num2, num3;
    int min, max, sum;
    float average;

    printf("Enter integer #1: ");
    scanf("%d", &num1);

    printf("Enter integer #2: ");
    scanf("%d", &num2);

    printf("Enter integer #3: ");
    scanf("%d", &num3);

    min = num1;
    if (num2 < min)
        min = num2;
    if (num3 < min)
        min = num3;

    max = num1;
    if (num2 > max)
        max = num2;
    if (num3 > max)
        max = num3;

    sum = num1 + num2 + num3;

    average = (float)sum / 3;

    printf("\nResults:\n");
    printf("Minimum: %d\n", min);
    printf("Maximum: %d\n", max);
    printf("Sum: %d\n", sum);
    printf("Average: %.2f\n", average);

    return 0;
}