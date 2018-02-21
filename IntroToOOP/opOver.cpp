#include<iostream>
using namespace std;

class A {
    int m1;
    int m2;
  public:
    void getA () {
        cout<<"Enter the values: "<<endl;
        cin>>m1>>m2;
    }
    void printA () {
        cout<<m1<<" "<<m2<<endl;
    }
    // USE: friend A operator +(A i1, A i2); if you use the commented out definitionn of operator +
    A operator +( A i2) {
        A temp;
        temp.m1 = m1+i2.m1;
        temp.m2 = m2+i2.m2;
        return temp;
    }
};

/*
A operator +(A i1, A i2) {
    A temp;
    temp.m1 = i1.m1+i2.m1;
    temp.m2 = i1.m2+i2.m2;
    return temp;
}
*/
int main () {
    A o1, o2, o3;
    o1.getA();
    o2.getA();
    o3=o1+o2;
    o1.printA();
    o2.printA();
    o3.printA();
    return 0;
}
