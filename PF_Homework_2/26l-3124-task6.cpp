//mission 6
#include<iostream>
using namespace std;
int main()
{
	long long ttl_artifacts,artifacts,i, count1, count2, count3, sum1, sum2, large, small;
	string status;
	i = 1;
	count1 = 0;
	count2 = 0;
	count3 = 0;
	sum1 = 0;
	sum2 = 0;
	large = 0;
	small =0;
	//initializing variables
	cout << "Enter Total Artifacts: " << endl;
	cin >> ttl_artifacts;
	if (ttl_artifacts > 0)
	{
		//taking input from user
		while (i <= ttl_artifacts)
			//starting loop
		{
			cout << "Enter Artifacts: " << endl;
			cin >> artifacts;
			//taking input
			if (artifacts > 0)
			{
				count1++;
				sum1 = sum1 + artifacts;
				if (artifacts > large)
					large = artifacts;
				//finding largest
			}
			//using if else to calculate
			else if (artifacts < 0)
			{
				count2++;
				sum2 = sum2 + artifacts;
				if (artifacts < small)
					small = artifacts;
				//finding smallest
			}
			else
				count3++;
			i++;
		}
		if (sum1 > -sum2)
			status = "SAFE";
		else
			status = "FALSE";
		cout << "Safe: " << count1 << endl;
		cout << "Cursed: " << count2 << endl;
		cout << "Empty: " << count3 << endl;
		cout << "Safe Sum: " << sum1 << endl;
		cout << "Cursed Sum: " << sum2 << endl;
		//displaying output to user
		if (large == 0)
			cout << "No Safe Artifacts so no largest value." << endl;
		else
			cout << "Largest Safe: " << large << endl;
		if (small == 0)
			cout << "No Cursed Artifacts,So no smallest value." << endl;
		else
		cout << "Smallest Cursed: " << small << endl;
		cout << "Chest Status: " << status << endl;
	}
	else
		cout << "Enter Positive Value" << endl;
	//showing output to user
	//correct output is being displayed
}