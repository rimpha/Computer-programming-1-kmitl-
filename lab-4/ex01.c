#include<stdio.h>
int main ()
{
    int num, sum = 0; 
    float avg;
    for(int i = 1; i <= 10; i++)
    {
        printf("%d. Enter the number: ", i);
        scanf("%d", &num);
        sum = sum + num;
        avg = (float) sum / 10;
    }
    printf("total sum is %d\n", sum);
    printf("average is %.2f\n", avg);
    return 0;

}