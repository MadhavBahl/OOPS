/* ========================================= */
/* ===== Solution for Sample Problem 2 ===== */
/* ========================================= */

#include<stdio.h>

struct salesmen {
    char name[50];
    int sales[5];
};

int findBestSP(struct salesmen x[], int n) {
    int total[50],i,j;
    // Find the total sales by each salesman
    for(i=0;i<n;i++) {
        total[i] = 0;
        for(j=0;j<5;j++) {
            total[i] += x[i].sales[j];
        }
    }
    // Find the SP who did the max sales
    int max = 0;
    for(i=0;i<n;i++) {
        if (total[i] > total[max])
            max = i;
    }
    // Return the index of best SP
    return max;
}

int main () {
    int n,i,best;
    scanf("%d", &n);
    struct salesmen sp[n];
    // Input the details of every salesperson
    for(i=0;i<n;i++) {
        scanf("%s %d %d %d %d %d", sp[i].name, &sp[i].sales[0],&sp[i].sales[1],&sp[i].sales[2],&sp[i].sales[3],&sp[i].sales[4]);
    }
    // Find the most productive salesman
    best = findBestSP(sp, n);
    printf("%s", sp[best].name);
    return 0;
}