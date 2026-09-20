#include <stdio.h>
void countChars(char word[]);
char word[200];
int main()
{
    printf("Input:");
    scanf("%[^\n]", word);
    countChars(word);
    return 0;
}
void countChars(char word[]) {
    int upper = 0;
    int lower = 0;
    int digits = 0;

    
    for (int i = 0; word[i] != '\0'; i++) {
        
     
        if (word[i] >= 'A' && word[i] <= 'Z') {
            upper++;
        } 
        
        else if (word[i] >= 'a' && word[i] <= 'z') {
            lower++;
        } 
        
        else if (word[i] >= '0' && word[i] <= '9') {
            digits++;
        }
        
    }

    printf("Output:\n");
    printf("Uppercase letters: %d\n", upper);
    printf("Lowercase letters: %d\n", lower);
    printf("Digits: %d\n", digits);
}