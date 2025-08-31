#include <stdio.h>

struct Book {
    char bname[50];
    int id;
    char author[50];
    float price;
};

int main() {
    struct Book b;

    printf("Enter Book Name: ");
    scanf(" %[^\n]", b.bname);   // reads string with spaces

    printf("Enter Book ID: ");
    scanf("%d", &b.id);

    printf("Enter Author Name: ");
    scanf(" %[^\n]", b.author);

    printf("Enter Price: ");
    scanf("%f", &b.price);

    printf("\n--- Book Details ---\n");
    printf("Name   : %s\n", b.bname);
    printf("ID     : %d\n", b.id);
    printf("Author : %s\n", b.author);
    printf("Price  : %.2f\n", b.price);

    return 0;
}
