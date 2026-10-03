//mission 10
#include<iostream>
using namespace std;
int main()
{
	int ttl_enc, enc, health, gold, score,survived;
	health = 100;
	gold = 0;
	score = 0;
	survived = 0;
	string rank;
	//initializing variables
	cout << "Enter Total Encounters: " << endl;
	cin >> ttl_enc;
	cout << "1=Monster." << endl;
	cout << "2=Treasure." << endl;
	cout << "3=Trap." << endl;
	cout << "4=Healing Fountain." << endl; 
	cout << "5=Ancient Artifact." << endl;
	//taking input and displaying output
	if (ttl_enc > 0)
	{
		//for negative values
		while (survived!=ttl_enc)
		{
			cout << "Enter Encounter: " << endl;
			cin >> enc;
			if (enc == 1)
				health = health - 20;
			else if (enc == 2)
			{
				gold = gold + 100;
				score = score + 10;
			}
			//using if else statements and calculating encounter
			else if (enc == 3)
			{
				health = health - 15;
				score = score - 5;
			}
			else if (enc == 4)
				health = health + 25;
			else if (enc == 5)
			{
				gold = gold + 250;
				if (health < 40)
					score = score + 50;
				else
					score = score + 30;
			}
			if (health > 100)
				health = 100;
			//edge cases
			if (enc > 5 || enc <= 0)
			{
				cout << "Enter A Valid Encounter Value." << endl;
				continue;
			}
			if (health<=0)
			{
				cout << "Game Over!" << endl;
				break;
			}
			survived++;
			//counter for encounters
			
		}
		if (score >= 100)
			rank = "LEGENDARY TREASURE HUNTER";
		else if (score >= 50)
			rank = "MASTER EXPLORER";
		else if (score >= 20)
			rank = "SURVIVOR";
		else
			rank = "NOVICE";
		//calculating rank
		cout << "Expedition Complete!" << endl;
		cout << "Final Health: " << health << endl;
		cout << "Gold: " << gold << endl;
		cout << "Score: " << score << endl;
		cout << "Encounters Survived: " << survived << endl;
		cout << "Rank: : " << rank << endl;
	//displaying output to user
	}
	else
		cout << "Enter a positive value" << endl;
	//correct output is being displayed
}