#include <stdio.h>

int main()
{
    int num1, num2, choice;

    printf("Enter Num1 : ");
    scanf("%d", &num1);

    printf("Enter Num2 : ");
    scanf("%d", &num2);

    printf("\nCalculator Menu :\n");
    printf("1. +\n");
    printf("2. -\n");
    printf("3. *\n");
    printf("4. /\n");
    printf("5. %%\n");

    printf("Choose menu : ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            printf("Ans : Num1 + Num2 = %d\n", num1 + num2);
            break;

        case 2:
            printf("Ans : Num1 - Num2 = %d\n", num1 - num2);
            break;

        case 3:
            printf("Ans : Num1 * Num2 = %d\n", num1 * num2);
            break;

        case 4:
            if(num2 != 0)
                printf("Ans : Num1 / Num2 = %.2f\n", (float)num1 / num2);
            else
                printf("Cannot determined\n");
            break;

        case 5:
            if(num2 != 0)
                printf("Ans : Num1 %% Num2 = %d\n", num1 % num2);
            else
                printf("Cannot determined\n");
            break;

        default:
            printf("Invalid Menu!\n");
    }

    return 0;
}