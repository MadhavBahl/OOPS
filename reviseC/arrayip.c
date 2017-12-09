/* ========================================= */
/* ===== Multi Dimensional Array Input ===== */
/* ========================================= */
#include<stdio.h>
int main() {
    int i,r,c,j,A[100][100];
    printf("Enter the number of rows: ");
    scanf("%d",&r);
    printf("Enter the number of columms: ");
    scanf("%d",&c);
    printf("Enter the %d values: \n",r*c);
    for(i=0;i<r;i++) {
        for(j=0;j<c;j++)
            scanf("%d",&A[i][j]);
    }
    printf("Your entered matrix is: \n");
    for(i=0;i<r;i++) {
        for(j=0;j<c;j++)
        {
            if(i==j)
                printf("%d  ",A[i][j]);
            else
                printf("0 ");

        }

        printf("\n");
    }
}
