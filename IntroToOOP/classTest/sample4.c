/* ======================================== */
/* ===== Solution to sample problem 4 ===== */
/* ======================================== */

#include<stdio.h>
#include<string.h>

int main () {
    // Declare the variables and input the values
    int n,i,j,k,flag, count;
    char ip[100][20], name[100][20];
    scanf("%d", &n);
    for(i=0;i<n;i++) {
        scanf("%s", ip[i]);
        scanf("%s", name[i]);
    }
    
    // Compare the first two octets of ip addresses
    for (i=0;i<n-1;i++) {
        for (j=i+1;j<n;j++) {
            if (ip[i][0] == ip[j][0]) {
                flag = 1; count=0;
                for(k=0;k<10;k++) {
                    if (ip[i][k] == ip[j][k]) {
                        if (ip[i][k] == '.') {
                            if(count<1) count++;
                            else k=10;
                        }
                    } else {
                        flag = 0;
                        k = 10;
                    }
                }
                
                if (flag == 1) {
                    printf("Machines %s and %s are on the same local network\n", name[i], name[j]);
                }
            }
        }
    }
    return 0;
}