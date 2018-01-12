/* ========================================= */
/* ===== Solution for Sample Problem 2 ===== */
/* ========================================= */

#include<stdio.h>
int main () {
    int n,i,j;
    scanf("%d", &n);
    for (i=1;i<=n;i++) {
        for(j=n;j>=i;j--)
            printf("*");
        printf("\n");
    }
}