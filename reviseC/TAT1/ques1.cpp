/* ================================= */
/* ===== TAT1 - question no. 1 ===== */ 
/* ================================= */

#include<iostream>
using namespace std;
int main () {
    int i,temp,j,n,arr[50];
    cin>>n;
    for (i=0;i<n;i++) {
        cin>>arr[i];
    }
    
    // Solution Method --1
    /* int min = arr[0];
        for (i=0;i<n;i++) {
            if (min>arr[i])
                min = arr[i];
        }
        
        int secondMin = arr[1];
        for (i=0;i<n;i++) {
            if(arr[i]>min && arr[i]<secondMin)
                secondMin = arr[i];
        }
        */
    
    // Solution Alternative -- Sort the elements
    
    for(i=0;i<n;i++) {
        for(j=i;j<n;j++) {
            if(arr[j]<arr[i]) {
                temp = arr[i];
                arr[i]=arr[j];
                arr[j] = temp;
            }
        }
    }
    
    cout<<arr[1];
    return 0;
}