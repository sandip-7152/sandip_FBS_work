#include <stdio.h>

// Structure
struct Book {
    char bname[50];
    int id;
    char author[50];
    float price;
};

// 1. Without parameter, without return type
void displayBook1() {
    struct Book b;
    printf("\nEnter Book Name, Id, Author, Price: ");
    scanf("%s %d %s %f", b.bname, &b.id, b.author, &b.price);
    printf("Book: %s %d %s %.2f\n", b.bname, b.id, b.author, b.price);
}

// 2. With parameter, without return type
void displayBook2(struct Book b) {
    printf("Book: %s %d %s %.2f\n", b.bname, b.id, b.author, b.price);
}

// 3. Without parameter, with return type
struct Book displayBook3() {
    struct Book b;
    printf("\nEnter Book Name, Id, Author, Price: ");
    scanf("%s %d %s %f", b.bname, &b.id, b.author, &b.price);
    return b;
}

// 4. With parameter, with return type
struct Book displayBook4(struct Book b) {
    printf("Book: %s %d %s %.2f\n", b.bname, b.id, b.author, b.price);
    return b;
}

int main() {
    struct Book b1;
    // Type 1
    displayBook1();

    // Type 2
    printf("\nEnter Book Name, Id, Author, Price: ");
    scanf("%s %d %s %f", b1.bname, &b1.id, b1.author, &b1.price);
    displayBook2(b1);

    // Type 3
    b1 = displayBook3();
    printf("Returned Book: %s\n", b1.bname);

    // Type 4
    displayBook4(b1);
    return 0;
}
