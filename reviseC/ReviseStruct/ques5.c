/* ========================================= */
/* ===== Solution for Sample Problem 5 ===== */
/* ========================================= */

#include<stdio.h>
#include<string.h>

struct M1 {
    char name[50];
    int numItems;
    struct items {
        char name[20];
        float cost;
    }item[10];
};

struct customers {
    char name[50];
    int acno;
    float balance;
};

float findSpent(struct M1 sh[], int n);
float findRemaining(float spent, struct customers c[], int n);

int main () { 
    
    // Input all the required data
    int nc,i,j,m;
    scanf("%d", &nc);
    struct customers abc[nc];
    for(i=0;i<nc;i++) {
        scanf("%s %d %f", abc[i].name, &abc[i].acno, &abc[i].balance);
    }
    scanf("%d", &m);
    struct M1 shopper[m];
    for(i=0;i<m;i++) {
        scanf("%s %d", shopper[i].name, &shopper[i].numItems);
        for(j=0;j<shopper[i].numItems;j++) {
            scanf("%s %f", shopper[i].item[j].name, &shopper[i].item[j].cost);
        }
    }
    
    // Find the total amount spent by Sherley and print items
    float totSpent;
    totSpent = findSpent(shopper, m);

    // Find the amount remaining in her account
    float rem;
    rem = findRemaining(totSpent, abc, nc);
    
    // Print the required amount
    printf("%0.2f", rem);
    return 0;
}

float findSpent(struct M1 sh[], int n) {
    float total=0;
    
    // Find the index of "Sherley" in mall customers
    int pos,i;
    for(i=0;i<n;i++) {
        if(strcmp(sh[i].name, "Sherley") == 0) {
            pos = i;
            break;
        }
    }
    
    // Find and return the total amount spent by Sherley
    for(i=0;i<sh[pos].numItems;i++) {
        total += sh[pos].item[i].cost;
        printf("%s\n", sh[pos].item[i].name);
    }
    return total;
}

float findRemaining(float spent, struct customers c[], int n) {
    float rem;
    // Find the customer named Sherley
    int i,pos;
    for(i=0;i<n;i++) {
        if(strcmp(c[i].name, "Sherley") == 0) {
            pos = i;
            break;
        }
    }
    // Find and return the amount remaining in sherley's account
    c[pos].balance -= spent;
    rem = c[pos].balance;
    return rem;
}