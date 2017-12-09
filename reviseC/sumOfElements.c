/* ================================================================ */
/* ===== Program to find the sum of elements in a given array ===== */
/* ================================================================ */
#include<stdio.h>
int main() {
    int a[100],n,i,sum=0;
    printf("A progam to find the sum of all the elements in Array");
    printf("\nEnter the number of elements in the array: ");
    scanf("%d",&n);
    printf("Enter the elements of the array: \n");
    for(i=0;i<n;i++) {
        printf("Element %d: ",i+1);
        scanf("%d",&a[i]);
        sum+=a[i];
    }
    printf("The sum of all elements is: %d",sum);
    return 0;
}
