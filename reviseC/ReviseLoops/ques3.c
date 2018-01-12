/* ========================================= */
/* ===== Solution for Sample Problem 3 ===== */
/* ========================================= */

/* 
    Algorithm: We will use a nested loop to prinit the pattern
    i will go fron 1 to n
    inside we will use 2 loops, one to print spaces, other for stars
        In any particular line:
            Number  of spaces = n-i
            Number  of stars = 2*i-1
*/

#include<stdio.h>
int main() {
    int n,i,j;
    scanf("%d", &n);
    for (i=1;i<=n;i++) {
        for (j=1;j<=n-i;j++)
            printf(" ");
        for (j=1;j<=2*i-1;j++)
            printf("*");
        printf("\n");
    }
    return 0;
}