/* ============================================ */
/* ==== Input till 0 and find min,max,avg ===== */
/* ============================================ */
#include<stdio.h>
int main() {
    int num,min=99999,max=0,avg=0,count=0;
    for(int i=0;;i++) {
        printf("Enter a positive number: ");
        scanf("%d",&num);
        if(num<1)  break;
        avg += num;
        count++;
        if(min>num)  min=num;
        if(max<num)  max=num;
    }
    if(count>0) avg=avg/count;
    printf("Minimum of the given numbers is: %d\n",min);
    printf("Maximum of the given numbers is: %d\n",max);
    printf("Average of the given numbers is: %d\n",avg);
}