/* ============================================================= */
/* ===== A simple program for dynamically allocating array ===== */
/* ============================================================= */

#include<iostream>
#include<cstring>

using namespace std;
int main () {
    int num;
    cout<<"Enter the number of elements";
    cin >> num;
    int *ptr;

    ptr = new int[num];

    cout<<"Enter the numbers: \n";
    for(int i=0; i<num; ++i) {
        cout<<"Element "<<i+1<<": ";
        cin>> *(ptr+i);
    }
    cout<<"You entered: "<<endl;
    for(int i=0;i<num;++i) {
        cout<<"\nArray is: "<<*(ptr+i)<<" ";
    }
    return 0;
}
