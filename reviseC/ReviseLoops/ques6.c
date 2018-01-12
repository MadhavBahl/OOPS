/* ========================================= */
/* ===== Solution for Sample Problem 6 ===== */
/* ========================================= */

/* 
Algorithm : We divide this questiion into 2 parts, 
    1. Upper Triangle (Nested Loop 1)
        i goes from 1 to n/2 
        The inside loop prints spaces and stars separately
            Number of outer spaces = (n/2)-i+1
            Number of Inner Elements = 2*i-1 ,
                where, first and last element is a star else spaces
    2. Lower Triangle (Nested Loop 2)
        rem = n-n/2
        i goes form rem to 1
        The inside loop prints spaces and stars separately
            Number of outer spaces = rem - i
            Number of Inner Elements = 2*i - 1 ,
                where, first and last element is a star else space
*/

#include<stdio.h>
int main () {
    int n,i,j,rem;
    scanf("%d", &n);
    
    // Upper Triangle
    for (i=1;i<=n/2;i++) {
        for(j=1;j<=(n/2)-i+1;j++)
            printf(" ");
        for(j=1;j<=2*i-1;j++) 
            if ( j == 1 || j == 2*i-1 )     printf("*");
            else    printf(" ");
        printf("\n");
    }
    
    // Lower Triangle
    rem = n - n/2;
    for (i=rem;i>=1;i--) {
        if ( n%2 == 0 )     printf(" ");
        for(j=1;j<=rem-i;j++)
            printf(" ");
        for(j=1;j<=2*i-1;j++)
            if ( j == 1 || j == 2*i-1 )     printf("*");
            else    printf(" ");
        printf("\n");
    }
}
        
        