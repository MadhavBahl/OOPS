/* ================================================================ */
/* ===== A template to return the maximum of 3 given elements ===== */
/* ================================================================ */

#include<iostream>
using namespace std;

template<class T>

T findMax(T a, T b, T c) {
    T Max = a;
    if (b>Max) Max = b;
    if (c>Max) Max = c;
    return Max;
}

int main () {
    int a,b,c;
    cout<<"Enter the first number: ";  cin>>a;
    cout<<"Enter the second number: ";  cin>>b;
    cout<<"Enter the third number: ";  cin>>c;
    int Max = findMax(a,b,c);
    cout<<"The maximum number is: "<<Max;
    cout<<endl;
    float x,y,z;
    cout<<"Enter the first float: ";  cin>>x;
    cout<<"Enter the second float: ";  cin>>y;
    cout<<"Enter the third float: ";  cin>>z;
    float Maxf = findMax(x,y,z);
    cout<<"The maximum float is: "<<Maxf;
    cout<<endl;
    string p,q,r;
    cout<<"Enter the first string: ";  cin>>p;
    cout<<"Enter the second string: ";  cin>>q;
    cout<<"Enter the third string: "; cin>>r;
    string Maxs = findMax(p,q,r);
    cout<<"The maximum string is: "<<Maxs;
    return 0;
}