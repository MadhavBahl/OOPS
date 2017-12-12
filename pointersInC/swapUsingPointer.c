/* ================================================== */
/* ===== Function to swap values using pointers ===== */
/* ================================================== */
#include<stdio.h>
void swap(int *,int *);

int main() {
    int a,b;
    printf("Enter the first number: ");
    scanf("%d",&a);
    printf("Enter the second number: ");
    scanf("%d",&b);
    printf("\nBefore SWAP: a=%d, b=%d",a,b);
    swap(&a,&b);
    printf("\nAfter SWAP: a=%d, b=%d",a,b);
    return 0;
 }

void swap(int *x, int *y) {
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
    printf("\nIn SWAP: a=%d, b=%d",*x,*y);
}
