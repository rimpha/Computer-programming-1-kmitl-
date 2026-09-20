#include <stdio.h>

int Armstrong(int);

int main()
{
    int num1, num2, count = 0, sum = 0;
    printf("Enter the start and end numbers: ");
    scanf("%d %d", &num1, &num2);
    
    if (num1 > num2) {
        int temp = num1;
        num1 = num2;
        num2 = temp;
    }
    
    printf("The Armstrong numbers within the interval [%d, %d] are:\n", num1, num2);

    for (int i = num1; i <= num2; i++)
    {
        if (Armstrong(i))
        {
            printf("%d ", i);
            count++;
            sum += i;
        }
    }
    
    printf("\nTotal Armstrong numbers: %d\n", count);
    printf("Sum of Armstrong numbers: %d\n", sum);
    
    return 0; 
}

int Armstrong(int num)
{
    int original = num;
    int temp = num;
    int sum = 0;

    
    while (temp != 0)
    {
        int digit = temp % 10;
        sum += (digit * digit * digit); 
        temp /= 10;
    }
   
    return (sum == original);
}