/* ================================= */
/* ===== Bubble Sort Algorithm ===== */
/* ================================= */

#include<stdio.h>
#include<stdlib.h>
int main() {
    short swap;
    int n,*arr,i,j,temp;
    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);
    arr = (int*) malloc(sizeof(int)*n);
    printf("Enter the Elements: \n");
    for(i=0;i<n;i++) {
        printf("  arr[%d] = ",i);
        scanf("%d",&arr[i]);
    }
    printf("Entered Array Is: ");
    for(i=0;i<n;i++)  printf("%d ",arr[i]);
    // Sort the array
    for(i=0;i<n;i++) {
        swap = 0;
        for(j=i+1;j<n;j++)
            if(arr[i]>arr[j]) {
                swap = 1;
                temp = arr[i];
                arr[i]=arr[j];
                arr[j]= temp;
            }
        if(!swap) //it means the array has got sorted before outer-loop has completed.
            break;    
    }
    printf("\nSorted Array Is: ");
    for(i=0;i<n;i++)  printf("%d ",arr[i]);

    free(arr);
}
