#include <stdio.h>

int main() {
    char name[50];
    int Age;
    float height;
    char uni_name[50];

    printf("Enter your full name: ");
    scanf(" %[^\n]", name);

    printf("Enter your age : ");
    scanf("%d", &Age);

    printf("Enter your height : ");
    scanf("%f", &height);

    printf("Enter your University name : ");
    scanf(" %[^\n]", uni_name);

    printf("Hi Everyone. This is %s from %s. I am %d years old and my height is %.1f cm tall\n", name, uni_name, Age, height);

    return 0;
}