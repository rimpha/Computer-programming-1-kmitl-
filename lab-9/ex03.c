#include <stdio.h>
void printHint(int num1, int num2, int total_sum);
int sumCubes(int num1, int num2);
int main() {
    int num1, num2;
    int total_sum;
    printf("Enter the two integers (start end): ");
    scanf("%d %d", &num1, &num2);
    total_sum = sumCubes(num1, num2);
    printf("Sum of cubes from %d to %d is %d\n", num1, num2, total_sum);
    printHint(num1, num2, total_sum);
    return 0;
}
int sumCubes(int num1, int num2) {
    int sum = 0;
    if (num1 > num2) {
        int temp = num1;
        num1 = num2;
        num2 = temp;
    }
    for (int i = num1; i <= num2; i++) {
        
        sum += (i * i * i); 
    }
    return sum;
}

void printHint(int num1, int num2, int total_sum) {
    printf("(Hint: ");
    
    for (int i = num1; i <= num2; i++) {
        printf("%d^3", i);
        if (i < num2) {
            printf(" + "); 
        }
    }
    
    printf(" = ");
    for (int i = num1; i <= num2; i++) {
        printf("%d", (i * i * i));
        if (i < num2) {
            printf(" + "); 
        }
    }
    printf(" = %d)\n", total_sum);
}