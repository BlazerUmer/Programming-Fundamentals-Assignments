//task 4 of assignment.
//The ID Verification System.
//Fast Flex :(
#include<iostream>
using namespace std;
int main()
{
	//initializing variables.
	int id, num1, num2, num3, num4, vercde, mirrid;
	cout << " Enter Id :" << endl;
	cin >> id;
	//using formulas to calculate.
	num1 = id / 1000;
	id = id % 1000;
	num2 = id / 100;
	id = id % 100;
	num3 = id / 10;
	num4= id % 10;
	vercde = (num1 * 4 + num2 * 3 + num3 * 2 + num4 * 1) % 9;
	//displaying output to the user.
	cout << "The digits are: " << num1 << " " << num2 << " " << num3 << " " << num4 << endl;
	cout << "Verification code is : " << vercde << endl;
	cout << "The mirror id is: " << num4 << num3 << num2 << num1 << endl;
	//Output is correct
	//Flex is finally fixed :).

}

