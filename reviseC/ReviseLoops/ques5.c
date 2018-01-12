/* ========================================= */
/* ===== Solution for Sample Problem 5 ===== */
/* ========================================= */

/* 
Algorithm: We use a nested loop to print such patterns.
    i goes from 1 to n 
    j goes from 1 to i 
        each iteration of j prints **$
*/

#include<stdio.h>
int main () {
    int n,i,j;
    scanf("%d", &n);
    
    for(i=1;i<=n;i++) {
        for (j=1;j<=i;j++)
            printf("**$");
        printf("\n");
    }
}