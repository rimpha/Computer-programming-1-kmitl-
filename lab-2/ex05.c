#include <stdio.h>

int main() {
    char name[50], lastname[50];
    int Age;
    float height;
    char uni_name[50];

    printf("Enter your full name: ");
    scanf("%s %s", name, lastname);

    printf("Enter your age: ");
    scanf("%d", &Age);

    printf("Enter your height: ");
    scanf("%f", &height);

    printf("Enter your University name: ");
    scanf(" %[^\n]", uni_name);

    printf("\nHi! Everyone. This is %c.%s from %s. I am %d years old\n",
           lastname[0], name, uni_name, Age);
    printf("and my height is %.1f cm tall.\n", height);

    return 0;
}