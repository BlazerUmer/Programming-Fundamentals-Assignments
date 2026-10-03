//level 5. the volcano
//mission 7.master lock
#include<iostream>
using namespace std;
int main()
{
	//initializing variables
	int n, code, energy, attempts, num1;
	int energy_remaining = 100;
	int i = 0;
		int count=0;
	cout << "Enter Secret code: " << endl;
	cin >> code;
	cout << "Enter Attempts allowed: " << endl;
	cin >> n;
	//taking input from user
	energy = 100 / n;
	if (n > 0)
	{
		while (1)
		{
			count++;
			cout << "Enter Number: " << endl;
			cin >> num1;
			if (num1 > code)
			{
				cout << "Attempt " << count << " : " << "Too High" << endl;
				energy_remaining -= energy;
				//calculating energy
				
			}
			else if (num1 < code)
			{
				cout << "Attempt " << count<< " : " << "Too Low" << endl;
				energy_remaining -= energy;
				
			}
			else
				//break if correct code is guessed
			{
				cout << "Attempt " << count<< " : " << "Correct!" << endl;
				break;
			}
			i++;
			if (i == n || energy == 0)
				break;
		}
		if (i==n || energy == 0)
			cout << "Vault locked" << endl;
		else
			//showing output to user
		cout << "VAULT UNLOCKED!" << endl;
		cout << "Attempts Used: " << i << endl;
		cout << "Energy Remaining: " << energy_remaining << endl;
	}
	else
		cout << "Enter a positive number" << endl;
	//correcr output is being displayed
}