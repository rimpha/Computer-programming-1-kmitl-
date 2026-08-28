#include <stdio.h>

struct Student
{
    char name[100];
    int age;
    float score;
};

int main()
{
    struct Student student[3];
    int i;
    int highest = 0;

    for (i = 0; i < 3; i++)
    {
        printf("Student %d's name: ", i + 1);
        scanf(" %[^\n]", student[i].name);

        printf("Student %d's age: ", i + 1);
        scanf("%d", &student[i].age);

        printf("Student %d's score: ", i + 1);
        scanf("%f", &student[i].score);
    }

    printf("\n");

    for (i = 0; i < 3; i++)
    {
        printf("Student %d name is \"%s\", age %d. score %.1f\n",
               i + 1,
               student[i].name,
               student[i].age,
               student[i].score);
    }

    for (i = 0; i < 3; i++)
    {
        if (student[i].score > student[highest].score)
        {
            highest = i;
        }
    }

    printf("\nThe highest scores belongs to %s at %.1f scores!\n",
           student[highest].name,
           student[highest].score);

    return 0;
}
