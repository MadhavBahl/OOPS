/* ================================= */
/* ===== Answer for question 6 ===== */
/* ================================= */

#include<iostream>
using namespace std;

// Make a class for the information of passengers 
class Pass {
  private:
    int x, age;
    char boardPass[10], address[40], name[20], dateP[15];
    long int mobile;
    float fare, finalFare;
  public:
//   Declare the functions
    void getDetails ();
    void discount ();
    void generatePass ();
};

// Function to get the passenger details
void Pass::getDetails () {
    cin>>name;
    cin>>x;
    cin>>age;
    cin>>address;
    
    cin>>dateP;
    cin>>mobile;
    cin>>fare;
}

// Function to calculate the discpunt
void Pass::discount () {
    if (age>=12 && age<=58) {
        finalFare = 0.8*(fare);
    } else if (age > 58) {
        finalFare = 0.6 * (fare);
    } else if (age < 12) {
        finalFare = 0.5 * (fare);
    }
}

// Function to generate boarding pass
void Pass::generatePass () {
    cout<<name<<endl;
    cout<<"CA"<<x<<endl;
    cout<<age<<endl;
    cout<<dateP<<endl;
    cout<<mobile<<endl;
    cout<<finalFare<<endl;
}

int main () {
    
    Pass P1;
    P1.getDetails ();
    P1.discount ();
    P1.generatePass ();
    return 0;
}