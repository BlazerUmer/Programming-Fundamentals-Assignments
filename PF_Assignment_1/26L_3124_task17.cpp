//task 17 of assignment
//3D Distance calculator
//last task.:)
#include<iostream>
using namespace std;
int main()
{
	//initialized variables
	int x1, y1, z1, x2, y2, z2, dist_sqr;
	//taking input
	cout << "Enter the first values for x,y and z= " << endl;
	cin >> x1 >> y1 >> z1;
	cout << "Enter the second values for x,y and z= " << endl;
	cin >> x2 >> y2 >> z2;
	//using formula to calculate.
	dist_sqr = (x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1) + (z2 - z1) * (z2 - z1);
	cout << "The Squared Distance is: " << dist_sqr;
	//correct output is displayed.
	//could have also created more variables and used those in formula example:d1+d2+d3.
	//d1 being (x2 - x1) * (x2 - x1).
	return 0;
}