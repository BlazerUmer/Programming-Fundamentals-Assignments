//task 12 of assignment
//The kinetic Trap
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	//initializing variables.
	int mass;
	float vel, ke;
	//taking input
	cout << "Enter Mass as integer: " << endl;
	cin >> mass;
	cout << "Enter velocity as decimal: " << endl;
	cin >> vel;
	ke = static_cast<float>(1)/2*(mass * vel * vel);
	//changing 1 to float fixes the issue or you could just move 1/2
	//to the end and exlude it from type cast.
	//only one float is needed.
	cout << fixed << setprecision(3);
	cout << "The Kinetic Energy is: " << ke << endl;
	return 0;
	//correct output is being displayed.
	//only a few left.
}