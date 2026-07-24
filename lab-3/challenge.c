#include <stdio.h>

int main() {
    int cal, phy, compro;
    char g1, g2, g3;
    float gp1, gp2, gp3, gpa;

    // Input
    printf("Calculus score: ");
    scanf("%d", &cal);

    printf("Physic score: ");
    scanf("%d", &phy);

    printf("compro score: ");
    scanf("%d", &compro);

    // Calculus
    if (cal >= 80) {
        g1 = 'A';
        gp1 = 4.0;
    }
    else if (cal >= 70) {
        g1 = 'B';
        gp1 = 3.0;
    }
    else if (cal >= 60) {
        g1 = 'C';
        gp1 = 2.0;
    }
    else if (cal >= 50) {
        g1 = 'D';
        gp1 = 1.0;
    }
    else {
        g1 = 'F';
        gp1 = 0.0;
    }

    // Physics
    if (phy >= 80) {
        g2 = 'A';
        gp2 = 4.0;
    }
    else if (phy >= 70) {
        g2 = 'B';
        gp2 = 3.0;
    }
    else if (phy >= 60) {
        g2 = 'C';
        gp2 = 2.0;
    }
    else if (phy >= 50) {
        g2 = 'D';
        gp2 = 1.0;
    }
    else {
        g2 = 'F';
        gp2 = 0.0;
    }

    // Compro
    if (compro >= 80) {
        g3 = 'A';
        gp3 = 4.0;
    }
    else if (compro >= 70) {
        g3 = 'B';
        gp3 = 3.0;
    }
    else if (compro >= 60) {
        g3 = 'C';
        gp3 = 2.0;
    }
    else if (compro >= 50) {
        g3 = 'D';
        gp3 = 1.0;
    }
    else {
        g3 = 'F';
        gp3 = 0.0;
    }

    gpa = (gp1 + gp2 + gp3) / 3;

    printf("\n");
    printf("Subject\t\tScore\tGrade\tGrade\n");
    printf("----------------------------------------\n");
    printf("Calculus\t%d\t%c\t%.1f\n", cal, g1, gp1);
    printf("Physics\t\t%d\t%c\t%.1f\n", phy, g2, gp2);
    printf("Compro\t\t%d\t%c\t%.1f\n", compro, g3, gp3);

    printf("\nGPA: %.1f\n", gpa);

    return 0;
}