//task 11 of assignment
//Student average calculator
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	//initializing variables.
	int mth, phy, prg;
	float avg;
	cout << "Enter Math score: " << endl;
	cin >> mth;
	cout << "Enter Physics score: " << endl;
	cin >> phy;
	cout << "Enter Programming score: " << endl;
	//taking input and calculating
	cin >> prg;
	avg = static_cast<float>((mth + phy + prg)) / 3;
	/*brackets of static cast need to be before divide sign 
	cuz then the value gets stored as int.*/	
	//only one needs to be converted.
	cout << fixed << setprecision(4);
	//example output has four points
	cout << "The Average is: " << avg << endl;
	return 0;
	//correct output is being displayed.
	//feeling the ragra rn.:(
}