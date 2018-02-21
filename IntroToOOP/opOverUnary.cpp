/* ===================================================================================== */
/* ===== Overload operator '-' to change the sign of all data members in the class ===== */
/* ===================================================================================== */

#include<iostream>
using namespace std;

class sample {
    int a;
    float b;
  public:
    void getVal () {
        cout<<"Enter the values: ";
        cout<<"\n int a = ";  cin>>a;
        cout<<" float b = ";  cin>>b;
    }
    void printVal () {
        cout<<"Printing the values: ";
        cout<<"\n int a = "<<a;
        cout<<"\n float b = "<<b<<endl;
    }
    sample operator - () {
        sample temp;
        temp.a = -1*a;
        temp.b = -1*b;
        return temp;
    }
};

int main () {
    sample s1,s2;
    s1.getVal();22
    s1.printVal();
    s2 = -s1;
    s1.printVal();
    s2.printVal();
    return 0;
}
