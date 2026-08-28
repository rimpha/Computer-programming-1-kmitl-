#include <stdio.h>

struct Student
{
    char name[21];
    int id;
    float math;
    float english;
    float science;
    float history;
    float average;
};

int main()
{
    struct Student student[3];
    int i;
    int topStudent = 0;
    int topSubject = 0;

    float subjectTotal[4] = {0, 0, 0, 0};
    float subjectAverage[4];

    // Input student information
    for (i = 0; i < 3; i++)
    {
        printf("Enter name, ID, and 4 grades for student %d:\n", i + 1);

        scanf("%20s %d %f %f %f %f",
              student[i].name,
              &student[i].id,
              &student[i].math,
              &student[i].english,
              &student[i].science,
              &student[i].history);

        student[i].average =
            (student[i].math +
             student[i].english +
             student[i].science +
             student[i].history) / 4.0;

        subjectTotal[0] += student[i].math;
        subjectTotal[1] += student[i].english;
        subjectTotal[2] += student[i].science;
        subjectTotal[3] += student[i].history;
    }

    for (i = 1; i < 3; i++)
    {
        if (student[i].average > student[topStudent].average)
        {
            topStudent = i;
        }
    }

    for (i = 0; i < 4; i++)
    {
        subjectAverage[i] = subjectTotal[i] / 3.0;
    }

    for (i = 1; i < 4; i++)
    {
        if (subjectAverage[i] > subjectAverage[topSubject])
        {
            topSubject = i;
        }
    }

    printf("Student Averages:\n");

    for (i = 0; i < 3; i++)
    {
        printf("%s (ID: %d): %.2f\n",
               student[i].name,
               student[i].id,
               student[i].average);
    }

    printf("Top Student: %s with %.2f\n",
           student[topStudent].name,
           student[topStudent].average);

    printf("Subject Averages:\n");
    printf("Math: %.2f\n", subjectAverage[0]);
    printf("English: %.2f\n", subjectAverage[1]);
    printf("Science: %.2f\n", subjectAverage[2]);
    printf("History: %.2f\n", subjectAverage[3]);

    if (topSubject == 0)
        printf("Top Subject: Math with average %.2f\n", subjectAverage[topSubject]);
    else if (topSubject == 1)
        printf("Top Subject: English with average %.2f\n", subjectAverage[topSubject]);
    else if (topSubject == 2)
        printf("Top Subject: Science with average %.2f\n", subjectAverage[topSubject]);
    else
        printf("Top Subject: History with average %.2f\n", subjectAverage[topSubject]);

    return 0;
}
