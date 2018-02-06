
/* ============================================== */
/* ===== Sample program for friend function ===== */
/* ============================================== */

#include<iostream>
using namespace std;

class student {
	int rollno;
	friend void getStud (student &s);
};

void getStud (student &s) {
	cout<< endl<< "Please enter the roll number: ";
	cin>> s.rollno;
	cout<< "The roll number is: "<<s.rollno<<endl;
}

int main () {
	cout<<"\n\t\t Friend Function";
	student S1;
	getStud(S1);
	return 0;
}
