//task 2 of assignment
//The ATM cash dispenser
#include<iostream>
using namespace std;
int main()
{
	//initializing variables for amount and notes.
	int amnt, fivent, thousnt, hundnt, tennt;
	//taking input from user.
	cout << "Enter amount= " << endl;
		cin >> amnt;
		//using formulas to calculate amounts and storing results in memory.
		fivent = amnt / 5000;
		amnt = amnt % 5000;
	    thousnt = amnt / 1000;
		amnt = amnt % 1000;
		hundnt = amnt / 100;
		amnt = amnt % 100;
		tennt = amnt / 10;
		amnt = amnt % 10;
		//displaying final output to user ,in the form of individual notes.
		cout << "RS. 5000 Notes: " << fivent << endl;
		cout << "RS. 1000 Notes: " << thousnt << endl;
		cout << "RS. 100 Notes: " << hundnt << endl;
		cout << "RS. 10 Notes: " << tennt << endl;
		return 0;
		//correct output is displayed.
		//long program but fun.
}
