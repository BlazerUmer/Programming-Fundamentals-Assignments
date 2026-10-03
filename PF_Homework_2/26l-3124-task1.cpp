//The outer island
//level 1
//WE BACKKKKKK
#include<iostream>
using namespace std;
int main()
{
	int count1, count2, count3, count4, chests, i, gold;
	count1 = 0;
	count2 = 0;
	count3 = 0;
	//this was annoying lowkey
	count4 = 0;
	i = 0;
	float avg, sum;
	sum = 0;
	int max = -1;
	//initializing a crap ton of variables
	cout << "Enter the number of chests: " << endl;
	cin >> chests;
	if (chests < 0)
		cout << "Enter a valid positive number" << endl;
	else
		//edge cases :))
	{
		while (i != chests)
		{
			cout << "Enter the gold for each chest" << endl;
			cin >> gold;
			if (gold < 100)
				++count1;
			//a bunch of if else statements
			else if (gold >= 100 && gold < 1000)
				++count2;
			else if (gold >= 1000 && gold < 5000)
				++count3;
			else
				++count4;
			sum = sum + gold;
			//not the most efficient but it works
			if (gold > max)
				max = gold;
			i++;
		}
		avg = sum / chests;
		cout << "Total Treasure: " << sum << endl;
		cout << "Scrap Chests: " << count1 << endl;
		cout << "Ordinary Chests: " << count2 << endl;
		cout << "Rare Chests: " << count3 << endl;
		cout << "Legendary Chests: " << count4 << endl;
		cout << "Average value: " << avg << endl;
		cout << "Highest Valued Chest: " << max << endl;
		//displaying output to user
		//correct output is being displayed
	}
	//i dont put return 0 cuz its useless here
}