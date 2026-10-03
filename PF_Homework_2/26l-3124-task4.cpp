//mission 4
#include<iostream>
using namespace std;
int main()
{
	//initializing variables
	//long long cuz int was having overflo /:
	long long n, num, odd, even, sum, large, small;
	long long count = 0;
	sum = 0;
	long long product = 1;
	large = -1;
	small = 999;
	even = 0;
	odd = 0;
	//taking input from user
	cout << "Enter Positive Integer: " << endl;
	cin >> n;
	if (n >= 0)
	{
		//edge case
		//while loop
		while (n>0)
		{
			num = n % 10;
			if (num % 2 == 0)
				even++;
			else
				odd++;
			//easy formulas
			n = n / 10;
			sum = sum + num;
			product = product * num;
			count++;
			//calculating smallest and largest
			if (num > large)
					large = num;
			if (num<small)
						small = num;
		}
		cout <<"Digits: "<< count << endl;
		cout << "Digit Sum :"<<sum << endl;
		cout << "Digit product :" << product << endl;
		cout << "Largest Digit :" << large << endl;
		cout << "Smallest Digit :" << small << endl;
		cout << "Even digits :" << even << endl;
		cout << "Odd Digits :" << odd << endl;
		//displaying output
		//correct output is being displayed
		//in sample output there are 4 even and 3 odd
		//0 counts as even so yk
	}
	else
		cout << "Enter A positive Value" << endl;
}
//correct output is being displayed