/* ================================================================= */
/* ===== Check if the outer elements of an NxN matrix are same ===== */
/* ================================================================= */

#include<stdio.h>

// Function to exit the program if not equal
void notEqual(void) {
    printf("Not same");
    exit(0);
}

int main () {
    int n, mat[50][50],elem,i,j;
    // Input the matrix
    scanf("%d", &n);
    for (i=0;i<n;i++) 
        for(j=0;j<n;j++)
            scanf("%d", &mat[i][j]);
    
    // Check whether the outer elements are same
    elem = mat[0][0];
    for(i=0;i<n;i++) {
        // Having not equal function is helping keeping my code dry
        if (mat[0][i] != elem) {
            notEqual();
        } else if (mat[i][0] != elem) {
            notEqual();
        } else if (mat[n-1][i] != elem) {
            notEqual();
        } else if (mat[i][n-1] != elem) {
            notEqual();
        }
    }
    printf("Same");
    return 0;
}