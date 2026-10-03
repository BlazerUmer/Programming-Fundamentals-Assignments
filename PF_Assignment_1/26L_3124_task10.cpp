//task 10 of assignment.
//Cricket chirp temperature calculator
//getting close to the end.
#include<iostream>
using namespace std;
int main()
{
	//initializing the variables.
	int chirps_min, est_temp;
	cout << "Enter the chirps counted in one minute= " << endl;
		//taking input and calculating temperature.
	cin >> chirps_min;
		est_temp = 50 + (chirps_min - 40) / 4;
		cout << "The estimated temperature is: " <<est_temp<<"F " <<endl;
		//degree symbol wasnt showing up correctly.srry:(
		//correct output is being displayed.
		return 0;
}