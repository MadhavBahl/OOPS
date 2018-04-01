#include<iostream>
using namespace std;

template<class T>
T add(T a, T b) {
    return a+b;
}

int main () {
    // Code for integer
    int x1, y1, z1;
    cout<<"Enter the value of 1st integer: ";  cin>>x1;
    cout<<"Enter the value of 2st integer: ";  cin>>y1;
    z1 = add(x1, y1);
    cout<<"Sum is: "<<z1<<endl;
    // Code for character
    char x2, y2, z2;
    cout<<"Enter the value of 1st character: ";  cin>>x2;
    cout<<"Enter the value of 2st character: ";  cin>>y2;
    z2 = add(x2, y2);
    cout<<"Sum is: "<<z2<<cout;
    return 0;
}