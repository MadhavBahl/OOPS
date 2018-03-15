/* ================================================= */
/* ===== Sample program for single inheritance ===== */
/* ================================================= */

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

class C: public A { 
  public: 
    int c;
};

class D: public A {
  public: 
    int d;
};

int main () {
    // Make instance of class B, C, D
    B b;
    C c;
    D d;
    // Read the values of a,b and c
    cout<<"Enter the value of B->b: ";  cin>>b.b;
    cout<<"Enter the value of C->c: ";  cin>>c.c;
    cout<<"Enter the value of D->d: ";  cin>>d.d;
    cout<<"Enter the value of B->a: ";  cin>>b.a;
    cout<<"Enter the value of C->a: ";  cin>>c.a;
    cout<<"Enter the value of D->a: ";  cin>>d.a;
    // Print the values
    cout<<"\nThe value of B->b is: "<<b.b;
    cout<<"\nThe value of C->c is: "<<c.c;
    cout<<"\nThe value of D->d is: "<<d.d;
    cout<<"\nThe value of B->a is: "<<b.a;
    cout<<"\nThe value of C->a is: "<<c.a;
    cout<<"\nThe value of D->a is: "<<d.a;
    return 0;
}