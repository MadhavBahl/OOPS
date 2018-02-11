/* ================================= */
/* ===== Answer for question2  ===== */
/* ================================= */

#include<iostream>
using namespace std;

class employee {
  private: 
    char name[25];
    char empId[10];
    int age;
  public:
    void readVal();
    void dispVal();
};

void employee::readVal() {
    cin>>name;
    cin>>empId;
    cin>>age;
}

void employee::dispVal() {
    if (age < 18) {
        throw 10;
    } else if (age > 50) {
        throw 'a';
    }
    cout<<name<<endl;
    cout<<empId<<endl;
    cout<<age<<endl;
}

int main () {
    employee e1;
    e1.readVal();
    try {
        e1.dispVal();
    } catch (int i) {
        cout<<"Age cannot be less than 18";
    } catch (char a) {
        cout<<"Age cannot be greater than 50";
    }
    return 0;
}