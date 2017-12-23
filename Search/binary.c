/* =================================== */
/* ===== Binary search Algorithm ===== */
/* =================================== */
#include<stdio.h>
int main() {
    int n,arr[100],x,i,j,temp;
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
    printf("\nEnter the number you want to search: ");
    scanf("%d",&x);
    int pos=-1,start=0,end=n-1,mid=(start+end)/2;
    while(mid>0 && mid<n) {
        mid = (start+end)/2;
        printf("\nMid element is: %d",mid);
        if (arr[mid] == x) {
            pos = mid;
            break;
        } else if(x > arr[mid]) {
            start = mid+1;
        } else {
            end = mid-1;
        }
    }
    if(pos == -1) {
        printf("The given element does not exist in the array!");
    } else {
        printf("The index of the given element is: %d", pos);
    }
}