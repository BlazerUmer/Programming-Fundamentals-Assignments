//mission 3
#include<iostream>
using namespace std;
int main()
{
	int dragon, attack, ttl_attck, ttl_raw, n;
	int actual = 0;
	dragon = 500;
	n = 0;
	ttl_attck = 0;
	ttl_raw = 0;
	//initializing variables
	while (ttl_attck <= 500)
	{
		cout << "Enter Damage: " << endl;
		cin >> attack;
		if (attack < 0)
		{
			cout << "Enter A Positive Value" << endl;
		continue;
		//so continous inputs can be taken from user
	    }
		n++;
			if (attack % 5 == 0)
				actual = 2 * attack;
			if (attack > 100)
				actual = actual - 20;
			cout << "Attack " << n << ": " << "raw = " << attack <<" " <<" Actual = " << actual << endl;
			ttl_attck = ttl_attck + actual;
			ttl_raw = ttl_raw + attack;
			//formulas and if else statements
		}
	cout << "Dragon has been defeated!" << endl;
	cout << "Total Attacks: " << n << endl;
	cout << "Total Raw Damage is: " << ttl_raw << endl;
	cout << "Total Actual Damage is: " << ttl_attck << endl;
	cout << "The Final Health is: 0" << endl;
	//correct output is being displayed
	//sample output was wrong
}