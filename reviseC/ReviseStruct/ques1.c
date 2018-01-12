/* ========================================= */
/* ===== Solution for Sample Problem 1 ===== */
/* ========================================= */

#include<stdio.h>
#include<string.h>

struct players {
    char name[50];
    int age,size;
};

void findCompanion(struct players x[], char p[], int n) {
    int i,j, num;
    // Find the enetered plpayer
    for (i=0;i<n;i++) {
        if (strcmp(x[i].name, p) == 0 ) {
            num = i;
            break;
        }
    }
    // Search for potential partners
    for(i=0;i<n;i++) {
        if(x[i].age<x[num].age && x[i].size<x[num].size) {
            printf("%s\n", x[i].name);
        }
    }
    
}

int main () {
    int n,i,j;
    char play[50],q[50];
    scanf("%d", &n);
    struct players p[n];
    // Input the details of each player
    for(i=0;i<n;i++) {
        scanf("%s %d %d", p[i].name, &p[i].age, &p[i].size);
    }
    // Find the potential partners
    scanf("%s", play);
    findCompanion(p, play, n);
}