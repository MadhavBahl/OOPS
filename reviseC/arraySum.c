/* ======================================= */
/* ===== Multi Dimensional Array Sum ===== */
/* ======================================= */
#include<stdio.h>
int main() {
    int i,r,c,j,A[100][100],B[100][100],sum[100][100];
    printf("Enter the number of rows: ");
    scanf("%d",&r);
    printf("Enter the number of columms: ");
    scanf("%d",&c);
    printf("Enter the %d Elements of matrix A: \n",r*c);
    for(i=0;i<r;i++) {
        for(j=0;j<c;j++)
            scanf("%d",&A[i][j]);
    }
    printf("Enter the %d Elements of matrix B: \n",r*c);
    for(i=0;i<r;i++) {
        for(j=0;j<c;j++){
            scanf("%d",&B[i][j]);
            sum[i][j] = A[i][j]+B[i][j];
        }
    }
    printf("Your The sum of matrix is: \n");
    for(i=0;i<r;i++) {
        for(j=0;j<c;j++)
        {
            printf("%d ",sum[i][j]);

        }

        printf("\n");
    }
}
