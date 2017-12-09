/* ====================================================== */
/* ===== Program to duplicate the elements of array ===== */
/* ====================================================== */
#include<stdio.h>
int main() {
    int a[100],b[100],n,i;
    printf("A program to copy the elements of one array to another");
    printf("\nEnter the number of elements in the array: ");
    scanf("%d",&n);
    printf("Enter the elements of the array: \n");
    for(i=0;i<n;i++) {
        printf("Element %d: ",i+1);
        scanf("%d",&a[i]);
        b[i]=a[i];
    }
    printf("\n    Array A: ");
    for(i=0;i<n;i++) printf("%d ",a[i]);
    printf("\n    Array B: ");
    for(i=0;i<n;i++) printf("%d ",b[i]);
    return 0;
}
