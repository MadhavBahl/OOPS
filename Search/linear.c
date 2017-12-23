/* =================================== */
/* ===== Linear search algorithm ===== */
/* =================================== */

#include<stdio.h>

int main() {
    int arr[100],n,i,x,pos=-1;
    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);
    printf("Enter the Elements: \n");
    for(i=0;i<n;i++) {
        printf("  arr[%d] = ",i);
        scanf("%d",&arr[i]);
    }
    printf("Enter the number you want to search: ");
    scanf("%d",&x);
    // Search using a for loop
    for(i=0;i<n;i++) {
        if(x == arr[i]) {
            pos=i;
            break;
        }
    }
    if(pos == -1) {
        printf("\nThe given element is not present in the array!");
    } else {
        printf("\nThe index of given element is: %d", pos);
    }
    return 0;
}