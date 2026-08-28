#include <stdio.h>

struct Book
{
    char name[100];
    float price;
    float discount;
    float total;
};

int main()
{
    struct Book book;

    printf("Enter book name : ");
    scanf(" %[^\n]", book.name);

    printf("Enter book price : ");
    scanf("%f", &book.price);

    book.discount = book.price * 0.10;
    book.total = book.price - book.discount;

    printf("\nBook : %s", book.name);
    printf("\nPrice : %.2f", book.price);
    printf("\nDiscount 10 percent : %.2f", book.discount);
    printf("\nTotal price : %.2f\n", book.total);

    return 0;
}
