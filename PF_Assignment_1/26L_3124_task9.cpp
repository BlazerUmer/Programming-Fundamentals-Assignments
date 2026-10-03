//task 9 of assignment
//Compount interest calculator
//im tired:(
#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;
int main()
{
	//initializing variables.
	double in_am, ann_in, comp_yr, year, fin_amt, comp_in;
	cout << "Enter the initial amount: " << endl;
	cin >> in_am;
	cout << "Enter the annual interest rate: " << endl;
	cin >> ann_in;
	//taking input.
	cout << "Enter compounds per year: " << endl;
	cin >> comp_yr;
	cout << "Enter the number of years: " << endl;
	cin >> year;
	ann_in = ann_in / 100;
	//we need percentage or 0.05 as 5 itself was way too big.
	//sample input was a litle wrong.
	cout << fixed << setprecision(2);
	//to set points to 2.
	fin_amt = in_am * pow((1 + ann_in / comp_yr), (comp_yr * year));
	//inital amount in power was giving too big of a number.
	comp_in = fin_amt - in_am;
	cout << "The Final amount is: " << fin_amt << endl;
	cout << "The compound interest is: " << comp_in << endl;
	//correct output is being displayed.
	//had some help because of math function and power.:)
	//this was a hard one but still fun.
	return 0;
	//cant forget the return 0 lol.
}