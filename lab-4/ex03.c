#include <stdio.h>
int main()
{
    int num1;
    do 
    {
        printf("Enter a number: ");
        scanf("%d", &num1);
        if (num1 == 0) 
        {
            printf("Exiting Program... Bye\n");
            break; 
        }
        else
        {
            if (num1 % 2 == 0)
                printf("%d is even\n", num1);
            else 
                printf("%d is odd\n", num1);
        } 
    } while (num1 != 0); 
    return 0;
}