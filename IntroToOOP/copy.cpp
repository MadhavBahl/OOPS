/* ===================================================== */
/* ===== An example to illustrate copy constructor ===== */
/* ===================================================== */

#include<iostream>
using namespace std;

class sample {
  private:
    int a;
    int b;
  public:
    void display();
    sample();
    sample(int m, int n);
    sample(sample &i);
};

sample::sample() {
    a=0;
    b=0;
}

sample::sample (int m, int n) {
    a=m;
    b=n;
}

sample::sample (sample &i) {
    a=i.a;
    b=i.b;
}

void sample::display() {
    cout<<"\nValue of a: "<<a;
    cout<<"\nValue of b: "<<b;
}

int main () {
    sample s1;
    cout<<"\n\t\t Normal Constructor";
    s1.display();
    sample s2(10,15);
    cout<<"\n\t\t Parametrized Constructor";
    s2.display();
    sample s3(s2);
    cout<<"\n\t\t Copy Constructor";
    s3.display();
    return 0;
}
