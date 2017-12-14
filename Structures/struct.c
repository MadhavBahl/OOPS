/* =========================== */
/* ===== Structures in C ===== */
/* =========================== */
#include<stdio.h>
#include<string.h>

struct Books {
    char title[50];
    char author[50];
    char subject[100];
    int book_id;
};

int main() {

    // Declare 2 instances of structure books
    struct Books book1,book2;

    // Enter the details of both books
    printf("Enter the title of book 1: ");
    gets(book1.title);
    printf("Enter the author of book 1: ");
    gets(book1.author);
    printf("Enter the subject of book 1: ");
    gets(book1.subject);
    book1.book_id = 10293;

    printf("Enter the title of book 2: ");
    gets(book2.title);
    printf("Enter the author of book 2: ");
    gets(book2.author);
    printf("Enter the subject of book 2: ");
    gets(book2.subject);
    book2.book_id = 10341;

    // Print the details of both books
    printf("\nTitle of book 1: %s",book1.title);
    printf("\nAuthor of book 1: %s",book1.author);
    printf("\nSubject of book 1: %s",book1.subject);

    printf("\nTitle of book 2: %s",book2.title);
    printf("\nAuthor of book 2: %s",book2.author);
    printf("\nSubject of book 2: %s",book2.subject);

    return 0;
}
