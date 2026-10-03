//mission 9
//the survival sequence
#include<iostream>
#include<climits>
using namespace std;
int main()
{
	//initializing variables
	int energy, even, odd, count, max, small;
	even = 0;
	odd = 0;
	count = 0;
	max = INT_MIN;
	small = INT_MAX;
	cout << "Enter energy: " << endl;
	cin >> energy;
	//taking input from user
	if (energy > 0)
	{
		//for negative value
		while (energy > 0)
		{
			if (energy % 2 == 0)
			{
				energy = energy / 2;
				even++;
				//for even calculation
			}
			else
			{
				energy = energy - 7;
				odd++;
				//for odd calculation
			}
			if (energy % 5 == 0)
				energy = energy - 3;
			if (energy > max)
				max = energy;
			if (energy < small)
				small = energy;
			//calculating smallest and largest value
			count++;
		}
		cout << "Rounds: " << count << endl;
		cout << "Highest Energy: " << max << endl;
		cout << "Lowest Energy: " << small << endl;
		cout << "Even Rounds: " << even << endl;
		cout << "Odd Rounds: " << odd << endl;
		//showing output to user
		//correct output is being displayed
	}
	else
		cout << "Enter a positive value" << endl;

}