//task 7 of assignment
//Three digit number analysis.
#include<iostream>
using namespace std;
int main()
{
	//intializing variables.
	int num, num1, num2,sum, num3;
	cout << "Enter the three digit number: " << endl;
	cin >> num;
	//calulating.
	num1 = num % 10;
	num = num / 10;
	//above is the formula for the last digit.ones digit.
	num2 = num % 10;
	num = num / 10;
	num3 = num;
	sum = num1 + num2 + num3;
	//displaying output to user.
	cout << "The hundreths digit is: " << num3 << endl;
	cout << "The tenths digit is: " << num2 << endl;
	cout << "The ones digit is: " << num1 << endl;
	cout << "The sum of digits is: " << sum << endl;
	cout << "The reverse order is: " << num1 << num2 << num3 << endl;
	//no math for reverse order.:/
	return 0;
	//correct output is displayed.
	//proud of doing it myself.:)
}