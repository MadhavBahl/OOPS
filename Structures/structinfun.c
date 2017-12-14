/* =========================================== */
/* ===== passing structures in functions ===== */
/* ========== (Call By Reference) ============ */
/* =========================================== */

#include<stdio.h>
#include<string.h>

struct Books {
    char title[50];
    char author[50];
    char subject[100];
    int book_id;
};

void inputBookDetails(struct Books *book, int i) {
    printf("Enter the title of book %d: ",i+1);
    scanf("%s",book->title);
    printf("Enter the author of book %d: ",i+1);
    scanf("%s",book->author);
    printf("Enter the subject of book %d: ",i+1);
    scanf("%s",book->subject);
    book->book_id = 10000+8*i;
}

void displayBookDetails(struct Books *book, int i) {
    printf("\nTitle of book %d: %s",i+1,book->title);
    printf("\nAuthor of book %d: %s",i+1,book->author);
    printf("\nSubject of book %d: %s",i+1,book->subject);
    printf("\nBook ID of book %d: %d",i+1,book->book_id);
}

int main() {

    // Declare 2 instances of structure books
    struct Books book[100];
    int n,i;
    printf("Enter the number of books: ");
    scanf("%d",&n);

    // Enter the details of all books
    for(i=0;i<n;i++) {
        inputBookDetails(&book[i],i);
    }

    // Print the details of both books
    for(i=0;i<n;i++) {
        displayBookDetails(&book[i],i);
    }

    return 0;
}
