//level 6 the wizards final puzzles
//mission 8 .the number transformer
#include<iostream>
using namespace std;
int main()
{
	int max, step, n;
	max = 0;
	step = 0;
	//initializing variables
	cout << "Enter a number:" << endl;
	cin >> n;
	//taking input from user
	if (n > 0)
	{
		//for negative values
		while (n != 1)
		{
			if (n % 2 == 0)
				n = n / 2;
			//using formula
			else
				n = 3 * n + 1;
			cout << n << endl;
			if (n > max)
				max = n;
			//calculating maximum value
			step++;
		}
		cout << "Steps: " << step << endl;
		cout << "Largest value: " << max << endl;
		//displaying output to user
	}
	else
		cout << "Enter a positive value" << endl;
	//correct output is being displayed
}