#include <stdio.h>

void calculateAndDisplay(int arr[], int n) {
    int sumPos = 0, countPos = 0;
    int sumNeg = 0, countNeg = 0;

    
    for (int i = 0; i < n; i++) {
        if (arr[i] > 0) {          
            sumPos += arr[i];
            countPos++;
        } else if (arr[i] < 0) {   
            countNeg++;
        }
       
    }

    printf("Output:\n");

    if (countPos > 0) {
        float avgPos = (float)sumPos / countPos;
        printf("Positive numbers -> Sum: %d, Average: %.2f\n", sumPos, avgPos);
    } else {
        printf("Positive numbers -> Sum: 0, Average: 0.00\n");
    }

   
    if (countNeg > 0) {
        float avgNeg = (float)sumNeg / countNeg;
        printf("Negative numbers -> Sum: %d, Average: %.2f\n", sumNeg, avgNeg);
    } else {
        printf("Negative numbers -> Sum: 0, Average: 0.00\n");
    }
}

int main() {
    int n;

  
    printf("N: ");
    scanf("%d", &n);


    int arr[n];

    for (int i = 0; i < n; i++) {
        printf("Input: ");
        scanf("%d", &arr[i]);
    }

    
    calculateAndDisplay(arr, n);

    return 0;
}