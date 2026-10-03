//task 3 of assignment.
//The Relay Race Analyst.
#include<iostream>
#include<iomanip>
//needed for setting precision of points.:)
using namespace std;
int main()
{
	//initalizing variables.no typecasting.
	float d1, t1, d2, t2, d3, t3, ttl_distance, ttl_time,avg_speed, run2spd, spddiff;
	//taking input from user.
	cout << "Enter Distance and Time for the first runner: " << endl;
	cin >> d1 >> t1;
	cout << "Enter Distance and Time for the second second: " << endl;
	cin >> d2 >> t2;
	cout << "Enter Distance and Time for the third runner: " << endl;
	cin >> d3 >> t3;
	//calculating using formulas.
	ttl_distance = d1 + d2 + d3;
	ttl_time = t1 + t2 + t3;
	avg_speed = ttl_distance / ttl_time;
	cout << "Total Distance and Total Time are: " << ttl_distance << ", " << ttl_time << endl;
	cout << fixed << setprecision(2) << endl;
	//included a header file for this.
	//sets point precision to 2 for evrything below.
	//had some help as could not figure it out.
	cout << "Average speed is: " << avg_speed <<"m/s" <<endl;
	run2spd = d2 / t2;
	spddiff = run2spd-avg_speed;
	cout << "Speed of runner 2 is: " << run2spd <<"m/s"<<endl;
	cout << "Speed difference between runner 2 and average is: " << spddiff <<"m/s"<<endl;
	return 0;
	//displays output correctly as specified.
	//output format is not exactly the same as example output that is given.:(
	//very long program.for me atleast lol :)
}