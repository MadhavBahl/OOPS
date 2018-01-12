/* ========================================= */
/* ===== Solution for Sample Problem 4 ===== */
/* ========================================= */

#include<stdio.h>
#include<ctype.h>

void convertCase(char *x) {
    if(islower(*x)) {
        *x = *x - 32;
    } else {
        *x = *x + 32;
    }
}

int main () {
    char mat[50][50];
    int i,j,n;
    // Input the matrix 
    scanf("%d", &n);
    for (i=0;i<n;i++) {
        for (j=0;j<n;j++) {
            scanf("%c", &mat[i][j]);
        }
    }
    // Toggle the case of diaglonal elements
    for(i=0;i<n;i++) {
        for(j=0;j<n;j++) {
            if(i==j || i+j==n-1) {
                convertCase(&mat[i][j]);
            }
        }
    }
    // Print the output matrix
    for(i=0;i<n;i++) {
        for(j=0;j<n;j++) {
            printf("%c ",mat[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}