/* ========================================= */
/* ===== Solution for Sample Problem 1 ===== */
/* ========================================= */

#include<stdio.h>
int main () {
    // Declare the variables
    int n,arr[100],i,count=0,mid[100];
    // Input the numbers
    scanf("%d", &n);
    for (i=0;i<n;i++) {
        scanf("%d", &arr[i]);
    }
    // Find the elements having 'mid property'
    for(i=0;i<n;i++) {
        if( i == 0) {
            if (arr[i+1] > arr[i]) {
                mid[count] = arr[i];
                count++;
            } 
        } else if (i == n-1) {
            if (arr[i-1] < arr[i]) {
                mid[count] = arr[i];
                count++;
            }
        } else {
            if(arr[i] > arr[i-1] && arr[i] < arr[i+1]) {
                mid[count] = arr[i];
                count++;
            }
        }
    }
    if (count == 0)
        printf("No number has mid property");
    else
        for(i=0;i<count;i++) 
            printf("%d\n", mid[i]);
    return 0;
}