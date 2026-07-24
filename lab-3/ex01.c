#include<stdio.h>

int main(){
    int num1, num2;

    printf("Enter Num1 : ");
    scanf("%d", &num1);
    printf("Enter Num2 : ");
    scanf("%d", &num2);

    if (num1  != num2){
        printf("Does not match. Try again\n");
    } else{
        printf("Match\n");
    }
    return 0;
}