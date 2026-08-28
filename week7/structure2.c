#include <stdio.h>

struct Student
{
    char name[100];
    int age;
};

int main()
{
    struct Student student[10];
    int i;

    // Input information for 10 students
    for (i = 0; i < 10; i++)
    {
        printf("\nEnter information for student %d\n", i + 1);

        printf("Enter name : ");
        scanf(" %[^\n]", student[i].name);

        printf("Enter age : ");
        scanf("%d", &student[i].age);
    }

    // Search students older than 20
    printf("\nStudents older than 20 years old:\n");

    for (i = 0; i < 10; i++)
    {
        if (student[i].age > 20)
        {
            printf("Name : %s, Age : %d\n",
                   student[i].name, student[i].age);
        }
    }

    return 0;
}
