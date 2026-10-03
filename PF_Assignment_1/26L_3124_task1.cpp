//Task 1 of Assignment.
//The Bacterial Outbreak.
#include<iostream>
using namespace std;
int main()
{
//variables are being initialized.
	long p0, fnl_pop;
	//long is used incase a large value is inputted.
	int tfor_dbl, elp_time;
	cout << "Enter the population of bacteria: " <<endl;
	cin >> p0;
	//output is being displayed and input is being taken from user.
	cout<<"Enter the time for doublings: " << endl;
	cin >> tfor_dbl;
	//final population and elapsed time are being calulated.
	fnl_pop = p0 * 2 * 2 * 2;
	cout<<"The final population after three doublings is: "<<fnl_pop << endl;
	elp_time =tfor_dbl * 3;
	cout << "The elapsed time is: " << elp_time / 60 << " hours " << elp_time % 60 << " minutes" << endl;
	return 0;
	//final result is displayed.Elapsed time is displayed in hours and minutes.
    //code displays correct output.
	//the assignment has been started.:)
	//not using the variable names and format given in example input/output
	//it doesnt say that using those is mandatory:)
	// trying to write understandable code and variable names.
	//will use those in pseudocode and flowchart tho.
}