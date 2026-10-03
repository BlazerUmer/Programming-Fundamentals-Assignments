//task 13 of assignment
//Logical access matrix
//i can see the light at the end of the tunnel.:)
#include<iostream>
using namespace std;
int main()
{
	//initalizing variables.
	int age, clr, mst_cde, access;
	//taking input from user
	cout << "Enter the age and security clearance: " << endl;
	cin >> age >> clr;
	cout << "Enter master override code if not available type 1: " << endl;
	cin>> mst_cde;
	//using relational and logical operators.
	access= (age >= 18 && clr > 3) || (mst_cde == 999);
	cout << "Access Granted: " << access;
	//1 means true and 0 means false.
	//correct output is displayed.
	//easy enough.
}