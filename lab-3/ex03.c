#include <stdio.h>

int main()
{
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    switch (number >= 1 && number <= 100)
    {
        case 0:
            printf("%d is out of range\n", number);
            break;

        case 1:
            switch (number % 2)
            {
                case 0:
                    printf("%d is even\n", number);
                    break;

                case 1:
                case -1:
                    printf("%d is odd\n", number);
                    break;
            }
            break;
    }

    return 0;
}