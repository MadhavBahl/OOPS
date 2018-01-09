/* ============================================================================ */
/* ===== Program to find the sum of elements in array (Dynamic mem alloc) ===== */
/* ============================================================================ */

#include<stdio.h>
#include<stdlib.h>

int main() {
    int num, i, *ptr, sum=0;
    printf("Enter number of elements: ");
    scanf("%d", &num);

    ptr = (int*)malloc(num * sizeof(int));

    if(ptr == NULL) {
        printf("Error! memory not allocated.");
        return 0;
    }

    printf("Enter the elements of array(separated by space): ");
    for(i=0;i<num;i++) {
        scanf("%d", ptr + i);
        sum += *(ptr + i);
    }

    printf("Sum of elements of the array is: %d\n",sum);
    free(ptr);
    
    return 0;
}
