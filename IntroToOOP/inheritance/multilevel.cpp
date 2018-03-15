/* ====================================================== */
/* ===== Sample program for multi-level inheritance ===== */
/* ====================================================== */

#include<iostream>
using namespace std;

class A {
  public: 
    int a;
  protected:
    float x;
};

class B: public A {
  public: 
    int b;
};

class C: public B { 
  public: 
    int c;
};

int main () {
    // Make instance of class C
    C subclass;
    // Read the values of a,b and c
    cout<<"\nEnter the value of a: ";  cin>>subclass.a;
    cout<<"Enter the value of b: ";  cin>>subclass.b;
    cout<<"Enter the value of c: ";  cin>>subclass.c;
    // Print the values
    cout<<"\nThe value of a is: "<<subclass.a;
    cout<<"\nThe value of b is: "<<subclass.b;
    cout<<"\nThe value of c is: "<<subclass.c;
    return 0;
}