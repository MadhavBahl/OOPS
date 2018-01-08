/* ================================================= */
/* ===== Sample Program for Classes and Object ===== */
/* ================================================= */

#include<iostream>
using namespace std;

class abc {
    int dataVar1, dataVar2;
  public:
    void add(int a, int b) // Inline Function -- Member function defined inside the class
    {
        cout<<a+b<<endl;  // std::cout
    }
    void subtract(int a, int b);
};

void abc::subtract(int a, int b) // Member function defined outside the class
{
    cout<<a-b<<endl;  // std::cout
}

int main() {
    abc x;
    x.add(5,10);
    x.subtract(20,10);
    return 0;
}
