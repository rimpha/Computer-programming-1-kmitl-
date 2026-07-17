#include <stdio.h>

int main() {
    char name[50];
    int student_ID;
    float pro_score, phy_score, cal_score;
    float GPA;

    printf("Enter your Name: ");
    scanf(" %[^\n]", name);

    printf("Enter your student ID: ");
    scanf("%d", &student_ID);

    printf("Enter your Programming score: ");
    scanf("%f", &pro_score);

    printf("Enter your Physics score: ");
    scanf("%f", &phy_score);

    printf("Enter your Calculus score: ");
    scanf("%f", &cal_score);

    GPA = (pro_score + phy_score + cal_score) / 3;

    printf("Hi %s(%d)! Your GPA is %.2f\n", name, student_ID, GPA);

    return 0;
}