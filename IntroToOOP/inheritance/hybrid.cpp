/* ================================================= */
/* ===== Sample program for hybrid inheritance ===== */
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

class D: public B, public C {
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
    cout<<"Enter the value of D->b: ";  cin>>d.b;
    cout<<"Enter the value of D->c: ";  cin>>d.c;
    // Print the values
    cout<<"\nThe value of B->b is: "<<b.b;
    cout<<"\nThe value of C->c is: "<<c.c;
    cout<<"\nThe value of D->d is: "<<d.d;
    cout<<"\nThe value of B->a is: "<<b.a;
    cout<<"\nThe value of C->a is: "<<c.a;
    cout<<"\nThe value of D->b is: "<<d.b;
    cout<<"\nThe value of D->c is: "<<d.c;
    return 0;
}