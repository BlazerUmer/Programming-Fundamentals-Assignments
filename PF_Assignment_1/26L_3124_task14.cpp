//task 14 of assignment
//Network Packet Fragmentation
#include<iostream>
using namespace std;
int main()
{
	//initializing variables
	int ttl_byt,pck_sze,lft_byt, fll_pck;
	//packet size looked like it was fixed at 1024 in question statement.
	//but i wasnt sure so took input.
	cout << "Enter the total Bytes: " << endl;
	cin >> ttl_byt;
	//taking input
	cout << "The packet size is: "<< endl;
	cin >> pck_sze;
	fll_pck = ttl_byt / pck_sze;
	lft_byt = ttl_byt % pck_sze;
	//calculating
	cout << "Packets to transmit are: " << fll_pck << endl;
	cout << "Leftover Bytes are: " << lft_byt << endl;
	return 0;
	//if output is needed in same line then remove endl and use space as needed.
	// wasnt sure so just did new line.
	//correct output is displayed.
	//its 1 am rn.almost done tho.:(
}