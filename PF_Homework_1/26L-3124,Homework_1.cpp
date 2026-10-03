//we back with anotha one.
//homework 1
#include<iostream>
#include<iomanip>
//might need it later
using namespace std;
int main()
{
	//question selection menu.
	//initalizing question number variable
	int question;
	cout << "-----Enter The Question Number(1-11)-----: " << endl;
	cin >> question;
	cout << "Question Number Entered is: " << question << endl;
	//taking input from user
		//using if else if else statement
		//program for bmi calculation
	if (question == 1)
	{
		//initializing variables.
		float bmi, hgt_bmi, weight_bmi;
		cout << "This program is for calculating BMI." << endl;
		cout << "Enter the height(meters) and weight(kg): " << endl;
		cin >> hgt_bmi >> weight_bmi;
		//taking input
		bmi = weight_bmi / (hgt_bmi * hgt_bmi);
		//calculating.googled the formula cuz didnt know it.
		cout << fixed << setprecision(1);
		//to give output in 1 point cuz example output had this.0
		cout << "The BMI is: " << bmi << endl;
		cout << "Which is: " << endl;
		//displaying bmi to user .wasnt mentioned but might as well.
		if (bmi < 18.5)
			cout << "\"Underweight\"";
		else if (bmi >= 18.5 && bmi <= 24.9)
			cout << "\"Normal\"";
		//cant forget the >=.
		else if (bmi >= 25 && bmi <= 29.9)
			cout << "\"Overweight\"";
		else
			cout << "\"Obese\"";
		//displaying correct output.
	}
	//next one
	//program for even and odd.
	else if (question == 2)
	{
		//initialzing variables
		int even_odd;
		cout << "This program is for Finding Even or Odd." << endl;
		cout << "Enter The Number for Even or Odd calculation: " << endl;
		cin >> even_odd;
		//taking input
		cout << "Number entered is: " << even_odd << endl;
		//displaying entered number to user
		if (even_odd % 2 == 0)
			cout << "\"Even\"";
		//very simple if else structure
		else
			cout << "\"Odd\"";
		//correct output is being displayed
	}
	//program to calculate average and display result
	else if (question == 3)
	{
		//initializing variables
		int mark1, mark2, mark3;
		float avg_result;
		cout << "This program is for calculating average and determining result." << endl;
		cout << "Enter Marks for First Subject: " << endl;
		cin >> mark1;
		cout << "Enter Marks for Second Subject: " << endl;
		cin >> mark2;
		cout << "Enter Marks for Third Subject: " << endl;
		cin >> mark3;
		//taking input from user.
		avg_result = static_cast<float>((mark1 + mark2 + mark3)) / 3;
		cout << fixed << setprecision(3);
		//calculating and typecasting to float.
		//setting points to 3 cuz looked nice for average.
		cout << "The Average of Marks is: " << avg_result << endl;
		cout << "Which is: " << endl;
		//again displaying calculation to user.
		if (avg_result >= 80)
			cout << "\"A\"";
		else if (avg_result >= 70 && avg_result < 80)
			cout << "\"B\"";
		else if (avg_result >= 60 && avg_result < 70)
			cout << "\"C\"";
		//cant forget &&.
		else if (avg_result >= 50 && avg_result < 60)
			cout << "\"D\"";
		else
			cout << "\"F\"";
		//relatively simple if else statements.
	//correct output is being displayed.
	}
	else if (question == 4)
		//program to find biggest out of 3.
		//this is very fun
	{
		int big_small1, big_small2, big_small3;
		//initializing variables.
		cout << "This is the program for finding biggest out of three numbers." << endl;
		cout << "Enter the First Number: " << endl;
		cin >> big_small1;
		cout << "Enter the Second Number: " << endl;
		cin >> big_small2;
		cout << "Enter the Third Number: " << endl;
		cin >> big_small3;
		//taking input.
		cout << "Numbers entered are: " << big_small1 << " ," << big_small2 << " ," << big_small3 << endl;
		if (big_small1 == big_small2 && big_small1 == big_small3)
			cout << "All Three Numbers are Equal.";
		//almost forgot about the equal one.
		else if (big_small1 == big_small2 && big_small1 > big_small3)
			cout << "The First and Second Numbers Entered are Equal and the Biggest: " << big_small1 << " ," << big_small2;
		else if (big_small2 == big_small3 && big_small2 > big_small1)
			cout << "The Second and Third Numbers Entered are Equal and the Biggest: " << big_small2 << " ," << big_small3;
		else if (big_small1 == big_small3 && big_small1 > big_small2)
			//spent wayyyyy too much time on this
			//this was lowkey like a personal project lol.
			cout << "The First and Third Numbers Entered are Equal and the Biggest: " << big_small1 << " ," << big_small3;
		else if (big_small1 >= big_small2 && big_small1 >= big_small3)
			//i focused on evry single possibibility and position as well.
			//only thing i missed was displaying if 2 numbers are equal and not the biggest.but that would have way too much.
			//lowkey got obssessed lol.:)
			//overthinked this a bit too much.
			cout << "The First Number is the Biggest: " << big_small1;
		else if (big_small2 >= big_small1 && big_small2 >= big_small3)
			cout << "The Second Number is the Biggest: " << big_small2;
		else
			cout << "The Third Number is the Biggest: " << big_small3;
		//no help was taken.
		//took a lot of time and result testing
		//correct output is being displayed.
	}
	else if (question == 5)
	{
		//program for finding vowels and consonants.
		char vow;
		//initialzing variables
		cout << "This is the program to determine Vowel or Consonant." << endl;
		cout << "Enter a Letter: " << endl;
		cin >> vow;
		//taking input
		cout << "Letter entered is: " << vow << endl;
		if (vow == 'a' || vow == 'A' || vow == 'i' || vow == 'I' || vow == 'e' || vow == 'E' || vow == 'o' || vow == 'O' || vow == 'u' || vow == 'U')
			cout << "The Letter entered is a Vowel.";
		//thought about adding a number checker but was too long.
		//easy condition.
		else
			cout << "The Letter entered is a Consonant.";
	}
	//correct out is being displayed
	//i forgot the brackets and coudnt solve it for like 15 mins :(.
	else if (question == 6)
		//program to check divisibilty
	{
		int divisible;
		//initializing variables.
		cout << "This is the program to check Divisibility of Number by 3 and 5." << endl;
		cout << "Enter a Number:" << endl;
		cin >> divisible;
		//taking input
		cout << "Number entered is: " << divisible << endl;
		if (divisible % 3 == 0 && divisible % 5 == 0)
			//used division sign at first lol.
			//fixed it tho obv
			cout << "The Number Entered is Divisible by Both 3 and 5.";
		else if (divisible % 3 == 0)
			cout << "The Number Entered is Divisible by 3 Only.";
		else if (divisible % 5 == 0)
			//coudnt handle invalid input like letters.srry :(
			cout << "The Number Entered is Divisible by 5 Only";
		else
			cout << "The Number Entered is Not Divisible by 3 or 5.";
		//correct output is being displayed.
	}
	else if (question == 7)
		//program to find result
	{
		char grade;
		//initializing variables
		int asci;
		cout << "This is the program to show result of student." << endl;
		cout << "Enter The Grade(A,B,C,D,F): " << endl;
		//E is not included in question for some reason
		cin >> grade;
		cout << "Grade Entered is: " << grade << endl;
		asci = static_cast<int>(grade);
		//had to search ascii values.srry.:(
		if (asci == static_cast<int>('A') || asci == static_cast<int>('B') || asci == static_cast<int>('C') || asci == static_cast<int>('D') 
			|| asci == static_cast<int>('a') || asci == static_cast<int>('b') || asci == static_cast<int>('c') || asci== static_cast<int>('d'))
			//couldve also done >= <= to.
			//did typecasting here as well cuz question mentioned it.
			//didnt really need it tho could have used ascii values.
			cout << "\"Pass\"";
		else if (asci == static_cast<int>('F') || asci == static_cast<int>('f'))
			cout << "\"Fail\"";
		//easy condition
		else
			cout << "Invalid Grade Entered.";
		//correct output is being displayed
		//did a lil extra with the else lol.
	}
	else if (question == 8)
		//program to check triangle
	{
		int a, b, c;
		//initialzing variables.
		cout << "This is the program for verifying triangle and its types." << endl;
		cout << "Enter The First Length: " << endl;
		cin >> a;
		cout << "Enter The Second Length: " << endl;
		cin >> b;
		cout << "Enter The Third Length: " << endl;
		cin >> c;
		//taking input
		if (a + b > c && c + b > a && a + c > b)
			//and is required cuz all three conditions must be truee
			//using math and logic
		{
			cout << "The Lengths Make A Triangle" << endl;
			if (a == b && a == c)
				cout << "It is an Equilateral Triangle." << endl;
			else if (a == b || b == c || a == c)
				//had some help cuz didnt know a triangle could have more that one type(googled it, no ai)
				//can be right angle and something else
				cout << "It is an Isosceles Triangle." << endl;
			else if (a != b && b != c && a != c)
				//else would be fine here as well:)
				cout << "It is a Scalene Triangle." << endl;
			//if statement for right angle cuz triangle can have 2 types
			if ((a * a + b * b == c * c) || (a * a + c * c == b * b) || (b * b + c * c == a * a))
				//formula was ez tho
				//using or cuz we dont know biggest length.
				cout << "It is a Right Angled Triangle." << endl;
		}
		else
			cout << "The Lengths Do Not Make A triangle." << endl;
		//correct output is being displayed
	}
	else if (question == 9)
		//program to use operators
	{
		float num_1, num_2, sum, sub;
		float div, mult;
		//variable types werent mentioned so i did float
		//initializing variables
		char op;
		cout << fixed << setprecision(2);
		cout << "This is The Arithmetic Calculator:" << endl;
		cout << "Enter The First and Second Number:" << endl;
		cin >> num_1 >> num_2;
		cout << "Enter An Operator(+,-,*,/):" << endl;
		cin >> op;
		//taking input and calculating
		cout << "Numbers and operator entered are: " << num_1 << " " << op << " " << num_2 << endl;
		if (op == '+')
		{
			sum = num_1 + num_2;
			cout << "The Result of Sum is: " << sum;
			//created variables for sum and stuff cuz good coding practice or smthing
		}
		//coudlve done calculation in main function but this separates and clarifies evrything
		else if (op == '-')
		{
			sub = num_1 - num_2;
			cout << "The Result of Sub is: " << sub;
		}
		else if (op == '*')
		{
			mult = num_1 * num_2;
			cout << "The Result of Multiplication is: " << mult;
		}
		else if (op == '/')
			//thought about using typecasting but wasnt needed 
		{
			if (num_2 == 0)
				cout << "As Second Number is Zero,So Result is Undefined." << endl;
			else
				//did div after cuz 0 could cause errors.doesnt cause errors with float tho :)
			{
				div = num_1 / num_2;
				cout << "The result of Division is: " << div << endl;
			}
		}
		else
			cout << "Enter A valid Operator." << endl;
		//cant forget the else
	}
	//logic is correct
	//correct output is being displayed.
	else if (question == 10)
		//doing this at 3 am brh:(((
			//program for atm
	{
		int balance, withdrawal, new_with;
		//initializing variables
		cout << "This is the program for ATM Withdrawal." << endl;
		cout << "Enter Account Balance: " << endl;
		cin >> balance;
		cout << "Enter Withdrawal Amount(Multiple of 100): " << endl;
		cin >> withdrawal;
		//taking input
		new_with = balance - withdrawal;
		//calculating here cuz might as well
		cout << "Account Balance And Withdrawal Amount Entered are: " << balance << " , " << withdrawal << endl;
		if (withdrawal > balance && withdrawal % 100 != 0)
			cout << "\"Insufficient Balance And Invalid Amount\"";
		//might as well do this
		//takes care of almost evry case and possibility
		//srry i get obssessed with the possibilities:((
		else if (withdrawal > balance)
			cout << "\"Insufficient Balance\"";
		else if (withdrawal % 100 != 0)
			//simple if else statements
			cout << "\"Invalid Amount\"";
		else
			cout << "New Balance is: " << new_with << endl;
		//correct output is being displayed
		//almost done :)))
	}
	else if (question == 11)
		//prgram for temperature
	{
		float celcius, fahren;
		//initializing variables
		//using float cuz wasnt specified
		cout << fixed << setprecision(1);
		//one point looks cool lol:)
		cout << "This is the program for temperature conversion" << endl;
		cout << "Enter Temperature in Celcius: " << endl;
		cin >> celcius;
		//taking input
		fahren = (celcius * static_cast<float>(9) / 5) + 32;
		//wasnt necessary to typecast but question says to do so
		//would have worked fine without typecast
		//calculation
		cout << "Temperature in Fahrenheit is: " << fahren << " F" << endl;
		if (fahren < 50)
			cout << "\"Cold\"";
		else if (fahren >= 50 && fahren <= 86)
			cout << "\"Moderate\"";
		//basic if else
		else
			cout << "\"Hot\"";
	}
	//correct output is being displayed
	else
		cout << "Question Number Entered is Invalid." << endl;
	//finally done
	//did this in 2 nights lol
	//was fun .did it myself.only looked up the one triangle formula:((
	//but learned it tho and now i know it
	//learned iomanip and setprecision in last assignment and used it a ton here as well
	//sorry if i did anything wrong or did smthing wrong.:))))
}