#include <stdio.h>
#include <string.h>

struct Address {
    char details[100];
    char district[30];
    char city[30];
};

struct Person {
    char fullName[50];
    char id[20];
    struct Address address;
    char tel[20];
};

int main() {
    struct Person p = {
        "POOM KONGHUAYROB",
        "69011014",
        {
            "3 Moo 2, Chalongkrung Rd.",
            "Ladkrabang",
            "Bangkok"
        },
        "088 888 8888"
    };

    printf("Full name : %s\n", p.fullName);
    printf("ID : %s\n", p.id);
    printf("Address : %s\n", p.address.details);
    printf("District : %s\n", p.address.district);
    printf("City : %s\n", p.address.city);
    printf("Tel. : %s\n", p.tel);

    return 0;
}
