/* ====================================== */
/* ===== Program toreverse an array ===== */
/* ====================================== */
#include<stdio.h>
int main() {
    int temp,a[100],j,n,i;
    printf("A program to copy the elements of one array to another");
    printf("\nEnter the number of elements in the array: ");
    scanf("%d",&n);
    printf("Enter the elements of the array: \n");
    for(i=0;i<n;i++) {
        printf("Element %d: ",i+1);
        scanf("%d",&a[i]);
    }
    printf("\n    Array A: ");
    for(i=0;i<n;i++) printf("%d ",a[i]);
    for(i=0,j=n-1;i<n/2;i++,j--) {
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
    }
    printf("\n    Reversed Array A: ");
    for(i=0;i<n;i++) printf("%d ",a[i]);
    return 0;
}
