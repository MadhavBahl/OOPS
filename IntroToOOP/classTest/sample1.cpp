/* ======================================== */
/* ===== Solution to sample problem 1 ===== */
/* ======================================== */


#include<iostream>
using namespace std;
#include<string>
class card
{
	char value;
	string suite;
	public:
	//Function to read the input values
	void read();
	//Check if the value in the two cards are same
	bool check_value(card);
	//Check if the suite in the two cards are same
	bool check_suite(card);
	//Print the color of the suite of the card
	void print_color_suite();
};
