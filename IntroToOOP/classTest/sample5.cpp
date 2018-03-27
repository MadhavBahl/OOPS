/* ======================================== */
/* ===== Solution to sample problem 5 ===== */
/* ======================================== */

#include<iostream>
using namespace std;

void rshr (int arr[], int n, int m);

int main () {
    int i, m, n, ele[100];
    cin>>n;
    for(i=0;i<n;i++) {
        cin>>ele[i];
    }
    cin>>m;
    rshr(ele, n, m);
    return 0;
}

void rshr (int arr[], int n, int m) {
    int i, tempArr[100];
    for (i=0;i<n;i++) {
        tempArr[(i+m)%n] = arr[i];
    }
    for(i=0;i<n;i++) {
        arr[i] = tempArr[i];
        cout<<arr[i]<<endl;
    }
}