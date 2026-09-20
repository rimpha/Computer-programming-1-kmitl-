#include <stdio.h>
float calculateAverage(int grades[], int n);
void findAndDisplayExtremes(char names[][50], int grades[], int n);

int main() {
    int n;

    
    printf("Enter number of students: ");
    scanf("%d", &n);

    
    char names[n][50];
    int grades[n];

    
    for (int i = 0; i < n; i++) {
        printf("Enter name of student %d: ", i + 1);
        scanf(" %[^\n]", names[i]); 
        
        printf("Enter grade of %s: ", names[i]);
        scanf("%d", &grades[i]);
    }

    printf("--- Results ---\n");


    float avg = calculateAverage(grades, n);
    printf("Average grade: %.2f\n", avg);

    
    findAndDisplayExtremes(names, grades, n);

  
    printf("Students who passed:\n");
    for (int i = 0; i < n; i++) {
        if (grades[i] >= 60) {
            char letterGrade;
            
          
            if (grades[i] >= 80) {
                letterGrade = 'A';
            } else if (grades[i] >= 70) {
                letterGrade = 'B';
            } else {
                letterGrade = 'C';
            }
            
            printf("%s - Grade %c\n", names[i], letterGrade);
        }
    }

    return 0;
}


float calculateAverage(int grades[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += grades[i];
    }
    return (float)sum / n; 
}


void findAndDisplayExtremes(char names[][50], int grades[], int n) {
    
    int maxIndex = 0;
    int minIndex = 0;

    
    for (int i = 1; i < n; i++) {
        if (grades[i] > grades[maxIndex]) {
            maxIndex = i; 
        }
        if (grades[i] < grades[minIndex]) {
            minIndex = i; 
        }
    }

    
    printf("Highest grade: %d (%s)\n", grades[maxIndex], names[maxIndex]);
    printf("Lowest grade: %d (%s)\n", grades[minIndex], names[minIndex]);
}