//Assignment task 5.
//The Garden Designer
#include<iostream>
using namespace std;
int main()
{
	//initalizing all of the variable(way too many tbh).
	int length, width, pthwidth, fncecst,pvecst, trfcst, grdenarea, lawnarea, ptharea, perm, ttl_cst;
	//displaying output and taking input.
	cout << "Enter Length and Width: " << endl;
	cin >> length >>width;
	cout << "Enter pathwdith: " << endl;
	cin >> pthwidth;
	cout<<"Enter the fence cost,pavecost and the cost of turf: " << endl;
	cin >> fncecst >> pvecst >> trfcst;
	//using formulas to calculate.
	grdenarea = length * width;
	lawnarea = (length - 2 * pthwidth) * (width - 2 * pthwidth);
	ptharea = grdenarea - lawnarea;
	perm = 2 * (length + width);
	ttl_cst = (perm * fncecst) + (ptharea * pvecst) + (lawnarea * trfcst);
	//displaying output to user.
	cout << "The garden area is: " << grdenarea << endl;
	cout << "The lawn area is: " << lawnarea << endl;
	cout << "The path area is: " << ptharea << endl;
	cout << "The perimeter is: " << perm << endl;
	cout << "The total cost is: " << ttl_cst << endl;
	//output is correct.
	//program ends.very long task.:(
	return 0;
}
