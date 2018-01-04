/* ================================= */
/* ===== Bubble Sort Algorithm ===== */
/* ================================= */

#include<stdio.h>
int main() {
    int n,arr[100],i,j,temp;
    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);
    printf("Enter the Elements: \n");
    for(i=0;i<n;i++) {
        printf("  arr[%d] = ",i);
        scanf("%d",&arr[i]);
    }
    printf("Entered Array Is: ");
    for(i=0;i<n;i++)  printf("%d ",arr[i]);
    // Sort the array
    for(i=0;i<n;i++)
        for(j=i+1;j<n;j++)
            if(arr[i]>arr[j]) {
                temp = arr[i];
                arr[i]=arr[j];
                arr[j]= temp;
            }
    printf("\nSorted Array Is: ");
    for(i=0;i<n;i++)  printf("%d ",arr[i]);
}