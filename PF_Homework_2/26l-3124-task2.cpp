//mission 2 
//the three crystal challenge
#include<iostream>
#include<iomanip>
//output has 2 points
using namespace std;
int main()
{
	cout << fixed << setprecision(2);
	//declaring and initializing variables2
	int  pur, wei, ttl_wei, ttl_pur, i;
	ttl_wei = 0;
	int ttl_var = 0;
	int count1 = 0;
	int count2 = 0;
	int count3 = 0;
	ttl_pur = 0;
	int max = -1;
	i = 0;
	float avg, crystal;
	//crap ton of initialization
	cout << "Enter Number of Crystals" << endl;
	cin >> crystal;
	if (crystal < 0)
		cout << "Enter valid number." << endl;
	//very similiar to last one
	else
	{
		while (i != crystal)
		{
			//taking input from user
			cout << "Enter weight: " << endl;
			cin >> wei;
			cout << "Enter purity: " << endl;
			cin >> pur;
			if (wei >= 100 && pur >= 95)
				++count1;
			else if (wei >= 50 && pur >= 80)
				++count2;
			else
				++count3;
			if (pur > max)
				max = pur;
			i++;
			//bunch of formulas and if statements
			ttl_wei = ttl_wei + wei;
			ttl_pur = ttl_pur + pur;
			ttl_var = count1 + count2;
		}
		avg = ttl_pur / crystal;
		cout << "Total Weight: " << ttl_wei << endl;
		cout << "Valueable Crystals: " << ttl_var << endl;
		cout << "Legendary Crystals: " << count1 << endl;
		cout << "Highest Purity: " << max << endl;
		cout << "Average Purity: " << avg << endl;
		//displaying output to user
	}
	//correct output is being displayed

}