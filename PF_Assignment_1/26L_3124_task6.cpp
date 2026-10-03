//Task 6
//The Time Conversion.
#include<iostream>
using namespace std;
int main()
{
	//initializing variables.
	int time, min, hr, sec;
	cout << "Enter the seconds: " << endl;
	cin >> time;
	//calulating using formulas.
	hr = time / 3600;
	min = (time %3600) / 60;
	//this was hard.took me some time to figure out.:(
	sec = time % 60;
	cout << "The time is: " << hr << " Hour, " << min << " Minute, " <<sec<<" Seconds";
	return 0;
	//correct output is displayed.
	//hard math but solved it.:)
}
