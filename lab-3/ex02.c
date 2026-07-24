#include <stdio.h>

int main()
{
    int number;

    printf("Enter a number : ");
    scanf("%d", &number);

    if (number < 1 || number > 100)
    {
        printf("Number is out of range.\n");
    }
    else if (number % 2 == 0)
    {
        printf("%d is Even.\n", number);
    }
    else
    {
        printf("%d is Odd.\n", number);
    }

    return 0;
}