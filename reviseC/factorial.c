/* =========================================================== */
/* ===== Program to find the factorial of a given number ===== */
/* =========================================================== */

#include<stdio.h>
int factorial(int n);
int main() {
    int n,fact;
    printf("Enter the number: ");
    scanf("%d",&n);
    fact = factorial(n);
    printf("The factorial of the given number is: %d\n", fact);
    return 0;
}
int factorial(int n) {
    if(n>1) return n*factorial(n-1);
    else return 1;
}