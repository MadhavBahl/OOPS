#include <stdio.h>
#include <stdlib.h>

#define SIZE 10


void selection_sort(int a[],const int size)
{
    int i, j, min;

    for (i = 0; i < size - 1; i++)
    {
        min = i;
        for (j = i + 1; j < size; j++)
        {
            if (a[j] < a[min])
            {
                min = j;
            }
        }
        int temp = a[i];
        a[i] = a[min];
        a[min] = temp;
    }
}
/*
    display array content
*/
void display(int a[],const int size)
{
    int i;
    for(i=0; i<size; i++)
        printf("%d ",a[i]);
    printf("\n");
}

void main()
{

    int a[100],n,i;
    printf("Enter the number of elements to be sorted: ");
    scanf("%d",&n);
    for(i=0;i<n;++i)
      {
       printf("%d. Enter element: ",i+1);
       scanf("%d",&a[i]);
    }
    printf("The array before sorting:\n");
    display(a,SIZE);

    selection_sort(a,SIZE);

    printf("The array after sorting:\n");
    display(a,SIZE);
}
