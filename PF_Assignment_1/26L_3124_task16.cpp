//task 16 of assignment
//digital clock converter
#include<iostream>
using namespace std;
int main()
{
	//initializing variables
	int hr, rem_sec, min,sec,ttl_sec;
	cout << "Enter total seconds: " << endl;
	cin >> ttl_sec;
	//taking input and using formulas to calculate output.
	hr = ttl_sec / 3600;
	rem_sec = ttl_sec % 3600;
	min = rem_sec / 60;
	sec = rem_sec % 60;
	//displaying output below
	cout << "Hours:" << hr;
	cout << ", Minutes: " << min;
	cout << ", Seconds: " << sec << endl;
	//correct output is displayed
	//easier version of last clock one
	//formulas were given. :)
	//understood em tho they were ez.
	return 0;
	//almost done with this assignment.:)
}