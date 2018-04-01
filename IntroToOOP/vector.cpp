#include<iostream>
#include<vector>
using namespace std;

int main () {
    vector <int> random;
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    for(int i=0;i<n;i++) {
        random.push_back(i);
    }
    cout<<"Array is: ";
    for(int i=0;i<n;i++) {
        cout<<random[i]<<" ";
    }
}