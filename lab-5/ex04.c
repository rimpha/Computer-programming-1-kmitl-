#include<stdio.h>

int main(){
    int Even , Odd;
    int value[10];
    for (int i =0; i < 10; i++){
        printf("Enter value %d: ", i + 1);
        scanf("%d", &value[i]);

        if (value[i] % 2 == 0){
            Even++;
        } else {
            Odd++;
        }
    }
    printf("Even numbers: %d\n", Even);
    printf("Odd numbers: %d\n", Odd);
}