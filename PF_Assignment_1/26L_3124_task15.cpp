//task 15 of assignment
//Structural stress polynomial
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	//value of x is given
	float x, stress_y;
	x = 2.5;
	cout << "x = "<<x << endl;
	//using precedence left to right and calculating stress factor.
	stress_y = 3 * x * x * x * x - 2*x * x * x+ x - 7;
	cout << "Stress factor y= " << stress_y;
	//correct output is displayed.
	//easiest program ever
	//filler arc fr.
	return 0;
}