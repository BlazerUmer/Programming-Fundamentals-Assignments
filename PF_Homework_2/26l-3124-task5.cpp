//mission 5
#include<iostream>
#include<climits>
//for int max and int min
using namespace std;
int main()
{
	int n,ttl_n, large, small, second, count;
	large = INT_MIN;
	small = INT_MAX;
	second = INT_MIN;
	count = 1;
	//initializing varibales
	cout << "Enter total numbers to be entered: " << endl;
	cin >> ttl_n;
	//taking input from user
	cout << "Enter Numbers: " << endl;
	if (ttl_n < 2)
		cout << "Enter more than 2 Numbers" << endl;
	//edge case
	else
	{
		while (count <= ttl_n)
		{
			cin >> n;
			if (n > large)
			{
				second = large;
				large=n;
			}
			//using if else statements
			else if(n>second && n != large)
				second = n;
			if (n < small)
			small=n;
			count++;
		}
		cout << "Largest Value: " << large << endl;
		cout << "Second Largest Value: " << second << endl;
		cout << "Smallest Value: " << small << endl;
		//displaying output to user
		//correct output is being displayed
	}
}