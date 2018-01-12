/* ========================================= */
/* ===== Solution for Sample Problem 1 ===== */
/* ========================================= */

/* 
    Algorithm: We use nested use to print this pattern
    first loop iterates i over 1 to n
    The inside loops prints spaces and (01)s separately:
        Number of spaces = i-1
        Number of digits = (n+1)-i, 
            where, ODD(j) prints: 0 and EVEN(j) prints: 1 
*/

#include<stdio.h>
int main () {
    int n,i,j;
    scanf("%d", &n);
    for (i=1;i<=n;i++) {
        for (j=1;j<=i-1;j++)
            printf(" ");
        for (j=1;j<=(n+1)-i;j++) 
            if ( j%2 == 0 )     printf("1 ");
            else    printf("0 ");
        printf("\n");
    }
}
