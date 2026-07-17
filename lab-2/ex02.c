#include <stdio.h>

int main() {
    int minutes, hours, remain;

    printf("Enter total minutes: ");
    scanf("%d", &minutes);

    hours = minutes / 60;
    remain = minutes % 60;

    printf("%d minutes is %d hour(s) and %d minute(s)\n",
           minutes, hours, remain);

    return 0;
}