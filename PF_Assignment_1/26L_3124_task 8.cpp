//task 8 of assignment
//Digital clock calculation
#include<iostream>
using namespace std;
int main()
{
	//initializing variables
	int hr, min, sec,time, sec_add,nw_hr,nw_min,nw_sec;
	//taking input
	cout << "Enter the current hour: " << endl;
	cin >> hr;
	cout << "Enter the current minute: " << endl;
	cin >> min;
	cout << "Enter the current sec: " << endl;
	cin >> sec;
	cout << "Enter seconds to add: " << endl;
	cin >> sec_add;
    //using formulas to calculate.
	hr = hr * 3600;
	min = min * 60;
	time = hr + min + sec+sec_add;
	nw_hr = (time / 3600)%24;
	nw_min = (time % 3600) / 60;
	nw_sec = time % 60;
	//i hate time problems so much.
	//did it myself tho.no help at all.:)
	cout << "New time: " << nw_hr << ":" << nw_min << ":" << nw_sec;
	return 0;
	//coudnt figure out double zeros in example output.srry.:(
	//correct output is being displayed.
	//took some time tbh but was fun.
}